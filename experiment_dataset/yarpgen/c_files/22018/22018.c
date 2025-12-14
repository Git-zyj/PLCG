/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((((!(!var_11))) || ((max(((max(239, var_10))), var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_21 ^= (((max(-6013165752217779942, var_17)) & (((16 >> (726145377 - 726145349))))));
                var_22 = (max((max((arr_1 [i_0]), (arr_1 [i_1]))), ((52653 ? (arr_1 [i_0]) : (arr_1 [i_0])))));
                arr_6 [i_1] = 239;
                arr_7 [i_0] [i_1] [i_1] = min((((arr_1 [i_1]) + (arr_1 [i_0]))), (((~-4) ? 0 : (arr_4 [i_1] [i_0] [i_0]))));
            }
        }
    }
    var_23 ^= var_1;
    var_24 &= (!((max(3378297395, var_10))));
    #pragma endscop
}
