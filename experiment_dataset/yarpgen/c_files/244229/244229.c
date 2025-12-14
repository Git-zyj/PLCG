/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((min(var_5, -1985363473))), ((-119 ? -4171038533692929934 : -119))));
    var_20 = ((((max(var_2, var_10))) ? var_2 : (var_10 | var_5)));
    var_21 *= ((var_14 - (((!(((100 ? var_7 : var_6))))))));
    var_22 = (max(var_22, -119));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [1] [i_1] [i_4] [i_4] = ((min((((!(arr_10 [i_1] [i_1] [4] [i_1])))), (((arr_2 [i_1] [i_0]) / 100)))));
                                arr_16 [i_4] [i_4] [i_2] [i_4] [i_0] = (~16630983908151798497);
                            }
                        }
                    }
                    arr_17 [i_1] [i_1] [i_1] [i_2] = (min((!127), (arr_11 [i_0] [i_1] [2] [i_1] [i_2] [i_0])));
                    var_23 = (min(var_23, (arr_3 [i_0] [i_1] [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
