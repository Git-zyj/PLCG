/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    var_15 = (((var_1 ? var_12 : var_3)));
                    arr_8 [1] [i_1] = (min((((-(arr_5 [7] [i_1])))), var_14));
                    arr_9 [i_0] = 7902346012695677640;
                    arr_10 [i_0] &= (min(((((arr_5 [i_2 + 1] [i_2 + 1]) * var_10))), (6644098489521922880 * 0)));
                    var_16 = (((((arr_4 [i_0 - 1] [i_1] [1]) ? var_5 : (arr_5 [i_0 + 2] [i_2 - 1]))) <= (min(var_8, (arr_4 [i_0 - 2] [i_1] [i_1])))));
                }
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_17 ^= var_2;
                            arr_15 [i_0] [4] [i_3] [i_4] [i_0] = (((((arr_1 [i_4]) ? ((((arr_1 [i_0 + 1]) ? var_6 : var_5))) : var_12)) / ((min(24576, ((var_12 ? var_3 : (arr_1 [i_0]))))))));
                            var_18 += (min(3038, ((min((arr_1 [i_0 + 2]), 5)))));
                        }
                    }
                }
            }
        }
    }
    var_19 &= var_2;
    #pragma endscop
}
