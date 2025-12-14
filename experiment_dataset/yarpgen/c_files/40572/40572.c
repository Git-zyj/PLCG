/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_10 = ((((((((0 / (arr_1 [i_1])))) / (min(7663746737078845781, 5512273848546279124))))) && var_7));
                var_11 *= ((-((((max((arr_3 [18] [i_1] [i_0]), 72057594037403648)) > (min(562949953421311, (arr_1 [18]))))))));
                var_12 -= ((((-2 && 562949953421311) ? (3866425750 && -8721) : -64)));
            }
        }
    }
    var_13 = (((((var_5 == var_8) ? var_2 : var_1)) >= ((((min(var_4, var_8)) != -0)))));
    var_14 = (max(var_1, ((-((min(var_1, var_3)))))));
    var_15 = var_0;
    var_16 |= (min((max((min(72057594037403642, 8737)), (var_5 > 8))), var_2));
    #pragma endscop
}
