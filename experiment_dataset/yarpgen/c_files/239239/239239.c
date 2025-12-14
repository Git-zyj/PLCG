/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (var_2 % ((((min(113, (arr_1 [i_0])))) ? (((arr_3 [i_0] [i_1]) - -113)) : ((((arr_5 [i_0]) - (arr_2 [i_0] [i_0])))))));
                arr_7 [i_0] [i_0] = (arr_1 [i_1]);
                var_14 = (min(var_14, (((-((((95 ? 13846 : var_7)))))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_15 = (arr_14 [12] [i_2 + 2] [i_2 + 2] [8] [i_2 + 1] [i_2 + 2]);
                                arr_17 [i_3] = (max(((var_1 ? (arr_2 [i_2 - 1] [i_2 + 2]) : (arr_8 [i_2 + 1] [i_4 - 1] [i_4 - 1]))), ((((arr_2 [i_2 - 1] [i_2 + 2]) || (arr_8 [i_2 + 2] [i_4 + 2] [i_4]))))));
                                arr_18 [i_0] [i_1] [i_2] [i_1] [i_3] [i_3] [i_4] &= (max(-1392446975590403418, -13846));
                                arr_19 [i_3] [i_1] [i_1] [i_1] [i_4] = ((0 ? -13847 : -13842));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    var_16 = (((((arr_23 [i_5]) ? (0 / 1) : (((arr_14 [i_5] [i_6] [i_7] [i_6] [i_7] [i_6]) ? 13846 : (arr_10 [i_5] [i_6]))))) > (((6918534557472734469 && (-32767 - 1))))));
                    var_17 = ((((((arr_3 [i_5] [i_5]) ? (arr_3 [i_5] [i_6]) : (arr_3 [i_5] [i_6])))) == 26388279066624));
                    var_18 += var_7;
                }
            }
        }
    }
    var_19 = 1164221327;
    var_20 = (min(var_20, (((4294967295 >> (var_6 < var_6))))));
    #pragma endscop
}
