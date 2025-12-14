/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -2854368675587589122;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 += ((((min((var_12 + var_1), ((2130170059 ? var_15 : 18349635615738023801))))) ? ((((((var_6 ? (arr_5 [i_0] [i_1] [i_2]) : 6792952967179614690))) ? (((!(arr_3 [i_2] [i_2])))) : (arr_3 [i_2] [i_1])))) : (arr_3 [i_2] [0])));
                    var_18 = (~97108457971527812);

                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        var_19 = arr_2 [i_0] [i_0];
                        arr_8 [11] [i_1] [i_2] [i_3] [i_0] [13] = ((((((((var_11 ? var_1 : (arr_4 [15] [i_1])))) ? (((arr_0 [i_0]) ? 9264085697641672083 : (arr_7 [i_0] [i_0] [i_2] [i_3]))) : (~18349635615738023830)))) ? -6338406788310304691 : ((((18349635615738023782 ? 288230367561777152 : 1065432229)) * (!8658654068736)))));
                        var_20 ^= (min(((8658654068736 == (arr_6 [i_1] [i_2] [i_1] [i_3] [i_1]))), (arr_4 [i_0] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_2] |= ((((1 / (arr_2 [i_0] [i_2]))) * (var_8 < var_13)));
                        var_21 -= var_12;
                        arr_12 [i_0] [i_0] [i_0] [i_4] [15] = ((var_9 ? (arr_7 [i_0] [i_0] [i_2] [i_0]) : (arr_5 [i_0] [i_0] [i_0])));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1] [i_0] [i_5] [i_0] = arr_10 [i_0] [i_2] [i_2] [i_6];
                                var_22 = var_11;
                                arr_21 [i_0] [i_1] [i_6] = (((((3209044377588697499 ? var_3 : (arr_2 [i_2] [i_0])))) || (arr_19 [19] [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
