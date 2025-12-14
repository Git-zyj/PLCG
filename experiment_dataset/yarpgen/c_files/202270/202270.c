/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((max((((44381 ? var_1 : var_7))), var_10))) ? ((var_7 ? var_6 : var_2)) : var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (!(((var_7 + (arr_1 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_12 = 8;

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_13 |= -1153698158;
                            var_14 = (min(var_14, var_4));
                        }
                    }
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_0] [i_5] = ((!(arr_8 [i_0] [i_0] [i_5])));
                        arr_19 [i_0] [i_0] [i_1] [i_5] = (arr_11 [i_0] [i_1] [i_1] [i_0] [i_2] [i_1]);
                        var_15 = (arr_10 [i_5]);
                    }
                    var_16 = ((+(((arr_7 [i_0] [i_1] [i_1]) ? var_5 : 1))));
                    arr_20 [i_0] = ((-(arr_13 [i_2 + 1] [i_2] [i_2] [i_2 - 1] [i_2 - 2] [i_2 - 2])));
                    arr_21 [i_0] [i_0] = (~var_0);
                }
            }
        }
        var_17 = (max(var_17, (((var_6 ? (arr_14 [i_0] [i_0] [i_0] [16] [i_0]) : var_3)))));
        var_18 = (((arr_5 [i_0] [i_0]) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (~10)));

        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            var_19 = 18446744073709551608;
            arr_25 [i_0] [i_6] [i_6] = (!21838);
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
        {
            var_20 = (((2337172716326079407 || 176) ? (arr_17 [i_7] [i_7] [i_0]) : (var_4 <= var_8)));
            arr_28 [i_0] = 19252;
        }
        for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
        {
            var_21 = (!var_1);
            var_22 = (!-6669932672868189758);
        }
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
    {
        arr_36 [i_9] = ((((((((max(var_2, 1))) ^ -1153698159)) + 2147483647)) << (var_10 - 11171291547290151557)));
        var_23 = (max(var_2, var_3));
    }
    var_24 = (max(var_24, 1));
    var_25 = (max(var_25, -408910687));
    #pragma endscop
}
