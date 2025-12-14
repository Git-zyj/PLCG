/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (-var_8 + var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = ((((((var_5 ? (arr_0 [8]) : var_8)) * ((((!(arr_0 [3]))))))) == var_9));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_12 = (arr_4 [14] [17] [7]);
                                var_13 = ((+(((arr_9 [i_2 - 2] [i_4 - 3] [i_1 + 1]) * (arr_3 [i_2 + 3] [i_4 + 1])))));
                                var_14 = (((arr_7 [21] [5]) == (min((((var_6 ? var_3 : (arr_12 [19] [1] [1] [22] [1])))), (arr_2 [1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = ((-((max(var_3, var_5)))));
    var_16 = (((((var_2 && ((max(var_6, var_4)))))) == var_2));
    #pragma endscop
}
