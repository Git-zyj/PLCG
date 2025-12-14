/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((var_4 ? 4900 : 3044906625))) ? ((var_0 ? var_5 : 14341)) : var_6)) >> (var_5 - 2955861278880184337));
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_8 [6] [i_1] [i_2] [i_2] |= (arr_5 [4] [i_1] [i_2]);

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_11 [0] [i_0] [i_0] [i_0 + 2] = ((-((((arr_3 [i_2] [i_1]) != (arr_3 [i_2] [i_3]))))));
                        arr_12 [i_0] = ((var_3 | ((var_4 ? (arr_2 [i_0 + 2]) : 3044906625))));
                        arr_13 [i_0] [i_0] = (-(arr_9 [i_0 + 3] [i_1] [i_1] [i_0]));
                        arr_14 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] = (arr_5 [i_0] [i_1] [i_2]);
                        arr_15 [i_0] = 3044906627;
                    }
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        arr_18 [i_0] [i_0] [12] [i_1] [i_2] [8] = ((((arr_16 [i_4] [i_4] [i_4 + 1] [i_0] [i_0 - 1] [i_0 + 2]) ? (arr_16 [i_4] [i_4] [i_4 - 1] [i_0 + 3] [i_0 - 1] [i_0 + 3]) : (arr_16 [i_4] [i_0 + 3] [i_4 + 1] [1] [i_0 + 3] [i_0 + 3]))) <= (arr_3 [i_0] [i_1]));
                        arr_19 [i_0] [i_1] [i_2] [i_4 + 1] [i_0 + 3] [i_0] = (max(var_11, (((((min(3612564835, (arr_7 [i_4] [i_0] [i_0] [i_0])))) ? (134 < 3044906623) : ((230 ? 107 : 26)))))));
                    }
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    arr_24 [i_0] [i_5] |= ((-3044906627 ? (arr_5 [i_5] [i_5] [i_5]) : (arr_7 [i_0] [i_0] [i_5] [i_0])));
                    arr_25 [i_0] [i_0] [6] = 1;
                    arr_26 [i_0] [i_1] [i_0] [i_0] = (min(((((arr_20 [11] [i_0 + 1] [i_0] [i_1]) + (arr_20 [i_0] [i_0 + 1] [i_0] [i_1])))), (min((arr_0 [i_0]), (arr_0 [i_0])))));
                }
                arr_27 [i_0] = (((((+((((arr_10 [i_0] [i_0]) || var_3)))))) ? (min(0, (max(-2147483636, 142)))) : 65535));
            }
        }
    }
    #pragma endscop
}
