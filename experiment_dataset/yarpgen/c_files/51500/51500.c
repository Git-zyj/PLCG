/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_10 = (min(((-(arr_5 [i_0] [i_1] [i_2]))), -84));
                    var_11 = (arr_6 [i_2]);
                    arr_8 [10] [10] = (arr_4 [i_0] [i_0]);
                }
            }
        }
    }
    var_12 = (max((((-(!-84)))), (((var_9 * var_4) ? (max(49, var_3)) : (max(var_7, var_1))))));
    var_13 = var_8;
    #pragma endscop
}
