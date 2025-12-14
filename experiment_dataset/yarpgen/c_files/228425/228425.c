/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = (min((((4294967295 ^ 1) << (((((arr_1 [i_1]) ? var_15 : (arr_1 [i_0]))) + 5857697883579416321)))), (((min(3417862810, 252)) + (arr_2 [1] [1] [3])))));
                var_17 = ((!((((arr_3 [i_0] [i_1]) + 7)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            {
                var_18 -= 52716;
                arr_11 [i_2] = var_8;
                arr_12 [i_2] [i_3] = ((((max(var_15, 254))) ? (max((((arr_10 [i_2] [i_2]) ? 627002865 : 10212838633217992620)), ((min((arr_9 [2] [i_3] [i_3]), var_5))))) : (((((arr_6 [i_3 + 1]) <= 20))))));
                var_19 = ((((((arr_10 [i_2] [i_3 + 1]) | (arr_7 [i_3 + 1])))) != (arr_9 [i_2] [i_2] [i_3 + 1])));
                var_20 = ((((~(arr_7 [i_2]))) > ((-(arr_10 [i_3 + 1] [i_3 + 1])))));
            }
        }
    }
    var_21 = ((((var_14 << (var_11 - 13171))) * (((!(var_13 + 326072857))))));
    #pragma endscop
}
