/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-var_12 / (((((23991 ? var_4 : var_2))) ? (((var_5 ? var_11 : var_5))) : (max(3088801087542302057, var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((((((((-1609102245 ? (arr_2 [i_1] [i_1 - 4] [i_1]) : 2985618025902423376))) ? (((arr_1 [i_0] [i_1]) | var_3)) : var_6))) / (arr_2 [i_0] [i_1 - 3] [i_1])));
                var_14 = (((var_5 - var_0) / 44070));
                var_15 = (((arr_1 [12] [i_0]) ? (max((var_8 && 21466), ((var_11 ? var_1 : (arr_0 [i_1] [2]))))) : ((((((((arr_2 [i_0] [i_1 + 1] [i_1 + 1]) ? (arr_3 [i_0]) : (arr_2 [i_0] [i_1] [i_1])))) || (64 && var_5)))))));
            }
        }
    }
    #pragma endscop
}
