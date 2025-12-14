/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_19 -= 32768;
                var_20 = (max(var_20, (((var_18 ? (((7194031741516900595 & (arr_2 [i_1 + 3] [i_1 + 3])))) : (min(((var_13 ? 0 : var_8)), (arr_0 [i_1 + 2] [i_1 + 3]))))))));
            }
        }
    }
    var_21 = (max(var_21, var_15));
    var_22 = (((min(var_12, var_18))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_12 [i_2] [i_3] [i_3] [i_3] = (12722 ^ 3770768118);
                    arr_13 [i_2] [4] [i_3] [i_4] = ((((((min((arr_2 [i_3] [8]), var_7))) & ((941865090 ? 52813 : (arr_9 [i_2] [i_2] [i_4])))))) + (max((arr_7 [i_2]), (var_1 < 6144))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                arr_19 [i_5] [9] [17] = (min(((min((11240 || var_6), 0))), (((arr_18 [i_5 + 2]) ? 5079 : (arr_18 [i_5 + 2])))));
                var_23 = (((((arr_5 [i_5 - 1]) ? (arr_16 [i_5] [i_6]) : var_4)) ^ ((((-5079 ? var_16 : (arr_11 [i_5 + 1])))))));
                var_24 = ((((min(var_17, 274877906943))) ? ((max(var_2, 4018478201))) : (arr_5 [i_5 + 1])));
            }
        }
    }
    #pragma endscop
}
