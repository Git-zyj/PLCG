/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((var_7 == (min(((var_9 ? var_2 : var_5)), ((max(3285009053, var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (max((((3567912121 / var_2) ? (max(var_9, 8643579744726009212)) : 1009958234)), (min((((arr_3 [i_1] [i_0] [i_1]) ? (arr_0 [i_0]) : var_4)), 0))));
                var_12 = (min(((max((max((arr_2 [i_0] [i_0] [i_0]), var_1)), 65509))), (max(((var_5 ? 3884694830 : (arr_0 [i_1]))), (arr_1 [i_0] [i_1])))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_13 = ((4 * (arr_1 [i_2] [i_2])));
        arr_7 [3] [i_2] = (((((arr_1 [i_2] [i_2]) ? var_4 : (arr_0 [i_2])))) ? (arr_5 [i_2]) : 4294967280);
    }
    var_14 = (min(var_14, (((((max((max(var_7, var_7)), (var_4 || -20526)))) >> (((var_1 % var_0) & (var_9 / var_4))))))));
    #pragma endscop
}
