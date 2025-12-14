/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40192
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned long long int) (~(((arr_5 [i_0] [i_1] [i_2 - 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_1] [i_0]))) : (4294967295U)))));
                    var_21 = ((unsigned int) (~(4294967295U)));
                    var_22 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)0))));
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        var_23 = ((/* implicit */long long int) min((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) != (((/* implicit */int) arr_4 [14U] [i_1] [i_2 + 2])))))));
                        arr_10 [i_3] [i_3] [i_3] [6ULL] = ((/* implicit */int) ((unsigned int) (-(539477520U))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */signed char) 2432883226483280329LL);
                        arr_15 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) (((+(arr_1 [i_0]))) * (((/* implicit */unsigned long long int) var_9))));
                        arr_16 [i_0] = ((/* implicit */short) 5U);
                    }
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_8 [0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14)))))) << (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_9 [11U] [i_2] [i_1] [i_2 + 2] [i_2] [i_0])))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */int) var_0);
    var_26 &= ((/* implicit */short) var_18);
}
