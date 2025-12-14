/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((-2568136843669126913 / 7715883981059895472) ^ (!-1160))) | ((((!var_13) ? var_0 : var_0)))));
    var_15 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_7 [i_1] = ((11265 << (var_7 - 6950854905224494338)));
                var_16 = ((((max(((-(arr_4 [i_0]))), var_1))) ? (!2568136843669126913) : (min(-2568136843669126919, 20))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_17 = (((((var_13 ? 12582912 : (1 || 47258)))) ? ((((arr_0 [i_0 - 1]) || (arr_0 [i_0 - 1])))) : (((((22284 ? 2145927913 : 2568136843669126930))) ? var_0 : ((max(73, 1)))))));
                            var_18 = (((((arr_1 [i_2] [i_2]) ? 6675093680275372768 : -481743773))));

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                arr_16 [i_1] [i_3] [i_2] [i_1] [i_1] = (max(((((arr_6 [i_0] [i_0] [i_0 + 1]) % (arr_3 [14])))), ((min(-var_10, 1)))));
                                arr_17 [i_0] [i_0] [i_2] [i_1] [i_4] = ((((((arr_12 [i_1 + 1] [i_0 + 1] [i_0] [i_0 - 1]) ? (arr_12 [i_1 + 1] [i_0 - 1] [i_0] [i_0]) : (arr_12 [i_1 + 1] [i_0 + 1] [i_0] [i_0])))) && ((((max(11771650393434178837, var_2)) * (arr_14 [i_0] [i_0] [i_1]))))));
                                arr_18 [i_3] [i_3] [i_3] [i_3] [i_1] [i_3] = ((-1427038172 / ((var_7 ? (arr_14 [i_0 + 1] [i_0 + 1] [i_1]) : (arr_14 [i_0] [i_0 + 1] [i_1])))));
                                arr_19 [i_0] [i_1] [i_2] = (((((((min((arr_15 [i_0] [i_1 + 1] [i_2] [i_3] [i_3]), (arr_2 [i_0] [i_4])))) ? var_9 : (arr_4 [i_1 + 1])))) ? (((-(arr_8 [i_1 + 1] [i_1 + 1] [i_1])))) : (((arr_8 [i_0 + 1] [i_1 + 1] [i_1]) ? (arr_8 [i_0 - 1] [i_1 + 1] [i_1]) : 3597456048))));
                                arr_20 [i_0] [i_1 + 1] [i_2] [i_3] [i_1] [i_0] [i_1] = ((!((((arr_10 [i_0] [i_0 + 1]) ? (arr_10 [i_0] [i_0 - 1]) : (arr_3 [i_0]))))));
                            }
                            var_19 = arr_10 [1] [i_1 + 1];
                        }
                    }
                }
                var_20 &= ((!(!5927980195568149793)));
            }
        }
    }
    #pragma endscop
}
