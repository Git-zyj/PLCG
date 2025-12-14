/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_16 -= (min(((((-(arr_4 [9] [i_1]))))), (min((~0), (min(var_13, 2969349252))))));
                var_17 += (-((((min(var_2, var_3))) ? (min((arr_0 [i_1]), var_15)) : (((-14657 ? 0 : (arr_1 [3] [i_1])))))));
                var_18 ^= (max((((((-(arr_0 [i_1 + 2])))) ? -1048509218 : ((~(arr_1 [i_0] [i_1 - 1]))))), ((-((4096 ? var_8 : var_0))))));
                var_19 = (min(var_19, (((-((((max((arr_3 [i_1 + 3] [i_0]), -1048509219))) ? ((((arr_2 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_5 [i_0] [9])))) : (((arr_2 [i_0]) ? var_14 : 1908886333)))))))));
                arr_6 [i_0] &= ((((max(((((arr_1 [i_0] [7]) ? var_2 : (arr_1 [14] [5])))), ((-(arr_4 [i_0] [i_0])))))) ? ((((((1048509217 ? 0 : -7943886541540441908))) ? ((max((arr_2 [i_0]), 2))) : ((~(arr_1 [i_0] [i_1])))))) : (max(1705478171, 1701541417))));
            }
        }
    }
    var_20 = (max((((-31124 ? 1908886333 : var_0))), (((!(!var_13))))));
    #pragma endscop
}
