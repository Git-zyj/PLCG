/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_6 [8] [8] [i_2] = ((((max((arr_1 [i_0]), ((60 >> (-2147483645 - -2147483646)))))) ? (min((min(1, 4290772992)), (((var_5 ? var_8 : (arr_2 [i_0])))))) : ((min(2147483645, (var_3 ^ var_3))))));
                    var_16 = ((1 * (((!(arr_5 [i_0]))))));
                }
            }
        }
    }
    var_17 = (min(-1, -2147483647));
    #pragma endscop
}
