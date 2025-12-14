/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191403
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
    var_14 = ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 13; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) var_3);
                            var_15 = ((/* implicit */int) var_4);
                            arr_10 [i_0] [i_1] [i_2 - 2] [i_1] = ((/* implicit */_Bool) var_6);
                            arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_3);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    arr_14 [i_0] [i_1] [i_4] = ((/* implicit */unsigned long long int) var_7);
                    var_16 ^= ((/* implicit */signed char) var_13);
                    var_17 ^= ((/* implicit */short) var_3);
                    arr_15 [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) var_8);
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_6))));
}
