/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((min(3557097645011944240, (4669648404793632687 + 1))), var_7));
    var_17 = (((!var_5) << (var_2 && var_5)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = ((arr_5 [i_0] [i_0] [i_1] [i_2]) ? (max((var_9 ^ var_4), (arr_4 [i_2]))) : 1);
                    var_19 &= (max((max((arr_6 [i_0] [i_1] [i_2]), (arr_6 [i_0] [i_1] [i_2]))), (max(((var_11 ? (arr_1 [i_0]) : (arr_0 [i_0]))), -2102117769272719557))));
                }
            }
        }
    }
    var_20 = ((((var_3 ? (var_9 ^ var_7) : (((var_8 ? 1 : var_8)))))) ? var_10 : 1);
    #pragma endscop
}
