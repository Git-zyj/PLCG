/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = (min((~-16777216), (((arr_8 [i_2] [1] [i_1] [i_0]) ? (arr_8 [i_1] [i_1] [1] [i_2]) : (arr_4 [i_0] [i_1] [i_2])))));
                    arr_11 [i_0] [i_1] [i_2] = ((((((((-2121343464 ? (arr_8 [i_0] [i_0] [i_0] [1]) : (arr_0 [i_0])))) ? var_2 : (~var_10)))) | (((arr_5 [i_0] [0] [i_0]) ? (~1383558085) : (arr_1 [i_0] [i_0])))));
                }
            }
        }
    }
    var_20 = var_18;
    var_21 = ((2911409225 ? 2147483647 : (2911409191 / -30570)));
    #pragma endscop
}
