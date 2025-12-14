/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((var_0 ? (3495889185 - 24190) : 799078110));
    var_21 = ((-((var_14 / ((799078110 ? -7446680496274944996 : var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (((arr_3 [4]) ? (((var_0 ? (max(-241551610, (arr_5 [i_0]))) : (arr_2 [i_0])))) : (((((241551588 ? var_4 : 241551569))) ? (((var_18 ? (arr_5 [i_0]) : var_4))) : ((7446680496274944973 ? (arr_3 [i_0]) : var_19))))));
                var_22 = ((var_9 < (((((22345 ? var_14 : var_13))) ? ((var_8 ? var_17 : 71695316372330129)) : var_6))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_23 = (arr_12 [9] [i_1] [i_2]);
                            arr_13 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0] = (58847 ? -6628808671944490293 : 26105);
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    var_24 = 7848184995966175928;
                    var_25 = ((var_5 ? var_13 : var_14));
                }

                for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                {
                    arr_18 [i_0] [i_1] [12] |= -1;
                    var_26 -= 799078131;
                    var_27 ^= var_6;
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                {
                    var_28 = ((-((58849 ? var_1 : 65535))));
                    var_29 = 6694;
                }
                for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                {
                    arr_24 [i_0 - 2] [i_1 + 1] [i_0] = ((-(((((619763915 ? (arr_15 [i_0] [i_0] [7]) : -261583536))) ? (arr_12 [i_0] [i_1] [6]) : var_6))));
                    var_30 = (max(var_30, (((((47087 / (arr_20 [i_1 - 1] [2])))) ? ((((arr_16 [i_1 - 1] [i_0 - 2]) ? (arr_20 [i_1 - 1] [2]) : (arr_16 [i_1 - 1] [i_0 - 2])))) : ((1433587561928442874 ? -1433587561928442875 : 9152))))));

                    for (int i_8 = 4; i_8 < 16;i_8 += 1)
                    {
                        var_31 = ((!(((((max(var_11, (arr_12 [i_1] [i_7] [i_8])))) ? (((arr_20 [i_0] [i_0]) ^ 16634)) : 65530)))));
                        var_32 = (((((329878563 ? (arr_17 [i_0 + 2] [i_1 + 1]) : (arr_20 [i_0 + 1] [i_0])))) ? (((arr_17 [i_8] [12]) ? ((57344 ? var_12 : (arr_0 [i_7] [i_7]))) : ((min((arr_6 [i_0]), var_9))))) : var_19));
                    }
                }
            }
        }
    }
    #pragma endscop
}
