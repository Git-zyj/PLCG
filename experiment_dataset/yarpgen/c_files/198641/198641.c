/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_20 = (max(var_20, ((((59412 <= (arr_0 [i_0] [i_0]))) ? ((((!(arr_2 [i_0]))))) : (arr_0 [9] [i_0 + 2])))));
        var_21 ^= ((var_6 ? var_19 : var_14));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_22 = (min(var_22, (((6124 || ((min((min(4326640857456745308, var_3)), 59418))))))));
        arr_7 [i_1] = ((62067 * (arr_6 [i_1])));
        var_23 += (((!59418) ? (((var_13 / ((var_1 ? 325275999 : (arr_6 [i_1])))))) : var_7));
        arr_8 [i_1] = ((((min(var_3, (max(-6, var_18))))) ? (max(((var_15 ? (arr_3 [i_1 + 2]) : 325275986)), var_13)) : 219));
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_12 [i_2] = (!135107988821114880);
        var_24 = (min(var_24, ((max((max(var_0, var_15)), (7 == var_18))))));
    }
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    {
                        var_25 = (max(var_25, ((min(-27843, ((7 ? ((max(5, (arr_14 [i_3 - 1])))) : 7)))))));
                        var_26 = (!-28220);
                        var_27 ^= var_19;
                        var_28 = -0;
                        var_29 = (max(var_29, 2147483647));
                    }
                }
            }
        }
        arr_24 [i_3] [4] = ((!(((((((arr_11 [1]) ? (arr_22 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1]) : 6118))) ? (!var_10) : (((arr_18 [i_3 - 2] [i_3] [i_3] [i_3]) * var_19)))))));
        var_30 = (max(22, 1));
        var_31 ^= (max((((((min((arr_21 [i_3] [i_3] [13] [13]), 6124))) ? var_2 : var_1))), (((!135107988821114900) ? (arr_14 [16]) : (var_7 * var_15)))));
        arr_25 [i_3] [i_3] = 6117;
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_32 = (arr_23 [i_7] [16] [6] [i_7] [16] [i_7]);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {
                    arr_33 [i_7] [i_9] [i_9] = (--4294967295);
                    arr_34 [i_9] [i_8] [i_9] = (min((((!(arr_15 [i_7])))), -1));
                }
            }
        }
    }
    var_33 = 23171;
    var_34 += var_14;
    var_35 = (max(var_35, ((((((-95 ? -var_4 : ((var_13 ? -1 : 0))))) ? ((var_12 ? (((44 ? -4096353685020659662 : 23170))) : var_19)) : ((~((var_7 ? var_11 : 18311636084888436736)))))))));
    #pragma endscop
}
