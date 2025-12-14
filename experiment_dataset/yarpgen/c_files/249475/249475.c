/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (((arr_0 [i_0] [i_1]) ? ((((arr_2 [i_0]) << (arr_4 [i_0] [i_0] [i_1])))) : (arr_1 [i_0] [i_1])));
                var_20 = (min(var_20, (max(134217727, -62914560))));
                var_21 += ((arr_0 [i_0] [i_1]) ? (((4232052735 << (((arr_1 [i_0] [i_1]) - 5855783340357244850))))) : (arr_1 [i_0] [14]));
                var_22 = ((((var_5 << (arr_2 [i_0]))) << ((max((arr_2 [i_0]), (arr_2 [i_0]))))));
            }
        }
    }
    var_23 = ((!(((var_6 ? var_9 : var_1)))));
    var_24 = (min(var_24, var_3));
    #pragma endscop
}
