/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = ((((((min(var_15, -32746)) - (((max(-84, 0))))))) ? (((arr_1 [i_0]) ? (min(23, 12410776572512464910)) : (var_9 ^ 12410776572512464910))) : (((~(arr_2 [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [2] [i_0] [i_0] [i_0] [i_0] = (arr_4 [i_0] [7] [i_0]);
                            var_21 += (((((arr_5 [i_0] [i_0]) < ((((arr_4 [3] [i_1] [12]) && 6035967501197086722))))) ? (((arr_7 [i_0] [i_1] [i_0] [i_1] [i_1] [i_3]) ? (arr_7 [i_0] [i_1] [i_2] [i_3] [i_0] [i_3]) : (arr_7 [i_3] [i_2] [i_2] [i_1] [i_0] [i_0]))) : (arr_2 [i_0] [i_0])));
                            arr_10 [7] [i_0] [i_1] [i_2] [15] [15] = (((((((var_10 - (arr_2 [i_0] [i_0]))) & ((-4214484738007386627 ? 32569 : 635))))) >= ((0 ? (((arr_3 [i_2]) ? var_11 : 9805331271216740919)) : 68719476735))));
                        }
                    }
                }
            }
        }
    }
    var_22 = (((((((min(16, var_5))) ? (var_13 >= var_1) : ((-25 ? 721446896 : var_6))))) ? (((((max(var_14, var_0)) != (0 >= var_6))))) : ((-(~var_4)))));
    #pragma endscop
}
