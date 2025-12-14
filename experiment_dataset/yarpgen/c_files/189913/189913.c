/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((var_7 * (((((var_7 ? var_8 : var_9))) ? var_2 : (min(58, 2147483644)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [9] [i_0] [i_1] = (~((min(var_5, (arr_3 [i_1] [i_0] [i_1])))));
                arr_5 [i_1] = ((~(arr_2 [i_1 + 2] [i_1 + 2])));
                arr_6 [i_1] = ((-(min(-182546134, 13791228222244258574))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_9 [i_2] = (arr_8 [i_2]);
        var_11 = ((-7 || ((((((var_9 <= (arr_7 [i_2] [i_2])))) & (arr_7 [i_2] [i_2]))))));
        arr_10 [i_2] [i_2] = -var_8;
    }
    #pragma endscop
}
