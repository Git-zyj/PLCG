/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [10] [i_0] [i_2] [i_0] = (((((var_4 ? (arr_6 [i_2] [i_0] [i_0]) : (var_0 * var_1)))) ? ((((var_4 ? var_3 : var_6)))) : (arr_4 [i_0] [3] [i_0])));
                    var_12 = min((arr_4 [i_0] [i_1 + 2] [i_1 + 1]), (arr_3 [i_1 + 1]));
                    var_13 = var_8;
                }
            }
        }
    }
    var_14 = var_1;
    #pragma endscop
}
