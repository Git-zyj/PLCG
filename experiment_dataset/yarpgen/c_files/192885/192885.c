/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((3970439817 ? (((65535 ? -16273 : 57))) : 0));
    var_12 &= var_8;
    var_13 -= (var_2 || var_10);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_14 = arr_1 [i_0 - 1];
        var_15 = (~-1);
        var_16 = (((!var_8) ? -4919 : var_5));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_17 = -var_7;

            /* vectorizable */
            for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
            {
                var_18 |= ((324527478 ? (arr_7 [i_3] [i_2] [i_1 + 2]) : var_7));
                arr_12 [i_1] [i_1] [i_3] = (((!(arr_10 [i_3] [i_2] [i_2] [i_1]))) || 644191238);
            }
            for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
            {
                var_19 = (-32757 ? (((((min(var_5, 66571993088))) || ((max(58500, 3630328321030756936)))))) : (((!(arr_7 [i_1] [i_1 - 1] [i_4])))));
                var_20 = ((max(((17 ? 0 : (arr_15 [14] [i_2] [i_1])), (((~(arr_3 [i_2]))))))));
            }
            var_21 = min((min(-1, 31444)), ((var_6 ? (arr_15 [i_1 + 1] [i_1 + 2] [i_2]) : (arr_15 [i_2] [i_2] [5]))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
        {
            arr_20 [i_5] [i_1] [i_1 + 2] = (~1023);
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_22 = var_0;
                            arr_29 [i_1] = ((var_10 || (((var_4 ? var_1 : var_8)))));
                            var_23 = (arr_3 [i_1 + 1]);
                            var_24 = (max(var_24, (arr_25 [i_7 - 1] [i_1 + 2])));
                            arr_30 [i_1 + 2] [i_5] [4] [4] [i_6] [13] [i_8] = var_6;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 15;i_10 += 1)
                {
                    {
                        var_25 &= (arr_15 [i_1 + 2] [i_1 + 1] [i_1 - 1]);
                        var_26 = (arr_18 [i_10 - 3] [i_9] [i_5]);
                        var_27 = ((arr_21 [i_1 + 2] [i_10 + 1] [i_10]) ? var_1 : var_8);
                        var_28 = (min(var_28, (((var_8 ? (arr_31 [i_5]) : var_3)))));
                    }
                }
            }
        }
        arr_36 [i_1] = 3630328321030756936;
        var_29 = (min(((((arr_24 [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 + 2]) <= var_5))), 0));
    }
    #pragma endscop
}
