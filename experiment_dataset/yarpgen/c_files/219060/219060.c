/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_6;
    var_12 = (min((((var_9 <= var_0) ? (((min(110, var_10)))) : (min(3537845658434059364, var_0)))), var_3));
    var_13 &= var_9;
    var_14 = (((!(!2))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_15 |= ((((40809 == (arr_1 [i_0] [i_1]))) ? var_7 : (arr_5 [i_0 + 1] [i_0 + 1] [i_1])));
            var_16 = (max(var_16, (((-(arr_1 [i_0 - 1] [i_1]))))));
            arr_6 [i_1] [i_1] = -24727;
            var_17 = ((!(arr_4 [i_0 - 2] [i_0 - 2])));
            var_18 = ((var_2 && ((!(arr_4 [i_0] [15])))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_19 = (min(var_19, ((((arr_0 [i_2]) ? (arr_8 [i_0 - 2]) : (((arr_0 [i_0 - 2]) ? 22359 : 67)))))));
            arr_9 [i_0] [i_0 - 1] [i_0] = (arr_2 [i_0 + 1] [i_0 - 3] [i_0 - 3]);
        }
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_20 = ((50248 ? (arr_14 [i_0] [i_0 - 1] [i_0 - 2]) : (arr_0 [i_3 - 1])));
                        var_21 &= 262455571;
                        arr_18 [i_5] [i_5] [13] [i_3] [i_0] = 651470443;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        var_22 &= (((arr_7 [i_6] [i_6]) / (arr_14 [i_3] [17] [i_6])));
                        arr_24 [i_3] [i_6] &= ((+((((arr_20 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_0]) && var_8)))));

                        for (int i_8 = 4; i_8 < 19;i_8 += 1)
                        {
                            arr_27 [i_0] [i_8] [i_3] [i_0] [i_8 - 4] [i_8] &= (arr_20 [i_0] [i_7] [i_3 + 2] [i_7]);
                            var_23 = (arr_13 [i_3 + 2] [i_3 + 2]);
                            arr_28 [i_0 - 2] [i_0 - 1] = (arr_3 [i_0]);
                            var_24 = (((arr_8 [i_0 - 3]) ? (arr_15 [i_0 + 1]) : (arr_22 [i_8 - 1] [1] [i_8] [i_8 - 3] [i_8] [i_8])));
                            arr_29 [i_0 - 1] [1] [i_0 - 1] [i_7] [i_8 + 1] &= ((((((arr_11 [i_0 - 2] [i_0 - 2]) ? var_9 : var_6))) ? (arr_14 [9] [i_0 + 1] [i_0 + 1]) : (arr_19 [8])));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            var_25 = (((-88 < var_8) ? (~-1124933894) : (arr_30 [i_0 - 3] [i_9])));
                            var_26 = (max(var_26, ((1 ? 65535 : 1))));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            arr_35 [i_10] [i_7] = (arr_33 [i_3 + 1] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1]);
                            var_27 &= (arr_13 [19] [i_3]);
                            arr_36 [i_10] [i_10] [i_7] [i_6] [i_10] [i_0] = ((!(arr_14 [i_0 + 1] [i_0 - 2] [i_3 - 2])));
                            arr_37 [i_0] [1] [i_10] [i_7] [16] &= ((var_3 * (arr_0 [i_3])));
                        }
                        var_28 = ((~(arr_20 [i_3] [i_3 + 2] [i_3 + 1] [i_3])));
                        var_29 = ((var_2 ? (arr_17 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 2] [i_0]) : (!14908898415275492228)));
                    }
                }
            }
            arr_38 [i_0 - 3] = ((!((((arr_8 [i_3]) ? (arr_3 [i_0]) : (arr_16 [1] [i_0 + 1] [i_3 + 1] [i_3 + 1]))))));
            var_30 = (min(var_30, (((!(((3537845658434059413 ? var_3 : (arr_15 [i_3 - 2])))))))));
            var_31 = ((arr_23 [i_0 + 1] [i_0] [i_3 + 2] [i_3 + 2]) ? -64 : (arr_22 [i_3] [i_3 + 1] [i_3 - 2] [i_3] [i_3 + 1] [i_3]));
        }
        arr_39 [i_0] = (65535 / var_10);
    }
    #pragma endscop
}
