/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max(var_11, 1278972894);
    var_15 = var_11;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((-1 ? -1278972917 : (((min(var_0, var_5)))))) | (max(((max(-39, var_0))), 3015994401))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = ((((max(3015994379, 7))) ? ((max(((1 ? 1278972912 : var_11)), 16777088))) : (max((arr_0 [i_0]), (min((arr_5 [i_0] [i_1] [i_1]), 1278972912))))));
            arr_7 [i_1] [i_0] [i_0] = ((((max(var_11, 8490668932151822082))) ? (arr_1 [i_0]) : ((-(arr_1 [i_1])))));
        }

        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {

            for (int i_3 = 4; i_3 < 18;i_3 += 1)
            {
                arr_12 [i_3] [13] [13] = (min((max(var_10, 1278972912)), (~56473)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_16 = (max(var_16, (!16777088)));
                            var_17 = ((((max((arr_10 [12] [i_5 - 1] [i_3 + 2]), (arr_11 [i_5] [i_5 - 1] [i_3 + 2] [i_4])))) ? (arr_10 [i_0] [i_5 - 1] [i_3 + 2]) : 1152921504606846975));
                        }
                    }
                }
                arr_18 [i_2] = ((18446744073709551615 ? 957519213 : 4278190217));
            }
            var_18 -= ((-((8 ? 1073741808 : 3015994419))));
        }
        var_19 ^= (max((min(3, (arr_2 [i_0]))), var_1));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        arr_21 [i_6] [i_6] = ((-(arr_15 [i_6] [19] [i_6] [i_6] [i_6] [i_6])));
        var_20 = var_8;
        arr_22 [i_6] = ((!(arr_14 [i_6] [i_6] [i_6])));
        arr_23 [i_6] [i_6] = var_7;
        arr_24 [6] |= (arr_19 [i_6]);
    }
    #pragma endscop
}
