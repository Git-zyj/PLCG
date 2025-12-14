/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_14 ? ((max(-15173, var_15))) : (!var_9))) >= ((-((var_9 ? var_1 : var_2))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            var_17 = (max(var_17, ((((arr_2 [i_0 + 1] [i_1] [i_1]) ? (arr_2 [i_0 - 1] [i_0] [i_1]) : (arr_2 [i_0 + 2] [i_0] [i_0]))))));
            var_18 = (arr_1 [i_0 + 2]);
            var_19 = (((arr_2 [i_1] [i_1] [i_0 + 3]) ? (~15172) : (((arr_3 [i_0] [i_1] [11]) / var_1))));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            arr_7 [i_2] [15] [i_2] = ((((((arr_6 [i_2] [i_2]) ? 0 : 3907213185))) ? (arr_2 [i_0 - 1] [i_0 + 3] [i_0 + 2]) : ((((14890224587316692104 >= (arr_1 [i_2])))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        arr_12 [i_0] [13] [i_0] [13] [i_2] [7] = var_4;
                        var_20 = ((~(arr_6 [i_2] [i_0 + 3])));
                    }
                }
            }
            var_21 = var_4;
            var_22 = (+((var_8 ? (arr_1 [i_0]) : (arr_6 [i_2] [i_2]))));
        }
        var_23 -= (arr_2 [0] [3] [i_0]);
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 2; i_6 < 24;i_6 += 1)
        {
            arr_18 [i_5] [i_6] [i_6] = -var_5;
            var_24 = ((((((var_15 / (arr_15 [i_5]))) + 2147483647)) >> (((arr_15 [i_5 + 3]) + 15053))));
            var_25 = (((arr_4 [i_6 - 1]) ? ((((arr_8 [0] [i_6] [i_5]) ? var_7 : (arr_14 [i_5])))) : -33554431));
            var_26 *= var_8;
        }
        arr_19 [11] = ((-(arr_10 [i_5 + 2] [6] [22] [i_5] [22])));
        arr_20 [i_5] = (arr_16 [16] [i_5 + 1]);
    }
    var_27 = (!var_12);
    var_28 = var_13;
    #pragma endscop
}
