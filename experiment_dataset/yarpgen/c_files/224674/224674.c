/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 += ((!(var_7 % var_8)));
                    var_12 = ((!((min((var_1 / var_7), ((var_0 ? var_2 : var_7)))))));
                    var_13 = (((max(var_3, var_7)) - var_5));
                    arr_8 [i_2] [i_0 - 1] [i_0 - 1] [i_0 - 1] = (((max(var_6, var_10)) == ((min(var_10, var_1)))));
                }
            }
        }
    }
    var_14 = -var_1;
    var_15 = -var_6;
    var_16 = ((var_10 ? (((1 || -5098190816153926579) ? var_0 : (min(var_6, var_4)))) : ((((var_4 * var_4) ? (var_10 * var_3) : (var_4 == var_4))))));
    var_17 = (min(((min(var_8, (max(var_6, var_1))))), (((((var_4 ? var_8 : var_10))) / (max(var_9, var_2))))));
    #pragma endscop
}
