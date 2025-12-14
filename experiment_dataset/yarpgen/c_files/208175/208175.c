/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (((((((56684 / var_11) < (~198103117))))) * (max((-1832782996 | 3566046873764753030), (max(1, var_4))))));
        var_12 = ((1 << (8974724200173978852 - 8974724200173978839)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_0] [i_0 - 2] = (((11423212907499466593 <= (arr_5 [i_1 + 1] [i_0 + 1] [i_0 + 2] [i_0 + 1]))) ? ((((3566046873764753043 <= (arr_5 [i_1 - 1] [i_0 - 2] [i_0 - 2] [i_0 - 2]))))) : (((arr_5 [i_1 + 1] [i_0 + 1] [i_0 - 3] [i_0 - 1]) ? (arr_5 [i_1 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]) : -27915)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_3] [i_2] [i_1 - 1] [i_0] = ((((((14880697199944798585 <= (arr_13 [i_0 - 2]))))) >= (arr_4 [i_1 - 1] [i_1 + 1] [i_0 - 1])));
                                var_13 = ((-691214605 ? 14880697199944798575 : 17086291977326421452));
                                var_14 = (max(var_14, (max(6291060510816758994, 5304865806267318296))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_15 = ((((arr_11 [i_5] [i_5] [8] [20] [i_5] [i_5] [i_5]) ? (arr_11 [i_5] [i_5] [8] [i_5] [i_5] [4] [i_5]) : (arr_11 [i_5] [i_5] [1] [1] [i_5] [i_5] [i_5]))));
        var_16 = var_6;
    }
    var_17 = ((((((min(13141878267442233309, var_3)) << (-598874469 - 59033)))) ? var_8 : 8114746237867236847));
    #pragma endscop
}
