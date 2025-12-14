/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_6 % var_14) == (max(1025902225, -5)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [18] = ((-(arr_0 [i_0] [i_0])));
        var_16 = (arr_0 [i_0] [i_0]);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            {
                var_17 = (max(((((((-(arr_3 [i_2])))) ? (max((arr_8 [1] [1]), -1481554447)) : -3))), ((-20978 ? 88 : 4294967295))));
                arr_9 [i_2] = -17609;
                var_18 *= var_6;
                var_19 = (((((30550 ? var_0 : ((64084 ? (arr_7 [i_1] [i_2] [i_1]) : 49520))))) ? (arr_0 [i_1] [1]) : (((3 ? -1925487648080325299 : (arr_7 [i_1] [i_2] [i_2]))))));
            }
        }
    }
    var_20 = (min(((-var_14 ? (((var_12 ? var_9 : var_13))) : (~var_2))), var_11));
    #pragma endscop
}
