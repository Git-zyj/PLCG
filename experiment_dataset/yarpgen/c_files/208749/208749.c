/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((~1) ? var_8 : var_4)));
    var_11 = (~var_3);
    var_12 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_13 = (((max(var_5, 1)) ? (87 >> var_4) : (min(1, 12694574764984959472))));
                    var_14 = ((min(3125864197236789703, (-9223372036854775807 - 1))));
                }

                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_15 = ((!(((5436400868262154655 ? ((-10613 ? var_0 : 1323269937)) : -18)))));
                    var_16 = (~0);
                }
                var_17 = (max(0, (min(var_3, var_4))));

                for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            var_18 = var_1;
                            arr_18 [i_5] [i_5] = var_4;
                            var_19 = var_5;
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_22 [i_5] [i_5] [i_1 + 1] [i_1 + 1] [i_5] [i_5] [i_7] = ((224 ? var_9 : 12694574764984959472));
                            var_20 = 1;
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_21 |= (!var_8);
                            arr_26 [11] [3] [3] [i_5] [i_8] [3] = ((5752169308724592143 ? var_2 : (arr_4 [i_1 - 1] [i_1 + 1])));
                            arr_27 [i_1] |= (46760 % -88);
                            var_22 = var_0;
                            var_23 = -var_7;
                        }
                        arr_28 [i_0] [i_5] [0] [i_0] = (-12694574764984959472 & (32767 | var_0));
                    }
                    var_24 = (((((((arr_20 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] [i_1 + 2]) == var_5)))) >= (--5752169308724592118)));
                    var_25 = (max((arr_7 [i_1] [i_1 - 2] [i_1]), (((((var_7 ? var_0 : var_1))) ? var_6 : -538799285518185251))));
                    var_26 = max((((((var_2 * (arr_25 [1] [i_4]))) != ((min(var_9, 244)))))), ((-((12694574764984959482 ? -5116469281821020942 : 628474297)))));
                }
                for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                {
                    var_27 = ((((-5116469281821020942 <= (!-21521)))));
                    var_28 = (min(var_0, (648435803180722094 - 0)));
                    var_29 = (min((min((0 || 15448143760423026919), -3992889953673099452)), (((-(-32767 - 1))))));
                }
            }
        }
    }
    var_30 &= (min(var_5, ((max(0, var_3)))));
    #pragma endscop
}
