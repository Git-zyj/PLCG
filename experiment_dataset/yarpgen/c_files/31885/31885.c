/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((((-1849611559 ? 1861640059 : 221))) ? (var_8 ^ var_1) : 1849611542))) ? (((max((var_14 && var_1), (var_11 >= var_10))))) : (max(var_17, ((0 ? var_15 : var_17))))));
    var_20 = (var_6 || var_17);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = (arr_2 [i_0] [i_0]);
                arr_6 [1] = 0;
            }
        }
    }
    var_21 &= (var_16 < var_7);
    var_22 |= var_1;
    #pragma endscop
}
