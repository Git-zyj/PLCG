/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((min((min(var_3, var_9)), (var_7 > var_10)))) ? (((((var_8 ? var_6 : var_10))) ? (max(var_2, var_8)) : ((var_5 ? var_7 : var_5)))) : (((~var_8) % var_6)));
    var_12 = var_2;
    var_13 -= var_1;
    var_14 = (max((((((var_7 ? var_0 : var_10)) < (min(var_0, var_10))))), var_10));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = ((((max((min((arr_2 [i_0]), (arr_2 [i_0]))), (var_3 != var_4)))) ? ((((((var_1 || (arr_0 [i_0] [i_0])))) >= ((-(arr_6 [i_0])))))) : ((min(((var_5 >= (arr_6 [i_1]))), ((var_7 != (arr_0 [i_0] [i_0]))))))));
                arr_7 [i_0] [i_0] [i_0] |= (((((var_3 <= var_4) ? (max(var_10, var_10)) : (((arr_6 [i_0]) ? (arr_0 [i_0] [i_0]) : var_10)))) << (min((((arr_4 [i_1]) + (arr_0 [i_0] [i_0]))), (((var_3 < (arr_5 [i_0] [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
