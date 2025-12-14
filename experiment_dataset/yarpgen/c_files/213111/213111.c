/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;

    for (int i_0 = 2; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_17 = -1704906613;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_18 = var_15;
                        arr_10 [i_1] [i_1] [i_0] [i_3] [i_0] [i_3] = (((((~(arr_3 [i_1 - 2] [i_0 - 1])))) ? ((((arr_8 [i_0 - 2] [i_1 + 2] [i_1] [i_2] [i_2] [i_3]) >= (((0 << (1704906608 - 1704906606))))))) : (((((min((arr_9 [5] [i_0] [i_1 + 1] [i_2] [7] [i_1 + 1]), var_2))) || 1444)))));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_13 [i_0 - 2] [i_4] [i_3] [i_1] [i_1] = (1439 + var_1);
                            var_19 = (min(var_19, (((((arr_5 [i_0 - 2] [i_1 - 2]) >= 1444))))));
                            var_20 += (((~1455349658) || (((~(arr_8 [i_4] [i_1 + 1] [i_1 - 1] [i_0 - 1] [i_0] [i_0]))))));
                        }
                    }
                }
            }
        }
        var_21 = (min(var_21, ((((!-1704906606) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : ((max(var_5, (arr_6 [i_0 - 1] [i_0] [i_0 - 1] [i_0])))))))));
        arr_14 [17] = (max((arr_4 [i_0 - 2]), (max((arr_5 [i_0 - 1] [i_0 - 1]), var_4))));
        var_22 = (min(var_22, (((((18446744073709551599 ? 1704906622 : 32759)) < var_6)))));
    }
    for (int i_5 = 2; i_5 < 23;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                {
                    var_23 = (min(var_23, (((max((((var_2 ? 417071692 : (arr_15 [10])))), 1))))));
                    var_24 = ((+((var_5 ? (arr_20 [i_5 - 2] [i_7 + 1] [i_7]) : (arr_20 [i_5 - 2] [i_7 + 1] [i_5 - 2])))));
                    var_25 -= ((((((-25790 ? var_12 : (arr_20 [i_5 + 1] [i_5] [i_5])))) ? var_7 : 2649830537)));
                    arr_23 [i_5] [i_6] [i_5] [i_5] = (((((65535 ? var_13 : 63549)) << (-25772 + 25774))));
                    arr_24 [i_6] |= -1438;
                }
            }
        }
        arr_25 [8] [i_5] |= (((((min(370, var_10)))) ? (((min((!381), 88)))) : 18446744073709551612));
        var_26 = (((((1 ? -50 : ((var_12 ? var_15 : (arr_1 [i_5] [i_5])))))) || ((min(1790731934, (max(var_4, 1455349658)))))));
    }
    var_27 = ((((min(var_10, (~1439)))) ? (((-1453 ? var_7 : -var_1))) : (((((10013301350695093683 ? var_3 : var_15))) ? (min(3540796834, var_3)) : var_1))));
    #pragma endscop
}
