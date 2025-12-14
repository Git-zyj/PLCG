/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!var_13);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = ((!((max(((13 ? 13459658087331810071 : var_4)), ((min((arr_0 [9] [i_0]), (arr_0 [i_0] [i_1])))))))));
                var_18 |= ((-(arr_1 [i_0] [i_1])));
                var_19 -= (min((min((((1 ? (arr_3 [i_0]) : var_10))), (min((arr_0 [i_0] [i_1]), (arr_4 [i_0]))))), (arr_3 [i_0])));
            }
        }
    }
    var_20 = (max(var_20, (min(var_14, (min((var_12 % 4987085986377741545), (!var_15)))))));
    var_21 = var_10;
    #pragma endscop
}
