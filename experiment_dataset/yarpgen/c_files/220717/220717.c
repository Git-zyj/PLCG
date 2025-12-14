/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((max((((255 ? var_10 : var_12))), (((arr_2 [i_1] [i_1 + 3] [i_0]) * var_2)))) * (((((var_6 && (arr_3 [i_1] [15]))) ? ((var_15 ? (arr_1 [i_1] [i_0]) : var_6)) : (0 && var_5))))));
                arr_5 [i_0] [i_0] [i_1 + 1] = (((((!(arr_1 [i_0] [i_0]))) && (!var_17))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_1] [i_1] [i_0] = 0;
                            arr_13 [11] [11] [i_0] &= (((arr_6 [i_3 - 1] [12] [i_2 - 1] [i_1 + 1]) ? (((((0 ? (arr_2 [i_0] [i_2 - 1] [11]) : (arr_2 [i_1] [i_1] [i_1])))) ? var_10 : -1)) : var_4));
                        }
                    }
                }
                arr_14 [i_1 + 4] [i_0] [i_0] |= (((((arr_7 [i_1 - 1] [i_1 + 3] [i_0]) != (arr_6 [i_1 + 2] [i_1 + 3] [i_1 + 3] [i_1 + 3]))) ? ((8207 ? 3369158339043613431 : -27335)) : (((((0 / 7904038611888460124) || (arr_2 [i_0] [i_0] [i_0])))))));
            }
        }
    }
    var_18 &= ((((max(var_16, ((var_12 ? var_16 : 1))))) ? 9057474635160166417 : 23));
    var_19 |= var_13;
    var_20 = var_3;
    #pragma endscop
}
