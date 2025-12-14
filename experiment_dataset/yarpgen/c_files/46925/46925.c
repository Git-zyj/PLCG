/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 28558;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 *= var_2;
        var_19 = (max(var_19, (((!(((2219697588 ? var_5 : 114))))))));
        var_20 = (((0 == -21456) ? -21457 : ((var_2 ? var_5 : 13851))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_1] [i_0] [i_1] = -1984;
            var_21 = (max(var_21, (((!(((var_16 ? var_8 : -99))))))));
            var_22 ^= var_12;
        }
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            var_23 -= 0;
            var_24 = (min(var_24, var_4));
        }
        for (int i_3 = 4; i_3 < 21;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        arr_16 [i_0] [i_3] = (!var_6);
                        var_25 = (!2219697586);
                        var_26 = ((32766 ? var_15 : (14336 >= 13826)));
                        var_27 = ((((var_16 ? var_0 : -996109626)) - 116));
                        var_28 -= ((-16135 ? 1 : -12));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        var_29 = (max(var_29, (((var_9 ? 91 : -1677304293)))));
                        var_30 = (((((87 ? 65519 : var_5))) ? 0 : (var_4 & 21435)));
                    }
                }
            }
        }
        for (int i_8 = 3; i_8 < 21;i_8 += 1)
        {
            var_31 = 1982925790;
            var_32 ^= var_6;
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            var_33 -= (var_14 | 3338902388);
                            var_34 = ((((-20315 ? 2 : var_5)) >= 10));
                        }
                    }
                }
            }
        }
        var_35 = (((((var_8 ? 0 : 1644965078))) ? (!var_1) : var_11));
    }
    var_36 = (min(var_36, (-var_4 && -17)));

    for (int i_12 = 1; i_12 < 12;i_12 += 1)
    {
        var_37 = (min(var_37, var_13));
        var_38 = (max(var_38, ((((((-571977983 ? var_7 : var_12))))))));
        var_39 *= var_12;
        var_40 = (((996109625 ? ((var_13 ? 49460 : var_12)) : var_15)));
        var_41 &= (((((-(var_13 & var_14)))) ? (-1982925791 >= 1073739776) : (var_4 * var_6)));
    }
    #pragma endscop
}
