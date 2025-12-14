/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_3, var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [21] [21] [i_1] &= (max(29855, (arr_1 [i_0] [i_1])));
                arr_6 [i_0] = 29855;
            }
        }
    }
    var_15 = (min((31820 * 4294967295), ((min(var_0, (!var_10))))));
    #pragma endscop
}
