/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (((((10 ? 0 : -9) & -58))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_15 [i_1] [i_3] [6] = (min(6, var_2));
                            arr_16 [i_2] [i_1] [i_2] [i_3] [i_0] = (!0);
                            arr_17 [i_0] [i_1] [i_2] [i_0] [i_4] = ((((((min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_6)) & 65535))) ? (arr_11 [i_0] [i_2] [i_2] [i_0 - 1] [i_0]) : ((((arr_8 [i_0] [i_1] [i_2] [i_3]) ? (arr_2 [i_0]) : (((arr_4 [i_0] [i_1] [i_0]) ? var_14 : (arr_9 [i_0] [i_1]))))))));
                        }
                        arr_18 [i_0] [i_1] [i_2] [6] &= ((+((((arr_0 [i_2] [i_0]) ? 1 : var_14)))));
                        arr_19 [i_0] [i_1] [8] [i_0] = (((arr_7 [i_3]) ? ((-(arr_11 [i_0] [i_0] [i_1] [i_2] [14]))) : (arr_4 [12] [i_1] [i_2])));
                        arr_20 [i_0] [i_0] [0] [i_0] [i_0] &= ((var_15 >> ((min(((var_13 <= (arr_0 [i_3] [i_1]))), var_0)))));
                    }
                }
            }
        }
        arr_21 [i_0] = 62834;
    }
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        arr_24 [i_5] = ((((((!(arr_22 [i_5]))))) >= (min((((arr_23 [i_5] [i_5]) ? 58 : (arr_23 [i_5] [i_5]))), (!2348077382)))));
        arr_25 [i_5] [i_5] = (min(var_0, (arr_23 [i_5] [i_5])));
        arr_26 [i_5] = ((-10 ? (min(var_16, var_1)) : (((-(arr_22 [i_5 + 1]))))));
    }
    var_17 = min(((4398042316800 ? -6971749960664559696 : 48)), -46);
    #pragma endscop
}
