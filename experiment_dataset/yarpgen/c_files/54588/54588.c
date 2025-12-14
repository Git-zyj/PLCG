/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_9;
    var_11 = 119;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [12] [i_1] |= -var_5;
                    var_12 *= ((((((((205 ? (arr_7 [i_0] [i_1] [i_1] [i_2]) : var_5))) ? 38333 : (~11)))) ? var_6 : var_8));
                    arr_9 [i_0] [12] [i_2] = var_2;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    arr_16 [1] [3] = (~((var_1 ? (var_6 >= var_0) : ((~(arr_12 [i_3]))))));
                    var_13 ^= (~-6857148525729379117);
                }
            }
        }
    }
    #pragma endscop
}
