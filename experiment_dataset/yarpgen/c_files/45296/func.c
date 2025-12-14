/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45296
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [(short)6] [i_1] = ((/* implicit */signed char) var_16);
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_14 [i_0] [i_3] = ((/* implicit */int) var_15);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_4 = 1; i_4 < 13; i_4 += 3) 
                            {
                                var_18 *= ((/* implicit */_Bool) var_5);
                                arr_18 [i_0] [i_0] [i_2] [i_3] [i_4 - 1] [0ULL] = ((/* implicit */unsigned int) var_2);
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_1))));
                                arr_19 [i_0] [i_4] [i_2] [6U] [i_4] [i_4] [i_4] &= ((/* implicit */signed char) var_4);
                            }
                            arr_20 [i_0 - 1] [i_0 - 1] [i_2] [i_0] [(_Bool)0] [i_3] = ((/* implicit */_Bool) var_3);
                            arr_21 [(short)4] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */int) var_0);
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_15))));
            }
        } 
    } 
    var_21 = var_1;
}
