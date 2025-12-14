/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((((min(((((arr_0 [11]) <= (arr_1 [3])))), (min(var_4, 40064))))) ? (((max(var_9, var_18)) & (((((arr_1 [i_0 - 2]) <= (arr_0 [i_0 - 1]))))))) : 18));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 = 27298;
                                var_20 += max((((arr_12 [i_0] [i_0 - 3] [i_0 + 1] [i_2] [i_0 - 1] [i_1]) + (arr_12 [2] [2] [i_0 - 1] [i_2] [i_0 - 3] [8]))), ((min((arr_12 [i_0] [i_0] [i_0 + 1] [i_2] [i_0 - 1] [i_1]), (arr_12 [i_0] [i_0] [i_0 + 1] [i_2] [i_0 - 1] [i_4])))));
                                arr_15 [i_2] [i_0] [i_1] [i_2] [i_3] [2] [i_4] |= (var_9 ? (var_3 + 1) : 16221508685717523358);
                                var_21 += ((((max((arr_3 [i_3]), 238))) & (((min(-7, (arr_8 [i_0] [i_0 - 4] [i_0 - 2] [i_0 - 4])))))));
                            }
                        }
                    }
                    arr_16 [i_1] [i_1] = ((+((max((arr_8 [i_0 - 2] [i_0] [i_2] [12]), (arr_1 [i_0 - 3]))))));
                    arr_17 [i_0] [i_0] = (min(212, (((((var_13 ? 28743 : var_9))) ? 253 : ((var_3 ? 18595 : 1715082030))))));
                }
            }
        }
        arr_18 [i_0] |= (max(((0 ? 1122500524 : var_8)), (((arr_7 [i_0 - 1] [5] [i_0]) & 2607108871))));
    }
    for (int i_5 = 4; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_22 = (((((arr_5 [i_5] [i_5 - 4] [i_5 - 2] [i_5]) ? ((((var_15 <= (arr_8 [i_5] [i_5] [i_5] [i_5 - 3]))))) : (arr_7 [i_5 + 1] [i_5 - 1] [i_5 - 4]))) <= 1687858427));

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_23 = (max(var_23, var_9));
            var_24 += 4095;
            var_25 += ((((max(22383, ((-4096 ? 1993502460 : (arr_5 [i_6] [i_6] [i_6] [i_5])))))) ? -1971 : (min(1, (min((arr_23 [i_5] [i_6]), 213))))));
            var_26 = ((((((arr_19 [i_5 - 3]) ? (arr_1 [i_5 - 3]) : (arr_19 [i_5 - 2])))) ? (min((((arr_7 [i_6] [i_5] [i_5]) ? (arr_0 [i_6]) : var_8)), 3172466783)) : ((((!(arr_13 [i_6] [1])))))));
            arr_25 [i_5 - 4] [i_6] |= 33554431;
        }
    }
    var_27 = var_8;
    var_28 = ((~((2607108871 << (var_5 - 1840427661)))));
    var_29 += (var_7 + var_18);
    #pragma endscop
}
