/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((-6098363491678763115 + 9223372036854775807) << (6098363491678763122 - 6098363491678763122))) % ((min(1113097931, 3181869364))))));
    var_16 = (max(var_16, ((((((-14722 ^ var_7) ? var_8 : (!var_10))) ^ ((var_10 ? ((var_8 ? var_14 : var_8)) : (var_10 && var_11))))))));
    var_17 &= (((((((781515507 >> (var_2 - 532788995587523666)))) ? (((var_14 ? var_14 : var_4))) : ((var_7 ? var_13 : var_2)))) != -var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, ((max((-14705 / -14688), ((min(var_1, (arr_3 [i_2] [i_1 + 1] [i_1 + 1])))))))));
                    var_19 = var_5;
                    var_20 = (arr_3 [i_2] [i_1 - 1] [i_0]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_21 = (((arr_6 [i_1 + 1] [i_1 - 1]) ? 3332967920 : ((((arr_1 [i_1]) ? (arr_2 [i_0]) : (arr_0 [i_4]))))));
                            arr_13 [i_0] [i_0] = (((arr_12 [i_0] [i_0] [i_3] [6]) ? (var_2 >= var_9) : ((var_1 / (arr_12 [i_4] [i_3] [i_0] [i_0])))));
                        }
                        var_22 = (min(var_22, (((((var_4 / (arr_9 [i_0] [i_0]))) <= (arr_0 [i_3]))))));
                    }
                }
            }
        }
    }
    var_23 = ((226 ? ((min((((156 ? var_0 : var_6))), ((var_3 ? 3181869365 : 3989918107))))) : (min(((11236 ? 3181869382 : -358001548362044200)), (((1 ? 1 : 58494)))))));
    #pragma endscop
}
