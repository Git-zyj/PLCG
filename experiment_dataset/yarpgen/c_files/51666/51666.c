/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, -4088063787367850981));
    var_12 = (((((((min(2044, 192))) ? (max(var_4, var_4)) : var_1))) ? -var_7 : 7158850228481792841));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0 - 2] [i_1] = ((16263935289243632653 ? 1 : 104));
                var_13 = (((arr_4 [i_0 + 1] [i_1]) ? (max(((-5359587804163253615 ? -105 : 11)), (arr_3 [i_0 - 1] [i_0 - 1]))) : ((((arr_0 [i_0 - 1]) ? -13 : (arr_0 [i_0 + 1]))))));
                var_14 = (arr_2 [i_0] [i_1]);
            }
        }
    }
    #pragma endscop
}
