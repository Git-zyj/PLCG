/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 = ((((((((arr_4 [i_0] [i_2]) && (arr_6 [22] [i_1] [i_1]))) ? ((var_7 ? 0 : var_8)) : -1))) ? (arr_7 [16] [i_1] [i_0]) : (((arr_3 [i_0] [i_1]) ? (arr_3 [i_1] [i_2]) : (arr_3 [i_1] [i_0])))));
                    var_14 = (max(var_14, (max(18956, -6387121499879524239))));
                }
            }
        }
    }
    var_15 = 26;
    var_16 = ((~((min((min(-18957, 18956)), (!0))))));
    #pragma endscop
}
