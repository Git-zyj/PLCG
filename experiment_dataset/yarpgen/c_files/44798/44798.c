/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_5, (max(var_4, var_6))));
    var_12 += var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_13 |= 252;
                arr_5 [i_1] [i_1] = ((((((arr_3 [i_1] [i_1]) ^ (~var_5)))) ? (((arr_1 [8] [i_1]) ^ (((~(arr_0 [i_0])))))) : (((~-1282338158) ? (((arr_1 [i_1] [i_0]) | var_6)) : 2277733661126202863))));
            }
        }
    }
    var_14 = var_8;
    var_15 = min(((2277733661126202879 ? var_6 : var_8)), var_2);
    #pragma endscop
}
