/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min(((((min(var_3, -21637))) ? (min(var_8, var_9)) : (52 | var_1))), var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 -= (min((((!(arr_2 [10] [i_1])))), var_8));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = ((((min((arr_1 [i_4 - 1]), (arr_7 [i_1] [i_1] [i_4 - 1] [i_4 - 1] [i_4 - 1])))) ? var_10 : (min(4159036524, 54))));
                                arr_13 [i_1] [i_0] = (((((((!151) <= ((var_4 ? 63499 : -1733786684)))))) <= ((-95 ? 3088611027 : 2032252081))));
                                var_18 = (min(var_18, ((((((((arr_8 [i_0] [i_4] [i_4] [i_4 + 1] [i_4 - 1] [i_4]) < (arr_8 [i_4 - 2] [i_4 + 1] [1] [i_4 + 1] [i_4 - 1] [i_4]))))) != ((100 ? -95 : (min(16, 1253550509)))))))));
                                var_19 = (45 != 255);
                                var_20 = (((((arr_5 [12] [i_1] [i_2]) ? (arr_5 [i_0] [i_1] [i_2]) : (arr_5 [5] [i_1] [i_2]))) & (arr_1 [i_4 - 2])));
                            }
                        }
                    }
                }
                arr_14 [10] [10] &= (((arr_1 [12]) | ((-(((arr_6 [i_0] [i_1]) ? (arr_6 [i_0] [i_0]) : (arr_6 [i_1] [i_1])))))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_21 = ((var_9 && ((151 < (arr_4 [i_0] [i_1] [i_5])))));
                                arr_23 [i_1] [i_6] [i_1] = var_1;
                                var_22 = var_12;
                            }
                        }
                    }
                }
                arr_24 [i_0] [i_1] = ((((((((arr_2 [i_1] [i_1]) ? (arr_4 [8] [i_1] [i_1]) : var_6))) % (min(var_13, (arr_17 [i_0] [i_1] [i_0]))))) > ((min((var_3 <= 6985), (min(var_8, (arr_17 [i_0] [i_1] [4]))))))));
            }
        }
    }
    var_23 = (min(63409, (((var_8 > (min(6383364853822958195, var_3)))))));
    var_24 = var_13;
    #pragma endscop
}
