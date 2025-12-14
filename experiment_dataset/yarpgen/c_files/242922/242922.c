/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((1 ? 65529 : -1264594900));
    var_17 = (((((1264594909 ? 1 : (-1 - 0)))) ? ((1 ? 65523 : var_12)) : 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (((arr_6 [i_0] [i_0] [i_1]) > (max((((723386669 < (arr_2 [i_0])))), (272206837 - 65535)))));
                var_18 = (!6);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_19 = (max(((~(arr_9 [i_0] [i_2] [i_3]))), (((var_11 > (arr_2 [i_0]))))));
                            var_20 = (((var_13 | 1023) > (~1)));
                            arr_14 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] = (max(((((arr_5 [i_0] [i_1]) + var_8))), (571134241 | 0)));
                        }
                    }
                }
                var_21 = (max(var_21, (((((min((arr_11 [i_1] [i_1] [i_1] [i_0]), (arr_11 [i_0] [18] [i_0] [i_0])))) >> ((((52 ? var_6 : var_3)) - 1686082386)))))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_22 *= ((((140 ? 27 : 53962))) ? (min(0, (arr_8 [i_4 + 1] [i_4] [i_5 - 3]))) : (((arr_8 [i_4 + 1] [11] [i_5 + 1]) / (arr_8 [i_4 - 1] [i_4 - 1] [i_5 + 2]))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((0 ? ((max(-27528, (arr_8 [i_0] [0] [i_4 - 1])))) : (min(var_8, (arr_1 [i_0])))));
                            arr_20 [i_0] [i_0] [i_0] [i_5] = ((var_1 >> (63 - 39)));
                            arr_21 [i_1] = ((!(var_3 & var_10)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
