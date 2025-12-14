/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((var_5 - ((min(-52, var_3))))) + 2147483647)) << (((((var_1 != (((var_0 >> (var_8 - 1937618798))))))) - 1))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = (((51 << (var_8 - 1937618796))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            var_12 -= -13067;
            var_13 *= ((-13049 ? var_9 : -var_5));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_14 ^= -var_8;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_15 [1] [i_2] [i_2] [i_2] [i_2] [i_0] [i_0] = 65513;
                            arr_16 [i_0] [i_2] [i_3] [i_4] [i_5] = (!var_4);
                            arr_17 [i_0] [i_2] [i_0] [i_3] [i_3] [i_5] [i_5] = (108 % 13047);
                            var_15 = ((4980848976874829494 <= (!4294967295)));
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 7;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        {
                            arr_29 [i_0] [i_0] [i_7] [i_6] = 62;
                            arr_30 [i_0] [i_0] [i_0] [i_6] [i_0] &= (-13086 / var_4);
                            var_16 = (min(var_16, (((var_0 + (var_5 == 11718314237948749025))))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 7;i_11 += 1)
                {
                    {
                        var_17 ^= (((((var_4 ? 13073 : 2275834792))) + var_1));
                        var_18 ^= -29989;
                        var_19 = (((((86 ? 1 : 3838819432493280494))) ? -13053 : ((var_9 ? var_3 : 65535))));
                        arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_11] = (!804245322);
                        var_20 = (((-13053 ? var_5 : 41759)));
                    }
                }
            }
        }
        arr_37 [i_0] = -13053;
    }

    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {
        var_21 = (max(var_21, ((min((((-((var_7 ? 23 : 65535))))), (((6728429835760802585 || 22) ? (-7010188302835404216 || var_5) : var_8)))))));
        arr_42 [1] [i_12] = (max((!65508), (min((var_7 == -40), (1 != -127)))));
    }
    var_22 = 1;
    #pragma endscop
}
