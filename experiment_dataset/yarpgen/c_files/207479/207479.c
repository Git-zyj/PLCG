/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = (+(min((!0), (arr_7 [i_1] [i_1] [i_0]))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_19 = (14431726529585517210 * 9790448836797476243);
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((((var_2 ? var_4 : 0))) ? (((arr_9 [i_0] [i_1] [i_2] [i_1]) | var_4)) : (18446744073709551615 - 16054338195293028924));
                    var_20 = -var_15;
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_21 = 0;
                    var_22 = (max(var_22, ((12688191010554098040 ? 5758553063155453576 : 2147467264))));
                    var_23 -= ((((((max(var_14, var_6))) ? (arr_3 [i_0]) : (var_7 / 18446744073709551615)))) ? var_8 : (max(((~(arr_12 [i_0] [i_0] [i_3]))), (arr_1 [i_0]))));
                }
                var_24 *= (+(((arr_12 [i_0] [i_0] [17]) + (arr_3 [i_1]))));
            }
        }
    }
    var_25 = min(5758553063155453585, var_6);
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            {
                var_26 = arr_7 [i_4] [i_4 + 2] [i_4];
                var_27 = min(((18015787860751617604 ? 5758553063155453575 : 18446744073709551615)), 13235510870669153884);
                var_28 = ((!((((arr_18 [i_5 + 2]) << (((arr_18 [i_5 + 1]) - 18275842432394988693)))))));
            }
        }
    }
    #pragma endscop
}
