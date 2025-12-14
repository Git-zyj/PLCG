/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((711153980 ? -711153979 : ((min((arr_2 [i_1]), (arr_2 [i_0]))))));
                var_18 |= (arr_3 [2] [i_1]);
            }
        }
    }
    var_19 = ((((~((var_8 ? var_14 : var_7))))) ? ((-((var_7 ? 3615975323 : var_16)))) : 2643679846);
    #pragma endscop
}
