/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (-(min((var_3 > var_1), var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [11] [i_1 - 3] [i_1] = ((~(min((((arr_2 [i_0]) + 18515)), (min(var_2, (arr_0 [10])))))));
                var_13 += ((((max((min(var_0, 0)), (((1 && (arr_0 [i_0]))))))) || (((((((arr_4 [12] [6] [i_0]) ? (arr_4 [i_1 - 2] [i_0] [i_0]) : var_3))) ? (arr_0 [i_0]) : (arr_1 [i_1 + 1]))))));
                var_14 = (max(var_14, var_11));
            }
        }
    }
    #pragma endscop
}
