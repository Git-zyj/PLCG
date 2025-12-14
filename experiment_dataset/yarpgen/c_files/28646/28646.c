/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((!(((var_4 ? -6090562348112872588 : var_15))))));
    var_19 = (min((((((var_2 ? var_11 : var_1))) ? var_6 : (min(var_5, var_7)))), 2311903418731090483));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 += ((((var_9 ? (-32767 - 1) : var_7))));
                    arr_7 [i_2 - 1] [i_1] = (min(((var_6 ? var_14 : ((18446744073709551614 ? (arr_2 [i_0]) : var_7)))), (arr_0 [i_1 + 3])));
                    var_21 = (min((((((((arr_0 [i_1]) ? var_11 : (arr_5 [i_0])))) || -32736))), (((((~(arr_5 [i_2 - 1])))) ? (arr_6 [i_0] [i_1 - 1] [i_1 + 1]) : (((var_9 ? var_14 : (arr_1 [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [i_2 - 2] [3] [i_4] [i_2 - 2] [i_2] = (arr_3 [i_0] [i_0]);
                                arr_13 [i_2 - 1] [i_1 + 1] [i_4] [i_0] [i_4] = (max(var_7, (min((arr_5 [i_1 + 3]), ((16134840654978461151 ? 2311903418731090468 : 255))))));
                                var_22 = (-32764 ? (min(17996806323437568, (((var_11 ? (arr_10 [i_0] [i_1 - 1] [i_1 - 1]) : (arr_8 [i_1] [10] [i_1] [i_1 + 1])))))) : ((((arr_0 [i_2 - 2]) ? var_7 : var_7))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] = ((~var_1) * ((((((799194787067879085 ? (arr_3 [4] [4]) : var_14))) ? (arr_10 [i_4 + 1] [i_4 - 2] [i_4 - 2]) : (arr_1 [i_1 + 1])))));
                                arr_15 [i_2 - 2] [i_2] [i_2 + 1] [i_2 - 2] [10] [i_2] |= (((arr_11 [i_0] [5] [i_4 - 1] [i_0]) | ((min((min((arr_6 [i_0] [i_1 + 1] [i_1 + 1]), var_3)), (arr_8 [i_4] [i_3] [i_2 - 2] [i_1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (min(var_6, (((((max(255, 55680)))) & 0))));
    var_24 = (!16134840654978461132);
    #pragma endscop
}
