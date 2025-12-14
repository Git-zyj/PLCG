/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((!var_8) == (max(var_2, ((194 ? var_5 : var_7))))));
    var_11 = (min(var_2, ((((min(var_3, var_0))) ? (max(18786, 2147483648)) : 32741))));
    var_12 = -var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((~((-(arr_3 [i_0] [i_0])))));
                arr_6 [i_0] = (((((-(arr_2 [i_1 + 2])))) <= -32710));
                arr_7 [i_0] = (arr_3 [i_0] [i_1]);
                var_13 = 65;
            }
        }
    }
    var_14 = var_2;
    #pragma endscop
}
