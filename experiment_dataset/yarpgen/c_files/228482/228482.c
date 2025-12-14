/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((min(var_11, var_1)))));
    var_16 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (arr_1 [i_0] [i_1])));
                arr_5 [i_0 + 2] [i_1] [i_0] = ((((((min(8823150351103269676, (arr_1 [i_0] [i_0]))) >> (((((arr_2 [i_0]) ? 12067 : 12067)) - 12032))))) ? ((((151 > ((154 ? 12067 : var_6)))))) : (((arr_0 [i_0 + 2]) ? var_3 : (arr_0 [i_0 + 1])))));
                var_18 = (((((arr_2 [i_0]) ? (((-(arr_3 [i_0 - 1] [i_1])))) : (3604026517798436934 * var_13))) | (((~(arr_2 [i_0 - 1]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_19 = 12067;
                    arr_15 [i_2] [i_4] = ((5649047088128591924 ? (var_10 && 148) : 5649047088128591924));
                }
            }
        }
    }
    #pragma endscop
}
