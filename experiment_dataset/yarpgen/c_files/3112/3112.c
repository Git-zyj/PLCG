/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((((var_1 ? 25789 : 25789)) << (var_4 - 4579)))), (max(var_5, 255))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_1] = ((!((max(44579, (!39746))))));
                    arr_9 [i_1] [i_1] [i_2] [i_1] = ((arr_7 [i_2] [i_1]) ? var_0 : ((~(~39746))));
                    arr_10 [i_1] [i_0] [i_0] [i_1] = ((((min((var_1 / 14), (((~(arr_2 [i_0]))))))) ? ((((((-(arr_0 [i_0])))) ? (arr_2 [i_0]) : (((!(arr_1 [i_2] [i_1]))))))) : (min(-255, var_2))));
                }
            }
        }
    }
    var_15 = ((-(((((var_6 ? var_4 : var_2))) ? -11463626616608928323 : (var_9 + var_12)))));
    var_16 = ((((min((var_0 / 102), (var_10 | var_11)))) ? (max((((var_9 ? 39746 : var_12))), ((var_13 ? var_12 : var_1)))) : var_8));
    #pragma endscop
}
