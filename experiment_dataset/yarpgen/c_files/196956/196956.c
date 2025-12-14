/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((max(53, 224)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = ((543382180185986042 || ((max(12023529886138022336, 3)))));
                    var_21 ^= (max((-9223372036854775807 - 1), -14));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_22 &= (22 - -6457696883337981804);
                        arr_11 [i_1] [i_2 - 1] [6] [6] [i_1] = (((max(63, (arr_3 [i_0] [i_1]))) << (((((62588 * (arr_7 [i_3])))) - 62570))));
                        arr_12 [i_0] [7] [i_2] [i_1] = (var_15 ^ var_11);
                        arr_13 [i_0] [i_0] [13] [i_1] = ((((3 * -3) || ((min(var_11, var_3))))));
                        var_23 ^= (((max(((((arr_4 [i_0]) | -22))), (0 - 9029935858808346713))) ^ (((((max((arr_8 [4] [i_1] [i_2] [8]), (arr_1 [i_0] [i_1])))) ^ var_4)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
