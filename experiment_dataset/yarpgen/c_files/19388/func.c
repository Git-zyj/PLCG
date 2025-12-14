/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19388
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
    var_14 ^= ((/* implicit */signed char) min((var_4), (((/* implicit */unsigned long long int) var_2))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    var_15 = ((/* implicit */unsigned long long int) var_3);
                    arr_8 [2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 2])))));
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (min((((/* implicit */unsigned long long int) var_9)), (max((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) ((arr_3 [i_0 + 1]) - (((/* implicit */long long int) 3606348385U)))))))))));
                    arr_9 [i_0] [i_1] [4U] [i_2] = ((/* implicit */signed char) ((min((arr_6 [i_0] [i_0] [i_0] [i_0 - 3]), (((/* implicit */unsigned long long int) arr_7 [i_0])))) & ((~(max((var_6), (((/* implicit */unsigned long long int) var_11))))))));
                }
                for (short i_3 = 2; i_3 < 10; i_3 += 2) 
                {
                    arr_13 [i_3] |= ((/* implicit */unsigned long long int) arr_3 [i_0 - 2]);
                    var_17 &= ((/* implicit */short) ((arr_6 [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_3 + 1]) / (((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 - 2] [i_0 - 3] [i_3 - 2])) ? (((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0 + 1])) : (arr_6 [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_3 - 2])))));
                    var_18 = ((/* implicit */short) ((signed char) (-(max((((/* implicit */long long int) 4294967295U)), (4602678819172646912LL))))));
                }
                var_19 = ((/* implicit */int) (short)706);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_11))));
}
