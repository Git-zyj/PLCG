/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] |= min(0, ((((((arr_2 [i_1 - 4]) - var_10))) / var_5)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((min((-9223372036854775807 - 1), (arr_4 [i_1] [i_1 - 4] [i_3 - 2]))) * (arr_8 [i_0] [9] [i_1 - 2] [i_1 + 1]));
                            var_19 = (min(var_19, (((((((((-6799925089368397101 ? -6799925089368397101 : (arr_10 [1] [i_2] [i_2] [i_2] [i_2] [i_2])))) ? 32764 : 127))) ? (min((82 == 6799925089368397100), ((-(arr_9 [i_0] [i_0]))))) : -20)))));
                        }
                    }
                }
                var_20 |= 0;
                arr_13 [i_0] [i_0] = ((18446744073709551599 * (((arr_9 [i_1 + 1] [i_1 + 1]) ^ (min((arr_10 [i_0] [i_1 - 3] [i_1] [8] [9] [i_1]), 18446744073709551599))))));
            }
        }
    }
    var_21 |= (((((max(var_3, var_7)) == -var_9)) ? 70 : ((-(-1158799054 - 9234625182193123895)))));
    var_22 = var_18;
    var_23 = var_7;
    #pragma endscop
}
