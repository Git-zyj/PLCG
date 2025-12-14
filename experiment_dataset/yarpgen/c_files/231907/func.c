/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231907
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_16 ^= ((/* implicit */unsigned char) max((min((var_12), ((~(((/* implicit */int) var_4)))))), (var_8)));
    var_17 = ((/* implicit */short) var_11);
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) min((((/* implicit */int) var_0)), ((+(max((var_5), (var_3)))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_3] [(signed char)12] = ((/* implicit */short) var_0);
                        var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) min((((/* implicit */short) var_10)), (var_2)));
                        var_22 -= ((/* implicit */short) max((((/* implicit */int) var_7)), ((+(var_15)))));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (+((+((-(var_9))))))))));
                        arr_12 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) var_6);
                        var_24 = ((/* implicit */signed char) min((var_14), (((/* implicit */unsigned int) var_6))));
                    }
                    for (int i_5 = 1; i_5 < 23; i_5 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) var_0))));
                        var_26 = ((/* implicit */_Bool) min((var_8), (((/* implicit */int) min(((!(((/* implicit */_Bool) var_4)))), (var_13))))));
                        var_27 = ((/* implicit */_Bool) max((max((min((var_11), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) var_15))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) var_4))));
}
