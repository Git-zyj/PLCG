/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 &= ((((var_12 > ((var_17 ? (arr_0 [i_0] [i_0]) : var_12)))) ? (((arr_2 [i_0 + 1]) ? var_9 : ((min(80, var_15))))) : ((1284501705 | ((17755622624294882989 ? var_15 : 1))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_9 [2] [2] [i_1] [i_2] [10] [i_3] = (((arr_1 [i_1] [i_1]) != ((-(arr_7 [i_3 + 1] [i_3 - 2] [i_0 - 2])))));
                            var_20 = ((-var_18 ? var_17 : ((max((arr_0 [i_3 - 2] [i_3 - 3]), (arr_0 [i_3] [i_3 - 1]))))));
                            var_21 = (max(var_15, (arr_5 [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_22 = var_9;
    var_23 = (min(var_23, -19));
    var_24 = (-(min(((min(1, 349243710))), ((var_6 ? 1 : var_4)))));
    var_25 |= var_12;
    #pragma endscop
}
