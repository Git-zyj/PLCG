/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (max(((var_7 ? var_7 : ((var_4 ? var_1 : var_5)))), ((((var_5 % var_6) % var_9)))));
    var_11 = (((var_6 * var_4) ? ((var_0 ? ((var_8 ? var_5 : var_4)) : var_2)) : (((((var_6 + var_2) != var_9))))));
    var_12 &= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] = (14844 ^ 14848);
                arr_5 [i_0] [i_0] [12] = (((var_1 == var_3) ^ (var_7 & var_5)));
            }
        }
    }
    #pragma endscop
}
