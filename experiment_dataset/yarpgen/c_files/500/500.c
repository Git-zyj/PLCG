/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((((((-4796699733741557934 ? var_4 : var_8))) ? var_7 : (max(var_17, 193))))), var_2));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 |= (((((max((arr_1 [i_1]), (arr_1 [i_0]))))) ? ((246 ? ((max((arr_0 [i_1]), var_11))) : (((arr_2 [3] [i_0]) ? 2010370159 : (arr_2 [7] [i_0]))))) : ((((((2010370159 ? 14937 : 2010370159)) < (((!(arr_1 [i_1]))))))))));
                arr_4 [i_0] [16] [i_0] = -2974013410996966102;
                var_21 = (max(var_21, ((((((-(arr_2 [i_0] [2])))) * ((max((min(14937, -4796699733741557934)), (arr_1 [i_1])))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_22 ^= ((((1538992308079901793 ? (arr_11 [i_4]) : 1))) ? ((((arr_11 [i_2]) > (arr_11 [i_3])))) : 1);
                    arr_12 [i_2] [i_2] [12] [i_4] = (arr_10 [7]);
                    arr_13 [i_3] [i_3] [i_2] |= (~(((((min(1, 1)))) | (~7632935156323040604))));
                    var_23 -= 0;
                    arr_14 [i_2] = (arr_5 [7]);
                }
            }
        }
    }
    var_24 *= (((((var_8 == var_2) ? (1912 >= var_15) : ((var_11 ? var_17 : var_7)))) - (((((1 ? 1 : 482890827)) > (!0))))));
    #pragma endscop
}
