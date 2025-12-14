/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_1] = var_1;
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    {
                        var_13 = -8979246543575314654;
                        arr_9 [i_2] [i_2 + 2] [i_3] [i_2] = var_5;
                        arr_10 [i_3] [i_2 - 1] [i_1 - 2] [i_3] = (((arr_5 [i_2 - 1] [i_3 - 1] [13]) >= (((((arr_5 [i_2 + 2] [i_3 + 1] [i_3]) + 2147483647)) << (((((arr_5 [i_2 + 2] [i_3 + 1] [i_3]) + 22160)) - 4))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_14 = (((((arr_5 [i_0] [i_0] [i_5]) + 2147483647)) << (((((arr_0 [i_1]) ? (arr_15 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 2]) : (((((arr_0 [i_4]) >= var_8)))))) - 13134931077704731520))));
                        arr_16 [i_0] [i_1] = ((!((max((((!(arr_11 [i_1] [i_1] [1])))), var_7)))));
                        var_15 = (min(var_15, (arr_3 [i_0] [i_1])));
                        var_16 = (min(var_16, ((min(var_2, (max((~var_3), 194)))))));
                    }
                }
            }
            arr_17 [7] = ((((((var_6 | (arr_2 [i_0 + 2] [i_0] [i_0 + 2]))))) >> var_0));
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 17;i_8 += 1)
                {
                    {
                        arr_27 [i_8 + 1] [i_7] = (arr_2 [i_0] [i_0 + 3] [12]);
                        arr_28 [i_0] [i_0 - 2] [i_6] [i_7] [8] [0] = 0;
                        arr_29 [i_0] = 0;
                    }
                }
            }
            arr_30 [i_0] [i_0] = (19 >> 23);
            var_17 = (min(var_17, (((~(1260172922 >> 29))))));
        }
        var_18 = (arr_15 [i_0] [i_0] [i_0] [i_0 - 1]);
    }
    for (int i_9 = 2; i_9 < 17;i_9 += 1) /* same iter space */
    {
        var_19 = (!14564);
        arr_34 [i_9] = (arr_24 [i_9] [i_9] [i_9] [i_9] [i_9]);
        var_20 = var_10;
    }
    for (int i_10 = 2; i_10 < 17;i_10 += 1) /* same iter space */
    {
        var_21 = -14850;
        arr_38 [i_10] = ((!(((3144971308094542091 ? 1712928188 : -3995288307169184038)))));
    }
    var_22 = (!var_1);
    var_23 = 14564;
    #pragma endscop
}
