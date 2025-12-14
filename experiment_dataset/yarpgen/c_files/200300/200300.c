/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (((((var_0 ? var_0 : var_0)))) || var_8);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 + 2] = ((!((max((0 + 1), var_7)))));
                var_12 = 0;
                var_13 += ((((min((min((arr_2 [i_0]), 0)), (max((arr_1 [i_1]), (arr_3 [i_1] [i_0 + 2] [i_1 + 1])))))) ? (((-486597113 ? 5327106701735720624 : -21440))) : (max(var_5, (arr_4 [i_1] [i_0 + 2])))));
                var_14 = ((-19225 ? 1 : -3182723784361178759));
            }
        }
    }
    var_15 = var_9;
    #pragma endscop
}
