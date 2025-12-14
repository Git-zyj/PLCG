/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    var_16 = ((((-((39 ? -39 : var_10)))) * var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = max(153, (max((arr_11 [i_2] [i_2] [i_2 - 2] [i_2] [i_2]), (arr_5 [i_2] [i_2] [i_2 - 1]))));
                                var_18 = ((~(1138544140 % 1257567510)));
                            }
                        }
                    }
                    var_19 ^= (((((arr_9 [i_0] [i_0] [i_0]) | 3037399764))) ? -1315313277 : (arr_9 [i_1 + 1] [10] [i_0]));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_19 [i_5] [i_1 - 1] [i_2] [13] [i_6] = 1073741820;
                                arr_20 [i_6] [i_6] [i_5] [i_2] [i_6] [i_0] = (max(-1730208304, (((arr_10 [i_1 - 1] [i_5 - 2] [i_2 - 1]) ? (arr_7 [i_2 - 1] [i_2 - 1] [i_1 - 2]) : ((min(var_3, var_12)))))));
                                arr_21 [i_6] [0] = var_13;
                                arr_22 [i_6] [i_2] = ((!((max((max(var_9, var_9)), var_11)))));
                            }
                        }
                    }
                }
                var_20 = (min(var_20, (((~(~3148323399))))));
                arr_23 [i_0] = ((~((max((arr_10 [i_1 - 1] [i_1] [i_1]), (arr_17 [i_1 - 1] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
