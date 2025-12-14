/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_15 = ((((!((!(arr_1 [i_1] [i_1]))))) ? ((var_0 ^ ((var_3 ^ (arr_10 [i_3] [i_1] [i_1] [10] [i_1] [11]))))) : (((((var_6 ? var_14 : (arr_5 [i_0] [i_0] [i_0] [i_0])))) ? ((max((arr_8 [i_0] [i_0] [i_0]), 102))) : ((max(var_8, (arr_2 [i_3]))))))));
                            arr_12 [i_0] [i_0] [i_0] = (((((min(17364932192260268707, -22056)))) ? ((min((((arr_5 [i_3] [i_0] [i_0] [15]) ? (arr_9 [i_2]) : 0)), -var_4))) : (arr_1 [i_0] [i_0])));
                            arr_13 [i_0] [i_0] [i_0] [i_0] = ((((((((var_12 ? var_12 : var_6))) ? var_12 : (arr_7 [i_0] [i_1] [1] [i_0 + 1])))) ? var_0 : ((var_0 ? (max((arr_2 [i_3]), var_11)) : 157))));
                            var_16 = ((((max((arr_8 [i_0 + 1] [i_0 + 1] [i_0]), (arr_8 [i_0 - 1] [i_0 + 1] [i_1])))) ? ((-(arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : ((6836881509386002776 ? (arr_8 [i_0 - 1] [i_0 + 1] [i_0 + 1]) : (arr_8 [i_0 - 1] [i_0 + 1] [i_1])))));
                            arr_14 [i_0] [i_1] [i_2] = ((((((((1106892981 ? var_2 : var_3))) ? (max(1106892981, var_0)) : (arr_2 [i_2])))) ? ((((max(18081185217614757071, (arr_2 [i_0])))) ? ((max(var_3, var_6))) : ((0 ? (arr_8 [i_1] [i_1] [i_1]) : -127)))) : (((!(var_12 ^ var_11))))));
                        }
                    }
                }
                var_17 = (max(var_13, (((var_9 > var_11) ? var_11 : var_14))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                var_18 = ((+(max((((arr_4 [i_4] [i_4] [i_4]) << (((arr_4 [i_4] [i_4] [i_5]) - 6830190117107891844)))), (~var_3)))));
                arr_20 [i_5] |= (((~18081185217614757071) ? (arr_0 [i_5]) : ((min(139, 200)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            {
                var_19 = (max(var_19, var_3));
                arr_26 [i_7] [i_7] [i_7] = 1106892981;
            }
        }
    }
    var_20 = ((((max(219, 3188074308))) == ((((var_0 % var_12) ? (var_12 ^ var_6) : ((max(var_12, 167))))))));
    #pragma endscop
}
