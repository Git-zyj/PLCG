/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_11 = (((((var_5 ? ((-(arr_4 [i_1] [i_0]))) : (arr_3 [i_0] [i_0])))) ? (arr_3 [i_1] [i_0]) : ((((min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0])))) ? (((min(var_10, (arr_2 [i_0] [i_1]))))) : (arr_4 [i_0] [i_0])))));
                arr_5 [i_0] [i_0] [i_0] = (min(((67 ? ((-4096526649844459734 ? (arr_0 [i_0]) : 254)) : (((-(arr_3 [i_0] [i_1])))))), (((-(arr_2 [i_1] [i_0]))))));
            }
        }
    }
    var_12 = (max(var_3, ((var_0 ? var_6 : var_9))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {
            {
                arr_13 [i_3] &= var_0;
                arr_14 [i_2] [i_2] = (arr_12 [i_2 + 1] [i_2 + 1] [i_3 - 1]);
                arr_15 [i_2] [i_2] [i_2] = var_2;
                var_13 -= ((((((((70368744177663 % (arr_9 [i_3])))) ? (1429312457660829375 && var_8) : (arr_7 [i_2 + 3])))) < (max((14368747469838125348 + 4751992355062070592), (2602841688034113306 - 0)))));
            }
        }
    }
    #pragma endscop
}
