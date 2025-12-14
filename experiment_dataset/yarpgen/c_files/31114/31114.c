/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = ((((((arr_2 [i_0]) >> (var_5 - 16543)))) ? -13845 : var_10));
        var_19 = (((-(min(var_4, var_2)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_20 -= (((arr_5 [i_1] [i_1]) ? var_5 : 50661));
            var_21 = -50661;
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] [i_2] = 243;

        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_22 &= (((arr_0 [i_4] [i_3 - 2]) << (((arr_0 [i_4] [i_3 + 2]) - 42373))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_23 = (arr_23 [i_2] [i_3 + 1] [i_3] [i_5] [i_5]);
                            var_24 ^= (arr_3 [i_5]);
                        }
                    }
                }
                var_25 = ((0 && (arr_0 [i_3] [i_3])));
                var_26 = var_1;
                arr_24 [i_2] [i_3 - 2] [i_3] = (-((-18 ? (arr_7 [i_2] [i_3]) : var_6)));
            }
            var_27 = (min(var_27, (((~(arr_6 [i_3 - 2] [4]))))));
            var_28 = (max(var_28, (arr_16 [1])));
        }
        arr_25 [i_2] [i_2] = (~1390412833);
        var_29 = (arr_20 [i_2] [i_2] [i_2] [i_2] [i_2]);
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        arr_28 [i_7] = (arr_19 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_30 += (max((((((arr_9 [i_7]) ? var_6 : (arr_2 [8]))) << (51699 - 51673))), var_1));
                    arr_35 [i_7] [i_8 - 1] = ((!(-12993396243774079540 >= var_16)));
                }
            }
        }
        var_31 = (((((((arr_1 [i_7]) < (arr_34 [17] [i_7] [i_7]))))) == (max((arr_34 [i_7] [i_7] [i_7]), 3228047640))));
        var_32 = (((((min(1336114241, (arr_31 [i_7] [i_7] [i_7]))))) || ((!(!0)))));
        arr_36 [i_7] = (arr_33 [i_7]);
    }
    var_33 += ((-(!var_13)));
    #pragma endscop
}
