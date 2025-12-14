/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = (((min((max((arr_1 [i_1] [i_1]), (arr_2 [20]))), ((((arr_5 [i_0] [i_1] [i_1]) < 16792780349748134336)))))) ? (((arr_6 [i_0 - 1] [i_0 + 1]) ? (arr_3 [i_0] [i_0]) : 16792780349748134336)) : ((((!6610360396097000536) || var_15))));
                var_18 -= (max(-3911110687731468925, (((var_9 ? (arr_1 [i_0 + 1] [i_0 - 1]) : var_6)))));
                arr_7 [i_0] [i_0] = ((((((min(var_11, var_10)) > (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1])))) != (!var_15)));
                var_19 = (min(var_19, ((max((((arr_6 [15] [i_0 - 1]) ^ (arr_6 [i_0] [i_0 + 1]))), (min((arr_6 [i_0] [i_0 + 1]), (arr_6 [19] [i_0 - 1]))))))));
                var_20 = (((arr_1 [i_0] [i_0]) ? (((var_11 << var_3) ? (arr_0 [i_0]) : (((arr_5 [i_0 + 1] [i_1] [i_0 + 1]) - 1297301855)))) : ((((((((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : var_15))) >= (arr_0 [i_0])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            {
                arr_14 [13] = (((~var_3) ? (arr_2 [i_3]) : ((min(10255487501472181798, (arr_9 [i_2]))))));
                arr_15 [i_2] [i_2] [13] = ((182 ? var_4 : (((arr_3 [i_2] [i_2]) ? (((4594 & (arr_4 [i_2] [i_2])))) : ((44238 ? 8191256572237369818 : var_12))))));
                var_21 = (max(((((((arr_13 [i_2] [i_3] [i_3]) & (arr_12 [i_3 - 1] [6])))) & var_12)), ((min((arr_4 [i_2] [i_2]), ((var_11 ? (arr_11 [i_2] [i_3]) : (arr_9 [9]))))))));
            }
        }
    }
    var_22 = (max(var_22, var_12));
    #pragma endscop
}
