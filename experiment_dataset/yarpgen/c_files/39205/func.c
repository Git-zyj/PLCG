/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39205
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
    var_11 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 1; i_4 < 20; i_4 += 2) 
                            {
                                var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) arr_6 [i_3]))));
                                var_13 = ((/* implicit */signed char) (+(max((((/* implicit */unsigned long long int) var_7)), (var_6)))));
                                var_14 = arr_8 [i_2] [i_0] [i_2];
                            }
                            arr_13 [i_3] [i_2] [i_1] [i_2] [i_0] = max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [i_2] [i_1] [5U]))))));
                        }
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */long long int) arr_6 [i_0]);
            }
        } 
    } 
    var_15 += ((/* implicit */long long int) var_7);
    var_16 ^= ((/* implicit */int) var_8);
}
