/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = (arr_3 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_13 = (max(((((((arr_6 [i_2] [i_2] [i_0] [i_0]) ? 323357841 : (arr_2 [i_0])))) ? (((-2147483647 - 1) ? var_3 : (arr_1 [0] [1]))) : ((((arr_1 [i_0] [2]) ? (arr_0 [i_2]) : (arr_3 [i_2])))))), ((((arr_8 [11] [i_1] [i_2] [i_3]) || 0)))));
                            arr_10 [i_1] [i_3] [11] = -8637594600695077116;
                            var_14 = (((arr_4 [i_0] [i_0]) ^ (((3971609456 ? (arr_6 [i_0] [11] [i_2 + 1] [i_2 + 1]) : 1104153732)))));
                            var_15 = ((-(((arr_8 [i_2 - 1] [i_3 + 1] [i_3 + 1] [i_3]) ? 323357841 : (arr_8 [i_0] [i_3 + 1] [i_3] [i_3])))));
                        }
                    }
                }
            }
        }
    }
    var_16 = (((((var_2 ? 210 : (255 < var_10)))) ? 323357815 : var_3));
    var_17 = ((1 >> (((min((((var_8 ? 44 : var_0))), (max(var_9, 4179276323)))) - 24))));
    var_18 = ((3971609480 ? (min(((var_5 ? var_5 : 33)), var_1)) : (((min((0 >= var_9), var_7))))));
    #pragma endscop
}
