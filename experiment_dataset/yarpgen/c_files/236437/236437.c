/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [22] [i_0] = (arr_1 [i_0]);

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] = 3138624974;
                        arr_13 [i_0] [i_1] [8] = ((!((min((arr_3 [i_1 - 1] [i_2 + 1]), (arr_3 [i_1 - 1] [i_2 + 1]))))));
                        var_17 = -91;
                        arr_14 [i_3] = (((~5355114565289188089) ? ((min((arr_7 [i_0] [i_1] [13] [i_3]), ((-6377935708327607026 ? -5355114565289188089 : -5355114565289188089))))) : (max(-97, (max(16, (arr_9 [i_1] [i_1])))))));
                    }
                }
            }

            for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
            {
                var_18 = (max(var_18, 742253031));
                var_19 = min(5355114565289188092, (((arr_7 [i_1 + 1] [i_4 - 1] [i_4 - 1] [16]) ? ((5355114565289188099 ? 0 : -5355114565289188097)) : -12814)));
            }
            for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
            {
                var_20 = (min(var_20, ((((arr_1 [i_5]) ? 0 : (arr_9 [i_0] [i_5]))))));
                var_21 = (arr_11 [i_0] [12] [i_0] [i_1] [i_1] [i_5]);
                arr_20 [i_0] [i_0] [i_0] [i_5] = ((~((-(arr_10 [6] [6] [i_5 - 1] [3] [i_1 - 2] [i_0])))));
                arr_21 [17] [17] [i_5 + 1] [i_5 + 1] = (min(1, 1));
            }
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 22;i_8 += 1)
                {
                    {
                        var_22 = (min(5217, -1257));
                        var_23 = (((arr_24 [16] [18] [i_7]) ? ((max((arr_19 [i_0] [15]), 90129454))) : (((arr_27 [i_0] [i_6] [i_7 - 1] [i_8 - 2] [i_8]) ? (arr_27 [i_6] [i_6] [i_7 + 1] [i_8 + 2] [i_8]) : (arr_27 [13] [i_6] [i_6] [i_8 - 1] [i_8])))));
                        arr_29 [i_8] = (max(100, 0));
                        arr_30 [i_8] [i_7] [i_8] = (((((-(arr_27 [i_7] [i_7 + 1] [i_8 + 1] [i_8] [i_8])))) ? (((((max((arr_27 [i_0] [i_6] [i_7] [i_7] [i_8]), (arr_18 [i_0])))) ? (arr_22 [i_0] [i_8 - 1]) : 1295450146))) : (arr_27 [i_0] [8] [i_0] [i_0] [i_8])));
                        var_24 = (min(var_24, ((((((33373 ? (arr_7 [i_0] [i_6] [i_8] [i_8]) : 167))) ? ((((arr_0 [i_0]) ? (arr_0 [i_7 - 1]) : (arr_28 [i_6] [i_6] [i_6] [i_8])))) : ((-(max((arr_19 [1] [13]), (arr_23 [i_0] [9] [i_7 + 1]))))))))));
                    }
                }
            }
            var_25 ^= (arr_4 [i_6] [12]);
        }
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            var_26 = max(1073741823, (arr_31 [3] [3] [i_9]));
            var_27 = ((-20 ? 5355114565289188101 : (-2147483647 - 1)));
            var_28 = (arr_23 [i_9] [i_9 - 1] [i_9 - 1]);
        }
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        arr_37 [i_10] = 1378365968;
        var_29 ^= (min((arr_1 [i_10]), (((!((max((arr_36 [i_10]), (arr_7 [i_10] [i_10] [21] [i_10])))))))));
        var_30 -= 0;
    }
    var_31 = ((var_15 ? ((var_7 ? ((var_3 ? var_13 : 1811715568)) : var_8)) : var_8));
    #pragma endscop
}
