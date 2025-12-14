/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47040
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
    var_15 ^= ((/* implicit */long long int) var_13);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        arr_9 [i_0] [i_1] [i_3] [i_3] |= ((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) var_10)))));
                        arr_10 [i_0] [i_1] [i_2] [i_3] |= ((/* implicit */unsigned short) (+(((/* implicit */int) var_6))));
                        var_16 |= ((/* implicit */signed char) var_8);
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 1; i_4 < 19; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */long long int) (-(arr_0 [i_0 + 3] [i_1])));
                        var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_4 - 1] [i_0 + 3] [i_0 + 3] [i_0 + 3]))));
                        var_19 = ((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_2] [i_2]);
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_2 [i_5])))) <= (((/* implicit */int) arr_14 [i_0] [i_2] [i_5]))));
                        arr_16 [i_0] [i_0] [i_0] [i_0] |= (!((!(((/* implicit */_Bool) var_0)))));
                    }
                    var_21 = ((/* implicit */unsigned int) var_7);
                }
            } 
        } 
    } 
}
