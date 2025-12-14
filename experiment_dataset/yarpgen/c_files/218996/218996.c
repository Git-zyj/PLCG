/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218996
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
                arr_7 [i_0] [i_0] = (((arr_6 [i_0]) | (arr_6 [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_10 = (min(var_10, ((((arr_13 [i_1] [i_1] [i_2] [i_1] [i_2 - 4]) ^ (arr_13 [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_2] [i_2 - 3]))))));
                            var_11 += var_9;
                            arr_15 [i_2] [i_2] = (((((var_6 ? var_5 : (arr_13 [i_0] [i_0] [i_1] [i_2 + 1] [i_3])))) << ((((((((arr_11 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) ? (arr_4 [i_1] [i_2] [i_1]) : var_5))) + 33)) - 17))));
                        }
                    }
                }
            }
        }
    }
    var_12 = 69;
    #pragma endscop
}
