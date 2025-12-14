/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 = 1397636164;
                                var_17 = 2693822277;
                                var_18 |= (((3253718562 || 1041248733) && (((1041248735 ? -0 : 16743575074006530337)))));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        arr_18 [i_1] [i_5] [i_0] [i_0] [i_1] [i_0] |= (31 && 205);
                        arr_19 [i_0] [6] [i_1] [i_0] [i_0] [i_1] |= var_7;
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] &= -59;
                        var_19 |= ((1041248730 ? var_3 : var_8));
                    }
                    for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_1] [7] [i_2] = -3253718565;
                        arr_28 [i_2] = 3253718559;
                        arr_29 [i_2] [i_1] [i_1] [i_2] = (((!var_0) && (!67)));
                        arr_30 [i_1] [i_7] |= max(((var_2 ? 4398046511103 : ((-1687989225 ? var_7 : 7185189356070186137)))), (max(-3503651067463855448, 3253718561)));
                    }
                    var_20 = max(((min(1687989225, (~1826592733)))), ((999 ? 0 : (~1041248735))));
                    var_21 = (((((var_2 ? -38 : 1))) ? var_9 : (((1687989228 ? var_0 : -2147483646)))));
                    var_22 |= -1687989225;
                }
            }
        }
    }
    var_23 = max(-var_7, var_5);
    #pragma endscop
}
