/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((((-127 - 1) > ((var_0 ? 22910 : var_7))))), (max((max(1964167746, 7089802836460075495)), var_1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = 144115183780888576;
                arr_5 [i_1] = (arr_4 [2] [i_0]);
            }
        }
    }

    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_12 = -620144732;
                                arr_17 [i_2 + 1] [11] [9] [i_5] [i_5] = max(((~(!var_4))), (!144115183780888564));
                                arr_18 [i_2 + 1] [i_3 + 2] [i_4 - 2] [i_5] [i_3] = 127;
                            }
                        }
                    }
                    var_13 = (!17190024033434437596);
                }
            }
        }
        arr_19 [i_2 + 1] [i_2] = ((-34 ? (((((arr_10 [i_2 + 1]) >= 1580672829)))) : (max((-9223372036854775807 - 1), -1326043316))));
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
    {
        arr_22 [i_7] |= 4294967294;
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    var_14 = ((!(((((arr_29 [i_9] [i_8 + 1] [i_9]) ? -28 : var_4))))));
                    var_15 = -16532;
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_16 -= ((-(max(-9223372036854775804, (!var_8)))));
                                var_17 ^= (((((max(4294967294, (arr_31 [i_7] [i_11] [i_8]))) <= (-2147483647 - 1))) ? ((((45 ? 3375022273 : 0)))) : (((((~(arr_31 [i_11] [i_8 - 2] [i_9])))) ? ((min(-6, -4))) : (~var_6)))));
                            }
                        }
                    }
                }
            }
        }
        var_18 = (arr_24 [i_7]);
    }
    for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
    {
        arr_37 [i_12] = (max((max(((9223372036854775780 ? 0 : (-9223372036854775807 - 1))), var_9)), ((((arr_32 [i_12] [i_12] [i_12] [i_12] [i_12]) ? (((~(arr_33 [i_12] [i_12] [i_12] [i_12])))) : (~144115183780888550))))));
        var_19 |= (~1884674205);
        var_20 = (((((((-(arr_33 [i_12] [14] [i_12] [i_12])))) ? (((!(arr_20 [i_12])))) : (arr_26 [i_12] [i_12]))) * (((!(arr_32 [16] [i_12] [i_12] [i_12] [i_12]))))));
    }
    /* LoopNest 2 */
    for (int i_13 = 1; i_13 < 22;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 24;i_14 += 1)
        {
            {
                var_21 = (arr_43 [11] [i_14] [i_13]);
                var_22 |= (max(((max(var_0, (arr_40 [i_13])))), ((((-953057546 ? 116 : 2294122462920215050)) * (((-32766 ? -28734 : -1098804123)))))));
                var_23 = (((min((arr_39 [i_14 + 1]), (arr_39 [i_14 + 1]))) ^ (~1326043314)));
            }
        }
    }
    #pragma endscop
}
