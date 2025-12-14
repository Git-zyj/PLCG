/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_4 ^ (min((((3351684 ? var_8 : var_4))), 4291615616))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = ((max(((((arr_1 [i_0]) > (arr_3 [i_0] [i_1] [i_0])))), (arr_0 [i_0 + 1]))));
                    arr_7 [i_0] [0] [i_0] [i_0] = (arr_1 [i_0]);
                    var_14 ^= (arr_6 [i_0] [i_0 + 1]);
                    var_15 -= (((((max((arr_4 [12] [2]), (min((arr_0 [i_0]), (arr_5 [i_0] [12]))))))) >= ((177 ? (arr_3 [i_1] [i_1 + 1] [2]) : (arr_3 [i_0 + 1] [i_1 + 1] [12])))));
                }
            }
        }
    }
    var_16 = (min((~var_11), (((var_5 | 4291615612) ? (var_9 & 4291615632) : ((1 ? var_5 : 4291615636))))));
    #pragma endscop
}
