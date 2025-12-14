/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238131
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
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) var_13);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (+(min(((-(((/* implicit */int) arr_12 [i_0] [i_3] [i_3] [i_3])))), ((+(((/* implicit */int) (_Bool)0)))))))))));
                        var_16 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18729)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : ((~(arr_10 [i_2] [i_3]))))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_13 [i_0] [i_0] [i_0])), ((-(((((/* implicit */int) arr_11 [i_0 + 1] [6] [i_0])) / (((/* implicit */int) (signed char)-24))))))));
    }
    /* vectorizable */
    for (signed char i_4 = 1; i_4 < 19; i_4 += 2) 
    {
        var_18 = ((/* implicit */_Bool) var_10);
        var_19 = ((/* implicit */unsigned int) (signed char)-20);
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) arr_9 [i_4]))));
        var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_4]))));
    }
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned int) var_3)))))));
}
