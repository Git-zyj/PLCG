/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 *= ((+((((var_14 * 518520756) >= (~9839))))));
        var_20 = (((((18014398509481983 ? ((var_0 ? 2604573689 : (arr_0 [6] [i_0]))) : (arr_1 [0] [0])))) ? var_1 : var_2));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        arr_4 [i_1] = (((((arr_2 [i_1 - 2]) ? var_11 : (arr_2 [i_1 + 4]))) + -183));
        arr_5 [2] = (var_8 ? ((-(min(11, (arr_2 [i_1]))))) : 23);
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                arr_12 [i_2] = (((-11503 ? ((var_4 ? 6646129034482150927 : (arr_7 [i_2] [i_2])) : var_15))));
                var_21 = (~var_13);
            }
        }
    }
    #pragma endscop
}
