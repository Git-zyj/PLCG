/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_2, -var_18));
    var_20 = (!var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    var_21 = max(((((arr_3 [i_0] [i_1]) >= var_5))), (min(var_10, (arr_8 [1] [i_1] [i_0] [i_0]))));
                    arr_9 [1] [1] [i_2] = ((((max(var_7, (arr_5 [i_2] [i_2 + 1])))) ? -var_10 : (arr_6 [i_0] [i_1] [i_2])));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_22 = (max(var_22, (((-(((!-1667814514) ? (!-5793617417831591653) : 1)))))));
                    var_23 = (max(var_23, ((((!(arr_2 [8] [i_1])))))));
                    var_24 = (min(var_24, ((min((14844 / 1), var_13)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_25 &= (max(3904242116, ((12401185726980651501 ? 3942535633433759604 : 1))));
                                arr_17 [5] [i_1] [i_3] [i_3] [i_5] [i_5] = var_16;
                                var_26 = ((!(((var_11 ^ (arr_11 [i_5 + 2] [i_5] [i_5] [i_5 + 1]))))));
                            }
                        }
                    }
                    var_27 |= ((-(min((((arr_1 [i_0]) | var_3)), (5117428020964869846 != var_2)))));
                }
                var_28 = (min(var_28, ((var_15 ? var_1 : var_11))));
                var_29 = (((((-(arr_6 [i_0] [i_1] [i_1])))) * (max(-var_8, ((((arr_14 [i_0]) ^ var_13)))))));
            }
        }
    }
    #pragma endscop
}
