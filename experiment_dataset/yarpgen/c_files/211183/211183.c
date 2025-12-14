/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_0] = ((((((arr_2 [i_1]) ? 38758 : 2329270569646813776))) ? (((((var_2 ? 0 : (arr_3 [9])))) ? var_8 : ((281474976710400 ? (arr_2 [i_0]) : (arr_5 [i_0]))))) : ((((arr_1 [i_1 + 1]) ? 69 : 65535)))));
                arr_8 [i_0] [i_0] [i_0] = (((((arr_6 [i_0] [i_0 - 3] [i_1]) ? (arr_6 [5] [i_0 - 3] [19]) : (arr_6 [4] [i_0 - 3] [i_0 - 3]))) & 253));
            }
        }
    }
    #pragma endscop
}
