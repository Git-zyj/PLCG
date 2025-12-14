/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((((min((arr_2 [4] [i_1]), ((max(var_5, -21558)))))) ? (min((max(var_11, (arr_5 [i_1]))), (!var_14))) : var_5));
                    arr_9 [1] [i_1] [i_2] [i_0] = (((((arr_7 [i_0] [11]) ? 1 : -64))));
                    arr_10 [i_2] = (arr_6 [5] [i_0]);
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_19 = (((((var_0 ? (((!(arr_6 [i_0] [i_3])))) : ((var_9 ? (arr_7 [i_1] [1]) : (arr_5 [i_0])))))) || ((((((-21550 / (arr_7 [i_0] [i_1])))) ? (arr_0 [i_3]) : 21550)))));
                    arr_13 [i_0] [i_1] [i_1] [i_3] = ((-(((!(arr_11 [i_1] [i_0] [i_3] [i_0]))))));
                }
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    arr_17 [i_0] [i_4] = ((-21550 * (((arr_6 [i_0] [i_0]) ? var_1 : ((-21564 ? -21550 : var_14))))));
                    var_20 = var_1;
                    arr_18 [i_0] [i_0] [i_0] = (arr_11 [2] [i_4] [i_4] [i_0]);
                    arr_19 [i_4] [i_1] [i_4] = var_3;
                    var_21 = (max((1 ^ 18446744073709551615), (~-21540)));
                }
                arr_20 [i_0] [i_0] [i_0] = ((-(arr_6 [i_0] [i_1])));
            }
        }
    }
    var_22 |= ((var_6 ? (((((var_3 ? 21549 : 26))))) : var_2));
    var_23 = ((((-4967 ? var_2 : -15))) ? (max(((var_4 ? 1135336129242470980 : 21554)), var_9)) : (!18446744073709551611));
    var_24 = ((!((max(var_12, (!-29453))))));
    #pragma endscop
}
