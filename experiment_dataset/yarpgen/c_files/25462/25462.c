/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [1] = (max((min((var_0 && var_2), ((var_9 ? 1152921504606846976 : var_8)))), (((-(arr_0 [4]))))));
        arr_5 [i_0] = (min((((var_3 <= (arr_2 [i_0 - 1])))), ((((((arr_2 [i_0 - 1]) - 1152921504606846976))) ? ((((var_9 || (arr_2 [i_0]))))) : (arr_2 [i_0 - 1])))));
    }
    var_11 = (max(var_6, (((var_2 || var_3) * 17293822569102704640))));
    var_12 = 715885548;
    var_13 = ((min(var_3, -94)));
    #pragma endscop
}
