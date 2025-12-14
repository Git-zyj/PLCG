/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(0, (((((61642 ? 11103 : 6979))) ? var_3 : 655686383793544019))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 &= (((arr_5 [i_0] [i_1]) > (arr_5 [i_0] [i_0])));
                    var_18 = (((((arr_0 [i_0]) && (arr_0 [i_0]))) ? 2147483647 : (max((arr_6 [i_0] [i_1] [i_2]), (max(var_1, (arr_0 [i_0])))))));
                }
            }
        }
    }
    #pragma endscop
}
