/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;
    var_20 = ((min(var_18, ((var_18 ? var_14 : 859485992)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] |= (min((17198766802690450150 ^ 1590112216), ((min((arr_6 [i_0] [i_0] [i_2]), 12857)))));
                    var_21 = min((((arr_6 [i_0] [i_0] [i_2]) ? (arr_0 [i_0] [i_0]) : ((max((arr_0 [i_0] [i_0]), (arr_3 [i_0] [i_1] [i_2])))))), ((var_13 ? (arr_1 [i_0 + 3]) : (arr_1 [i_0 + 3]))));
                }
            }
        }
    }
    #pragma endscop
}
