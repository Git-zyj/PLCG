/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = (min(222, 3305130376));
    var_13 = ((var_0 ? (min((max(255, var_7)), var_8)) : (((((var_1 ? -1 : 127))) ? -116 : (max(var_7, var_8))))));
    var_14 = (((((var_4 ? var_6 : var_6))) ? var_1 : ((((388953413 << (-8943971083908678481 + 8943971083908678481)))))));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_15 = (((((0 ? ((4005383619 ? (arr_0 [4] [4]) : 0)) : 3305130347))) ? 0 : ((((-127 - 1) == 179)))));
        var_16 = ((((((arr_0 [i_0 - 3] [i_0 - 3]) ? (((-32767 - 1) ? 1471026806 : var_1)) : (!8378567691335358129)))) + (var_9 - -2020035044)));
        var_17 = (((4005383619 ? 15486 : (arr_2 [i_0 + 2]))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_18 = (max((arr_7 [i_1] [i_2 + 3] [i_1]), (!0)));
            var_19 = (max(var_19, var_7));
            var_20 = 124;
        }
        for (int i_3 = 1; i_3 < 19;i_3 += 1) /* same iter space */
        {
            var_21 |= 3231893103;
            var_22 = (min(var_22, (((((((arr_9 [i_1]) * (arr_9 [i_1])))) || (~388953413))))));
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                var_23 = (~var_3);
                var_24 = (~1825);
                var_25 = -1;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_26 = (max(var_26, ((((arr_8 [i_1] [i_5] [i_7]) ? (((((min(1, var_9)) > 217)))) : (arr_8 [11] [i_4] [16]))))));
                            var_27 = (-2139147139 || 255);
                        }
                    }
                }
                var_28 ^= -3599816180;
            }
            var_29 = max((max((arr_11 [i_1] [i_4]), var_10)), (arr_19 [7] [3] [i_4] [i_1] [7] [i_1] [i_1]));
            var_30 = (arr_5 [i_1]);
            var_31 = max(-87, 86);
        }
        for (int i_8 = 1; i_8 < 21;i_8 += 1)
        {
            var_32 = 4920477227603788905;
            var_33 &= (arr_13 [i_1] [3] [5] [6]);
            var_34 = (max(((((arr_11 [i_8 - 1] [i_8 - 1]) || (arr_11 [i_8 - 1] [i_8 + 1])))), (max((arr_10 [i_1] [5] [i_1]), 14))));
            var_35 = (arr_15 [i_1] [20] [i_1] [0]);
            var_36 = (arr_19 [i_1] [i_1] [i_1] [i_8 + 1] [i_1] [9] [i_8 - 1]);
        }
        var_37 = ((-2096766156397550621 != (arr_5 [i_1])));
        var_38 = (-1471026806 == 1471026805);
    }
    #pragma endscop
}
