/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                var_10 = (max(var_10, (~29942)));
                var_11 = max((((4384981259747963373 ? ((((arr_3 [i_1]) ? (arr_2 [i_1]) : (arr_4 [i_1] [i_1])))) : 2178295766))), (((arr_2 [i_1 - 4]) ? -36263 : (min(var_5, -115)))));
                var_12 = (max(var_12, ((max(-59, (min((min(var_7, var_2)), var_7)))))));
                var_13 = ((3930635139 ? (((((min((arr_4 [i_1] [i_1]), (arr_1 [i_0]))))) / ((1 ? 2193027823 : -10)))) : var_7));
            }
        }
    }
    var_14 |= (min(1, 3087628460));
    #pragma endscop
}
