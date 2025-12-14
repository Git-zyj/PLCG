/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_7));
    var_11 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = (min((var_0 + -13), (min(var_8, var_8))));
                var_13 ^= ((((11121639518578557256 * (arr_5 [i_1 - 1] [i_1] [i_1 - 2]))) - (((arr_5 [i_0] [i_1 - 1] [17]) ? var_5 : (min((arr_0 [i_1] [i_0]), var_0))))));
                arr_7 [i_0] [i_0] [i_0] = ((-(min((var_1 * 8521215115264), ((-(arr_6 [0] [22] [i_0])))))));
            }
        }
    }
    #pragma endscop
}
