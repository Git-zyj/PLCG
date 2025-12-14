/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((0 ? var_0 : var_11))) ? (var_13 + var_9) : var_13)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 += (((((var_9 / (arr_4 [14] [i_1] [i_0])))) >= (((min(var_12, 732210572044457184)) + ((((arr_3 [6] [i_0] [i_0]) ? (arr_0 [i_1]) : (arr_0 [i_1]))))))));
                arr_5 [i_0] |= (max(((((arr_2 [i_1] [i_0]) || (arr_3 [i_0] [i_1] [i_1])))), (max((((arr_4 [i_0] [i_0] [17]) ? 31 : (arr_0 [i_0]))), (arr_2 [i_0] [i_0])))));
                arr_6 [i_1] [i_1] = ((((((arr_2 [i_0] [i_1]) ? (arr_2 [i_0] [19]) : (arr_2 [i_0] [i_1])))) && (((~(arr_2 [i_1] [i_0]))))));
                arr_7 [14] [i_0] = ((((55042 ? (arr_1 [1]) : -34))) < (max(4597310274718952421, (arr_1 [i_1]))));
                var_16 = (((((1 ? (((1 ? -33 : var_1))) : (max(65535, var_6))))) ? (((arr_0 [i_1]) ? var_9 : var_0)) : 18446744073709551615));
            }
        }
    }
    #pragma endscop
}
