/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((1355316602 ? 3470169520429814227 : 100))) ? ((min((!9223372036854775807), var_12))) : var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 |= ((((((arr_4 [i_2 + 1] [i_1] [6]) ? (arr_6 [i_0] [i_1] [15]) : (arr_6 [i_1] [i_2] [i_2])))) ? (((arr_4 [i_2] [i_1] [i_2]) ? ((max((arr_5 [i_0] [i_1] [i_2 + 1]), -114))) : var_13)) : var_2));
                    var_16 = (max(var_16, 1));
                    var_17 = (!-184759706);
                    var_18 *= ((((!(!var_0))) ? (!0) : (((arr_6 [i_1] [i_2] [i_2 + 3]) ? (arr_4 [i_2 + 3] [i_2 + 3] [i_0]) : ((918095502 ? var_11 : (arr_6 [i_0] [i_0] [3])))))));
                }
            }
        }
    }
    #pragma endscop
}
