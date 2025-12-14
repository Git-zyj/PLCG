/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_18 = ((~(min((~-22152), ((min(22160, var_7)))))));
            var_19 = ((((((-90 && var_6) || (97 || var_12)))) | 22151));
            arr_6 [i_0] [i_0] [i_0] = ((-((-(arr_5 [i_1] [i_1] [i_1])))));
            arr_7 [i_1] = (((max(var_1, var_0))) || ((max((var_14 & 1), -47))));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    {
                        var_20 = ((((max(((min(1, 0))), ((-27898 ? 3072 : (arr_3 [i_0] [i_0])))))) & (max((arr_2 [i_2 - 2]), var_11))));
                        var_21 = (((var_7 && -27876) ? (((((var_11 ? 65 : 3075))))) : (min(-7013193478729319224, (((0 ^ (arr_0 [i_0]))))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                {
                    arr_17 [i_4] = ((((max((arr_10 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]), -22172))) & (arr_0 [i_5])));
                    arr_18 [i_0] [i_0] [i_4] = min((max(var_0, (arr_12 [i_5 + 1] [i_5 + 1] [i_5 + 1]))), (95 & -3573));
                    var_22 = (max((max((arr_12 [i_0] [i_4] [i_0]), (arr_12 [i_0] [i_4] [i_4]))), -125));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    var_23 = 7;
                    var_24 = -27909;
                    arr_23 [i_6] = (((min(-1460783465, (arr_20 [i_6 - 1] [i_6 - 1] [i_6 + 1])))) != (max(var_8, var_16)));
                    arr_24 [i_0] [i_0] [i_0] = (!(((2147483647 ? ((-22163 ? var_0 : -104)) : ((27875 ? -27916 : var_3))))));
                }
            }
        }
        arr_25 [i_0] = (1 + -27848);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 3; i_9 < 22;i_9 += 1)
        {
            var_25 = (((arr_5 [i_9 - 1] [i_9 - 1] [i_9 - 2]) ? (arr_5 [i_9 + 1] [i_9 + 1] [i_9 - 1]) : 5554));
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        arr_36 [i_8] [i_8] [i_10] [i_10] [i_8] [i_8] = (((arr_8 [i_8] [i_8] [i_8] [i_8]) - var_1));
                        arr_37 [i_8] [i_8] [i_8] [i_10] = (arr_26 [i_10 - 1] [i_10 - 1]);
                        arr_38 [i_8] [i_8] [i_10] [i_8] [i_8] = (11483397042866784878 != 159);
                    }
                }
            }
            var_26 = -3178487373455377834;
            arr_39 [i_8] [i_8] = var_9;
        }
        var_27 = var_11;
    }
    #pragma endscop
}
