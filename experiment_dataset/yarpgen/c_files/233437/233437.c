/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 += (((110 ? var_12 : (arr_0 [i_0]))));
        var_16 = ((1048575 ? 1 : 237));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 7;i_3 += 1) /* same iter space */
                    {
                        var_17 = (!(((arr_6 [i_3] [i_3] [i_2] [i_3 + 3]) != (arr_6 [i_3] [7] [i_3] [i_3 + 2]))));
                        arr_10 [i_0] [i_1] [i_1] [i_3] = var_9;
                    }
                    for (int i_4 = 1; i_4 < 7;i_4 += 1) /* same iter space */
                    {
                        var_18 = ((((max((1 | 1), (3 + -3714)))) ? (arr_8 [i_1]) : (((arr_4 [i_0] [i_1] [i_1]) ? (52 && 3729) : 4293918705))));
                        var_19 = (max(var_19, var_2));
                    }
                    for (int i_5 = 1; i_5 < 7;i_5 += 1) /* same iter space */
                    {
                        var_20 ^= (arr_4 [6] [i_2] [i_2]);
                        var_21 = (min((arr_5 [i_5 + 1] [i_5 - 1] [i_1]), 131606671822371949));
                        var_22 -= ((var_4 ? ((((-1 && (arr_7 [i_0] [i_1] [i_2]))) ? ((max(-1, 1))) : ((-2009324657 ? -3061149046739068586 : 1)))) : (((((arr_12 [i_2] [i_5 - 1] [2] [i_2] [6]) <= (arr_2 [i_5 + 1] [i_2] [i_5 + 3])))))));
                    }
                    for (int i_6 = 1; i_6 < 7;i_6 += 1) /* same iter space */
                    {
                        var_23 = (min(((max(65024, 25059))), ((~(arr_8 [i_6 + 2])))));
                        var_24 &= (max(((max(102, -3730))), (((!1) ? -60 : ((min(1, (arr_15 [i_2] [i_1]))))))));
                    }
                    var_25 += (((24 ? 102 : 4131080549)));
                }
            }
        }

        /* vectorizable */
        for (int i_7 = 1; i_7 < 8;i_7 += 1) /* same iter space */
        {
            var_26 += (((((var_4 ? var_10 : var_12))) ? ((var_11 ? 0 : (arr_13 [i_0] [i_0] [6] [6]))) : 1));
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 8;i_9 += 1)
                {
                    {
                        var_27 = 96;
                        arr_26 [i_7] = var_3;
                    }
                }
            }
            var_28 = (((-127 - 1) ? -57291153 : (arr_16 [i_0] [i_7] [i_0] [i_0] [i_0] [i_7 + 1])));
            var_29 *= var_9;
        }
        for (int i_10 = 1; i_10 < 8;i_10 += 1) /* same iter space */
        {
            var_30 = -2009324686;
            var_31 = ((~(min((((arr_19 [i_10] [3]) ? -1 : var_2)), ((min(-3732, 92)))))));
        }
        for (int i_11 = 1; i_11 < 8;i_11 += 1) /* same iter space */
        {
            var_32 = max(8628328208182202849, 27);
            arr_32 [i_0] [i_11] = min(((-88 ? 131606671822371949 : -2009729917)), (((!(arr_5 [i_11 - 1] [i_11 + 2] [i_11])))));
        }
    }
    #pragma endscop
}
