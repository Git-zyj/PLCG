/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((~(min((arr_0 [i_0]), (arr_3 [i_0] [i_0] [i_0]))))))));
                arr_4 [i_0] [i_1] = -1384671282;
                arr_5 [i_0] = (((((9832146319788033018 ? ((var_14 ? var_11 : var_3)) : ((((arr_0 [2]) || (arr_3 [i_0] [i_0] [3]))))))) ? 3036591867 : ((((((arr_3 [i_1] [i_1] [i_0]) ? 2 : (arr_2 [i_0])))) ? (arr_2 [i_1]) : var_5))));
            }
        }
    }
    var_16 = (min((((((var_9 ? var_7 : var_6))) ? (((var_14 ? var_4 : var_13))) : (min(9832146319788033007, var_10)))), var_7));
    #pragma endscop
}
