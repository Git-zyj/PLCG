/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, -var_6));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_11 = (((((var_4 ? (arr_7 [6] [17] [i_1 - 3]) : (arr_7 [24] [7] [i_1 + 1])))) ? (((!(arr_2 [i_0 + 2])))) : -46));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [21] [i_2] [i_3] [5] [i_3] = ((((~(arr_14 [i_4 + 1] [i_3 - 1] [i_1 - 4] [i_0 - 3] [2] [i_0]))) < var_6));
                                var_12 = (((~2346020171) != (((max((arr_8 [i_0] [8] [i_0] [i_1 - 4]), (arr_16 [i_2] [i_2] [i_3 + 1] [16] [8])))))));
                                var_13 = var_6;
                                arr_19 [2] [i_0] = (min((((((max((arr_6 [i_4]), -46)))) - (max(var_3, (arr_6 [i_3]))))), (((var_4 || (arr_3 [i_4 - 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = ((((var_8 == (~50737))) ? var_7 : (((((((var_6 ? var_3 : var_2))) || var_8))))));
    #pragma endscop
}
