/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_0] [i_2] [i_0] [i_0] [i_0] = 12861563931734389057;
                            var_19 = (max(((max(48, -40))), (((~(((arr_9 [i_3] [i_0] [i_1] [i_0] [i_0]) ? (arr_3 [i_0] [i_0] [i_0]) : var_0)))))));
                        }
                    }
                }
                var_20 += (arr_10 [i_0] [i_0] [4] [i_1] [i_1] [i_1]);
                arr_12 [i_0] [i_0] = ((-(arr_7 [i_0] [7] [8] [i_0])));
            }
        }
    }
    var_21 = 16502889413266012121;

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_22 = ((((((2604298857 / (arr_3 [3] [i_4] [i_4])))) && (!4803849916201754082))) ? (((var_3 - (2271989450 || 59)))) : (((max(371822704, 55)) & 66)));
        var_23 -= ((~((222 ? 20822 : 61))));
        var_24 = (min(var_24, ((-67 ? (((-(max((-32767 - 1), (arr_6 [i_4])))))) : (((175 / var_15) ? 47 : var_11))))));
        arr_16 [i_4] = (-((-(~45))));
    }
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        arr_20 [i_5] = (10724 & 14);
        arr_21 [i_5] [i_5] = (((((((arr_19 [i_5]) & 7133606485428144874)))) ? ((((((var_1 | (arr_19 [i_5])))) || (48888 - 90)))) : (arr_17 [10])));
    }
    #pragma endscop
}
