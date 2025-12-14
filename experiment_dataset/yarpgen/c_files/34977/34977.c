/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((!(!var_16)))) * (((!(((220 ? 50 : var_16))))))));
    var_21 = ((14839243500549448710 ? 8601915561818558364 : 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_3] [i_3] = (((((17 ? (arr_6 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 1]) : 21))) || ((((arr_2 [i_1 + 1] [i_0]) ? 18027 : 12523656413305095765)))));
                            var_22 = ((2682889742157904010 ? 1193733561 : 16777215));
                            arr_11 [15] [i_0] [i_2] [i_0] [i_0] = (3005444331190099675 ? (((arr_8 [i_1 + 1] [i_1 + 2]) ? -64 : (!var_9))) : ((((!(arr_6 [i_2 + 1] [i_2] [i_2] [i_2 - 1]))))));
                        }
                    }
                }
                var_23 = (-((var_16 ? (((var_2 ? -26 : (arr_7 [i_0] [i_0] [i_0] [i_0])))) : (((arr_9 [i_0] [i_0]) ? var_14 : 1)))));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_24 = (max(var_24, ((((((arr_15 [i_4 - 3] [10] [i_4] [10]) + 2147483647)) >> (((((arr_8 [i_5 - 2] [i_1 + 1]) ? var_13 : (5961617317933790587 && var_2))) + 12747)))))));
                            var_25 = (((((-(arr_2 [i_1 + 2] [i_0])))) ? ((((arr_2 [i_1 + 1] [i_0]) ? var_4 : 18011))) : ((var_15 ? 420914415 : 8269937394086203765))));
                            var_26 ^= ((-1491969385 >= ((-(((arr_13 [i_0] [i_0] [i_4] [i_4]) / 18018))))));
                            arr_17 [i_1] [i_0] [i_4 - 3] [i_4 - 3] = ((18043 | ((var_9 ? ((var_13 ? var_6 : var_1)) : (arr_3 [i_4])))));
                        }
                    }
                }
                arr_18 [i_0] [i_0] = (((((27 >> (3005444331190099648 - 3005444331190099626)))) ? 29481 : 1856563024));
            }
        }
    }
    #pragma endscop
}
