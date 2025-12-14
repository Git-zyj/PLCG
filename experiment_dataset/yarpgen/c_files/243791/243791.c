/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((!((max(var_5, var_0)))))), (max(var_4, var_3))));
    var_14 = min(var_3, (((var_3 || var_8) ? (!var_4) : ((min(255, 65280))))));
    var_15 = ((((((!var_0) || (((65280 ? var_7 : var_7)))))) >> (var_0 - 14415936985316722292)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        var_16 = (arr_9 [i_0] [i_0] [i_0] [i_2] [i_2]);
                        var_17 = (max(var_17, ((((((!(arr_9 [i_0] [i_0] [3] [i_0] [i_0])))) >> (((var_1 & var_5) - 10366)))))));
                        arr_12 [i_0] [i_0] [i_0] [i_3 - 4] = 258;
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_2] = (min(-255, (--254)));
                        arr_16 [i_0] [i_0] [i_0] [5] [i_0] [i_4] |= (~(((arr_5 [i_0] [i_1]) >> (((arr_14 [i_1]) + 9159222070442725167)))));
                        var_18 = (max(var_18, ((((~(min(var_6, (arr_7 [2])))))))));
                        var_19 = (max(var_19, (((((((((-(arr_13 [i_0] [i_1] [9] [i_0])))) ? (arr_8 [i_4] [i_2] [i_1] [i_0]) : (!var_1)))) ? var_6 : ((((!((max(var_12, (arr_6 [4] [i_2] [4])))))))))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_20 [i_5] [i_5] [i_2] [i_1] [i_5] [i_0] = var_7;
                        var_20 = (min(var_20, (arr_2 [i_2])));
                    }
                    arr_21 [1] [i_1] [i_2] = ((-(max(-258, var_0))));
                    var_21 = (max(var_21, 65280));
                    arr_22 [i_0] [i_1] [i_1] = ((-((258 ? 65276 : 256))));
                }
            }
        }
    }
    var_22 = (max(var_22, (((!((min((min(65294, 65275)), (max(var_5, var_8))))))))));
    #pragma endscop
}
