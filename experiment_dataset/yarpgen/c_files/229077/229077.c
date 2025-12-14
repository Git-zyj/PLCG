/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = -23;
                arr_5 [i_0] [i_1] [i_1] = (arr_2 [i_0]);
            }
        }
    }
    var_19 = (max(((5113 ? 549755813376 : var_12)), ((((var_2 ? var_10 : 23))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_3 + 3] [i_3 + 1] = 1;
                var_20 = ((+((var_10 ? ((max((arr_8 [i_3 - 1]), -23))) : (var_5 != var_6)))));
                arr_14 [i_2] [i_2] = (((((var_11 ? (arr_10 [i_2] [i_2]) : (arr_10 [i_2] [i_3])))) ? (((max((arr_11 [i_2] [i_2] [i_2]), (arr_9 [i_3 + 2] [i_3 + 2]))))) : ((var_1 * (arr_7 [i_3])))));
                var_21 = 1;
            }
        }
    }
    var_22 = var_3;
    #pragma endscop
}
