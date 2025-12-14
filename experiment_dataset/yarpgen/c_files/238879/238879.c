/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    arr_7 [i_2] [i_2] [i_2] [i_1] = (((min(((var_9 ? 35 : 35520)), -var_7))) ? (+-30016) : (arr_3 [i_0] [i_2]));
                    arr_8 [i_1 - 2] [i_2] = ((min((arr_6 [i_2]), ((2245422318742498499 ? 30016 : var_9)))) * (arr_4 [i_0] [i_0] [i_2]));
                    var_13 = (arr_2 [i_0]);
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    arr_12 [i_0] [i_1] [i_3] = ((((-(max((arr_5 [1] [i_1] [i_3] [i_3]), 35520)))) + (min((~var_7), (arr_10 [i_3] [i_3] [i_3] [i_3])))));
                    var_14 = (arr_10 [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_3]);
                }
                var_15 = (max(((min((arr_10 [i_0] [i_0] [i_0] [16]), (30015 && var_9)))), (min((1152640029630136320 || -2245422318742498499), ((1 ? (arr_6 [6]) : 3291332970647325928))))));

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_15 [i_0] [i_0] = (max((arr_9 [i_1] [10]), ((((max(var_5, 21083))) ? (~var_10) : var_8))));
                    var_16 = (min(var_16, (((0 ? (min((arr_0 [i_1 - 1] [i_1 - 2]), var_1)) : (((((arr_1 [i_1 + 1] [i_1 + 1]) || (arr_6 [8]))))))))));
                    var_17 += (min(((((((arr_14 [6] [i_4]) * (arr_13 [i_0] [i_0] [i_0])))) ? -30015 : (arr_3 [4] [i_1 - 2]))), (arr_2 [i_0])));
                }
                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    var_18 *= ((!(((11198 & ((16340830400551558609 ? 2245422318742498499 : var_9)))))));
                    arr_20 [i_0] [i_0] [i_0] [i_0] = 35;
                }
                arr_21 [i_0] = (min((arr_11 [i_0] [6] [0]), ((((65535 % var_3) > (arr_18 [i_0] [i_1 + 1] [i_1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 21;i_7 += 1)
        {
            {
                arr_28 [i_6] = (max((arr_26 [i_6 + 1] [i_6 + 1] [i_6]), (((!(arr_22 [i_6] [i_7 + 3]))))));
                arr_29 [2] [i_7] [i_6] = (max((max(((((arr_25 [i_6]) == (arr_23 [i_6] [i_6])))), ((var_1 ? (arr_22 [i_6] [i_6]) : -31919)))), (min((min((arr_27 [i_6] [i_7]), var_12)), 1006632960))));
            }
        }
    }
    #pragma endscop
}
