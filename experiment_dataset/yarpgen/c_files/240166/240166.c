/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((max(var_1, 1)))) >= (((1 ? 1 : var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = min(((-494804152 ^ (arr_0 [i_0]))), (arr_0 [i_1]));
                arr_6 [i_0] [7] = (((((arr_2 [i_1]) >> (((var_2 << 0) - 38469)))) != ((((((arr_1 [0] [0]) ? var_2 : var_5)) > (arr_2 [8]))))));
                arr_7 [i_0] [i_0] = (arr_4 [i_0] [i_1]);
                var_13 = (min(var_13, ((((var_7 ? (arr_3 [10]) : (arr_3 [10])))))));
            }
        }
    }
    var_14 ^= var_5;
    #pragma endscop
}
