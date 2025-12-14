/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((~(max(((var_8 ? var_11 : 2883850646)), ((max(var_15, var_6))))))))));
    var_19 = (var_5 == -948747347);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 + 3] [i_0] [i_0] [i_0] [i_0] = (max(2355431569, ((((max((arr_2 [14] [i_4]), -1127641669)) / -93)))));
                                var_20 -= ((((~(arr_8 [i_0] [i_0 + 2] [i_1 - 1] [i_2 - 1] [i_2] [20]))) == (((max((arr_1 [i_0 + 3]), (arr_1 [4])))))));
                                var_21 = ((~((((((arr_1 [i_4]) ^ 2147483647))) ^ (arr_7 [i_2] [i_2 + 1] [i_2 - 1])))));
                            }
                        }
                    }
                    var_22 = (max(8641856473120215853, ((((arr_7 [i_2 - 1] [i_2] [i_2 + 1]) ? (arr_11 [i_0 + 4] [i_0] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_0]) : 882706187)))));
                    var_23 -= ((((((arr_7 [i_0 - 1] [13] [i_2]) | -1996217684))) || (arr_10 [i_2 + 1] [i_1 + 1] [i_2 - 1] [11])));
                    var_24 *= (max(((882706187 ? 2837715590303269594 : (arr_1 [i_0 - 2]))), (arr_9 [i_0 + 4] [3] [i_1 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
