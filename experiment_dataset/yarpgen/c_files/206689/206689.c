/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 &= ((!((((arr_1 [i_0]) % (arr_0 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (((max(55573, 134217664)) == ((max((arr_6 [i_0] [i_1 - 3] [i_2 - 2] [i_2]), (arr_6 [i_0] [i_1 - 3] [i_2 - 2] [i_0]))))));
                    arr_8 [i_2 - 1] = (((((((min((arr_1 [i_2 - 1]), 1)) == ((((arr_4 [i_0] [15] [i_0]) - (arr_4 [i_0] [i_1] [i_2 + 1])))))))) == (((arr_4 [i_2 - 3] [i_1 - 3] [i_2]) % 6472710759726499611))));
                    var_19 *= (arr_2 [i_1] [i_1] [i_2 - 3]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((((arr_0 [4] [19]) == (((0 == (arr_6 [i_0] [i_1 + 2] [5] [11]))))))))));
                                var_21 = (((arr_3 [i_0]) + (((max((arr_2 [i_0] [5] [i_2]), -1738753257))))));
                                arr_13 [i_0] [6] [i_3] [i_3] [4] = (arr_10 [i_0] [i_3] [i_3] [i_3] [i_4] [3]);
                                var_22 = (arr_0 [i_2 + 1] [i_1 + 2]);
                            }
                        }
                    }
                }
            }
        }
        var_23 = (max((((59 == (((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) == (arr_4 [i_0] [i_0] [i_0])))))))), ((~(arr_0 [i_0] [i_0])))));
    }
    var_24 = 5635654249871220428;
    var_25 = var_5;
    var_26 |= var_7;
    #pragma endscop
}
