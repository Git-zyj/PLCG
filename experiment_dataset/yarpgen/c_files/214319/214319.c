/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = (+(((var_15 || var_6) ? (min(var_15, var_13)) : (-106 + 1))));
        arr_3 [i_0] = ((160 ? (((var_14 & ((max(14095, -32612)))))) : (arr_2 [i_0])));
        arr_4 [i_0] = ((((((((16128441267657595306 ? -1871291868 : 699987581))) ? 699987581 : (((var_3 > (arr_1 [i_0]))))))) ? (!1871291868) : (max(1, ((var_15 ? (arr_1 [i_0]) : var_1))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_17 = var_2;
        arr_9 [5] = (min((((((max(var_2, -1871291843))) != var_10))), (min(var_14, ((0 ? (arr_5 [3]) : var_10))))));
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_18 = (max(var_18, ((min(((((max(49148, 67))) ? (arr_11 [i_2]) : ((13413460260208481282 << (((arr_11 [i_2]) + 1771295097405917052)))))), ((max(-901236870, -1871291853))))))));

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_19 = 777503568707107506;
            var_20 = 901236882;
            var_21 = (((((((var_12 + (arr_10 [i_2] [i_3])))) ? ((var_10 % (arr_14 [i_2] [i_2] [i_3]))) : (arr_14 [i_2] [i_2] [i_2]))) < (((min((-1664516508 != var_10), var_15))))));
        }

        for (int i_4 = 4; i_4 < 22;i_4 += 1)
        {
            arr_18 [i_4] [i_2] [i_2] = ((((((max(1472147263143579702, 14215931932886682967))) ? ((var_14 ? 0 : -5879539827980997864)) : (((1871291839 ? -56 : -1871291863))))) < (((max(1, 167))))));
            var_22 = var_8;
            arr_19 [i_2] [i_4 - 4] = (1664516533 || 1);
            arr_20 [12] [i_4] [i_4] = (~-27206);
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_23 = (((max((((arr_14 [i_5] [0] [i_2]) << (((arr_17 [i_2]) + 115)))), -86)) + (arr_14 [i_2] [i_2] [18])));
            arr_23 [i_5] [i_5] = (arr_12 [i_5] [i_2] [i_2]);
        }
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
    {
        var_24 = (arr_22 [i_6] [i_6] [i_6]);

        for (int i_7 = 2; i_7 < 23;i_7 += 1)
        {
            var_25 = (((((var_6 - ((max(1, -11190)))))) ? (min((arr_24 [16]), (max(169, var_1)))) : ((238 ? (min(-29650, var_1)) : 130))));
            var_26 = max((var_1 + -65), ((min(0, 1))));
            arr_29 [i_6] [i_6] = ((max((min((arr_15 [i_6] [i_6] [i_7]), (arr_12 [i_7 - 2] [15] [i_6]))), (max(var_9, var_13)))));
        }
    }
    var_27 ^= var_1;
    #pragma endscop
}
