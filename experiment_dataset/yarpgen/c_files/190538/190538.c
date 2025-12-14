/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_4;
    var_13 = 1061246161;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = 1061246161;
                arr_4 [i_0] [i_0 + 1] [i_0] = ((((arr_0 [i_0 - 3]) << (((arr_0 [i_0 - 1]) - 4092420226)))) >> (((((arr_0 [i_0 + 1]) | 32764)) - 4092428260)));
            }
        }
    }
    var_15 *= var_7;
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                var_16 *= (((min((1061246182 / 3702925598), (arr_1 [i_2 - 1]))) & (((144 << (arr_3 [i_2 + 1]))))));
                var_17 = (min(var_17, ((((max((arr_6 [i_3] [i_3]), (arr_6 [i_3] [i_3]))) || (((arr_6 [i_3] [i_3]) || (arr_6 [i_3] [i_3]))))))));
                var_18 = (i_2 % 2 == 0) ? (((-(((arr_1 [i_2 - 1]) / (arr_6 [i_2] [i_2 - 2])))))) : (((-(((arr_1 [i_2 - 1]) * (arr_6 [i_2] [i_2 - 2]))))));
                var_19 *= (~((4191316936 | (~1))));
            }
        }
    }
    #pragma endscop
}
