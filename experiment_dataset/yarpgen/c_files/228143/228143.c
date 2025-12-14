/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((((((0 >= (arr_0 [i_1] [i_1 + 2]))))) <= (arr_0 [i_0] [i_1 + 1])));
                    arr_9 [i_0] [i_1] [i_1] = ((((var_8 >= (arr_6 [i_1 - 2] [i_1 + 1]))) ? (min(-1720978081, 3504322353)) : (var_8 / 3161591667)));
                }
            }
        }
    }
    var_14 = (max((((54900 | (9500614174876581986 < 0)))), (((1133375628 < var_6) % (~var_2)))));

    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_15 = ((~(arr_11 [i_3])));
        arr_14 [i_3] = ((54900 ? (((arr_5 [i_3]) ? (arr_5 [i_3]) : (arr_5 [i_3]))) : ((((((var_0 ? var_4 : 54911)) != var_4))))));
        var_16 = (max(var_16, ((max(((min(var_3, (arr_4 [i_3] [i_3])))), ((max(var_11, var_3))))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_17 = ((1133375648 > (arr_16 [i_4])));
        arr_17 [i_4] [i_4] = var_7;
    }
    var_18 = var_2;
    #pragma endscop
}
