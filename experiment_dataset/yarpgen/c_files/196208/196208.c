/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = (max(1, (max(var_9, (arr_1 [i_0 + 1] [i_1])))));
                    var_21 ^= (max((!var_2), (min((((arr_1 [i_0 - 1] [i_2]) ? var_2 : 173)), ((var_13 >> (((arr_0 [i_0 - 2]) - 12896420080897454956))))))));
                    var_22 = (max(var_22, (((((var_10 ? (min(var_13, var_6)) : (~var_11)))) ^ (~16)))));
                }
            }
        }
    }
    var_23 = var_0;
    var_24 = ((((((var_17 == var_18) ? (max(var_5, 162)) : (((var_13 ? var_3 : -7631)))))) ? (((max(var_13, var_4)))) : (((var_18 ? var_6 : var_7)))));
    #pragma endscop
}
