/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 524287;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = (arr_3 [0] [i_0] [i_0]);
                var_22 = (13413790063076665743 | 2467661775);
                var_23 = (-2467661776 + (((arr_0 [i_0]) ? (((arr_0 [i_0]) - 0)) : (max(9861338168185951340, 374014016)))));
            }
        }
    }
    var_24 = (((15964610138952877100 ? var_5 : (((var_5 ? 12386 : 28132))))) * 4294967280);
    var_25 = (((((~(25085 != 0)))) | ((((28132 ? var_15 : 3508625467)) - var_19))));
    #pragma endscop
}
