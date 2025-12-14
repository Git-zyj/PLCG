/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [8] [i_1 + 2] [i_1 + 2] = (arr_3 [i_1] [i_0]);
                var_12 = ((!(((3943812507 ? 163432624 : (-127 - 1))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            {
                var_13 &= ((-(((arr_7 [i_2]) ^ -1))));
                var_14 = (((((var_6 / (arr_9 [i_2] [i_3 + 1] [i_3])))) ? var_3 : var_2));
            }
        }
    }
    var_15 = (min(var_15, -1));
    var_16 = ((((min(var_3, var_0))) ? (((((-4412218881053568335 ? 2747092365 : var_8))) ? (!var_1) : var_4)) : (-1 / 3199739816)));
    #pragma endscop
}
