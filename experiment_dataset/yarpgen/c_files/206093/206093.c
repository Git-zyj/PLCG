/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            {
                var_15 = (((arr_3 [i_1] [i_0]) ? (((!(3967748729 + 3967748735)))) : ((var_4 ^ (arr_2 [i_0 - 1])))));
                var_16 = ((((-(((arr_3 [i_0] [2]) & 327218560))))) ? (((((1 ? 1 : var_14))) ? (arr_3 [i_0] [i_0]) : (((-8866925098489950868 ? (arr_4 [i_0] [i_1] [i_1 + 4]) : var_3))))) : (((~var_1) ? (((arr_2 [i_1]) ? var_11 : (arr_1 [4]))) : 1)));
                var_17 = ((((((((~(arr_0 [i_1])))) ? ((var_11 - (arr_4 [i_1] [i_1] [i_0]))) : 327218583))) ? (!112) : ((~((1 ? 3967748712 : 12))))));
                var_18 = (max(65528, ((80145683 ? 3967748711 : (var_6 - 16208969973006938492)))));
                arr_5 [7] = ((~((~(arr_1 [i_0 + 1])))));
            }
        }
    }
    var_19 = ((((((var_5 ? var_11 : var_9)) != var_14)) ? -var_0 : ((~((var_10 ? var_5 : var_8))))));
    var_20 = (var_14 && var_9);
    var_21 = ((var_0 ? ((1669401723 ? 3967748709 : var_14)) : var_2));
    var_22 = (((((!var_6) ? (4611404543450677248 & -1675266851) : (!13347741710922331095)))) ? (((var_2 >= ((var_7 ? var_0 : 0))))) : var_1);
    #pragma endscop
}
