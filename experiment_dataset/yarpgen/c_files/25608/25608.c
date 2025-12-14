/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((max(var_13, 7829559802331307432))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [17] = (((((((min((arr_1 [i_0]), 4095))) ? (arr_1 [i_0 + 1]) : (arr_0 [i_0] [i_0])))) ? (arr_0 [8] [20]) : (arr_1 [i_0 + 1])));
        var_17 = 7829559802331307419;
        var_18 += (arr_1 [i_0 - 1]);
    }
    var_19 = (!var_15);

    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = 7829559802331307447;
        var_20 += (((((arr_5 [9]) || (arr_3 [i_1]))) ? (arr_3 [i_1]) : (((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_5 [9])))));
        var_21 = (min((max(7829559802331307435, (arr_5 [i_1]))), (arr_5 [i_1])));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    arr_17 [i_2] [11] [i_3] [i_2] = (((((((min((arr_8 [i_2]), (arr_15 [8] [i_3] [i_2])))) ? (arr_13 [6] [i_3 + 1] [i_3] [i_2]) : ((~(arr_13 [1] [i_4] [i_2] [i_2])))))) ? (max(((1757407566 ? -406244585 : (arr_14 [i_2] [4] [9]))), 0)) : (arr_9 [i_2])));
                    var_22 *= ((((((arr_13 [i_3] [i_3 - 1] [i_3 - 1] [1]) ? ((var_2 ? 10617184271378244165 : 1792)) : ((2919 ? 10617184271378244183 : 27495))))) ? 7874 : (arr_15 [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_23 [i_2] = ((+(min((arr_19 [5] [13] [i_3 - 1] [i_5] [17] [17]), var_4))));
                                arr_24 [i_5] [i_2] [i_4] = ((!(((10617184271378244188 ? (arr_7 [i_5]) : (arr_10 [i_5] [i_5]))))));
                                arr_25 [0] [0] [i_4] [i_2] = (((arr_15 [i_3 + 1] [11] [10]) ? (arr_15 [i_3 + 1] [2] [i_3 + 1]) : 7829559802331307432));
                            }
                        }
                    }
                    var_23 = (arr_11 [i_3 - 1] [i_3] [i_3 - 1]);
                    arr_26 [1] [i_2] [2] = ((!(!9223372036854775797)));
                }
            }
        }
        arr_27 [i_2] = (min(((~(((arr_7 [i_2]) ? 7829559802331307415 : 48)))), ((~(((arr_14 [3] [3] [i_2]) ? (arr_18 [i_2] [i_2]) : (arr_3 [i_2])))))));
    }
    #pragma endscop
}
