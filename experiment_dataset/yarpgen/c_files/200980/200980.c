/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((+(min((!var_7), var_19))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = ((((max(4235406082, (arr_0 [i_1])) + -59561214))));

                for (int i_2 = 4; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 = (min(var_22, (((((((arr_6 [i_2] [i_3 - 2]) | (arr_6 [1] [i_3 - 1]))) + 2147483647)) >> (((~var_7) - 6923049086586004615))))));
                                arr_14 [i_0] [i_2] [i_2] [15] = (!((((((arr_1 [1]) ? var_8 : var_2))) < (1890399113 / 5851717443529316705))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_19 [i_6] [i_5] [i_0] [i_0] = ((!((max((13037 | -16547), ((-1 ? 201 : 1738680277)))))));
                                var_23 += max(((59561213 | (5851717443529316705 / 18446744073709551615))), ((min((arr_11 [i_0] [i_2 + 2] [i_5] [i_6]), var_3))));
                            }
                        }
                    }
                    var_24 = var_3;
                }
                arr_20 [i_0] = ((((((arr_5 [i_1 - 1] [7] [i_1]) ? (arr_18 [i_1 + 1] [18]) : (arr_18 [i_1 + 1] [i_1])))) - (~-2442575200529460003)));
            }
        }
    }
    var_25 = ((min(4217285974, var_3)));
    #pragma endscop
}
