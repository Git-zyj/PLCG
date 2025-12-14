/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = (min((min((arr_2 [i_0] [i_1]), (min((arr_3 [i_1] [i_0]), (arr_4 [i_0 + 2] [i_0 + 2]))))), ((min(var_0, (arr_3 [1] [1]))))));
                arr_5 [i_1 + 1] [i_0] = (((((((((arr_0 [i_0]) ? var_6 : var_4))) > ((5953601494348312660 ? 5953601494348312660 : 1))))) < (arr_1 [i_1] [i_0 + 3])));
                var_17 = (min((arr_4 [i_0] [i_1]), ((min(1, var_14)))));
                var_18 -= (arr_4 [i_0] [i_0]);
            }
        }
    }
    var_19 = (((((var_4 + (var_0 + 1)))) ? ((32 ? ((-5953601494348312660 ? 523845271 : 5953601494348312669)) : (((min(var_1, 15846)))))) : ((((var_3 / 1056940246081051918) ? var_14 : var_0)))));
    #pragma endscop
}
