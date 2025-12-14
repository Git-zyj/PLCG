/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((20 ? 19253 : 61751))) * (((((57960 ? 8087223894202837200 : 8087223894202837191))) / var_4))));
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_12 = var_4;
                    var_13 = (((arr_7 [i_0] [i_1] [i_2]) && (arr_2 [3])));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    arr_12 [i_0] [i_1] [i_0] |= (((arr_10 [i_0] [i_1] [i_1]) ? 8087223894202837184 : 8087223894202837194));

                    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        var_14 = (((((32767 ? -8087223894202837200 : 22778))) ? (((-32767 - 1) ? (arr_5 [i_0] [i_1] [i_3]) : 1)) : var_5));
                        arr_15 [i_0] [i_0] = ((((((arr_8 [10] [i_1] [i_1]) + var_9))) ? ((0 ? (arr_5 [i_1] [i_3] [i_3]) : var_0)) : (6560709413491462859 / -6560709413491462859)));
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_3] = (((arr_3 [i_1] [i_5]) / (arr_14 [i_1])));
                        var_15 += (((arr_16 [i_0] [i_0] [i_0] [2] [i_5]) + 42757));
                        var_16 |= ((25362 ? (arr_0 [i_1] [i_0]) : (arr_0 [i_0] [i_5])));
                    }
                    arr_19 [i_3] [i_1] [i_0] = (1990486300 > 8087223894202837194);
                }
                arr_20 [i_0] = (min(((((min((arr_14 [i_1]), var_3))) ? (min(8087223894202837200, -1403822679)) : (((((arr_5 [i_0] [i_1] [i_1]) && var_9)))))), 5));
                arr_21 [i_0] [i_1] [2] = (((((-((var_7 ? (arr_11 [i_1] [i_0]) : var_7))))) ? ((((max(30289, 8087223894202837217))))) : 16259089624490265603));
                var_17 += 1971190162;
            }
        }
    }
    #pragma endscop
}
