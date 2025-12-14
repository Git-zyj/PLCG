/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [20] [i_1] [i_2] [9] = ((((max(var_7, (arr_7 [i_1 - 1])))) ? ((-(((arr_1 [i_1]) ? var_2 : 2866060554)))) : ((min((arr_4 [i_1 + 1] [i_1 + 2]), 8)))));
                                var_13 = (arr_9 [i_1] [i_1 + 1] [i_1]);
                            }
                        }
                    }
                }
                var_14 |= 8192;
                arr_14 [i_1] = (max((min(1, (arr_2 [i_0]))), (((var_2 ? 2126249507 : ((max((arr_5 [i_1 + 2]), var_3))))))));
            }
        }
    }
    var_15 -= ((((((var_3 ? var_6 : var_2)))) ? ((var_6 ? ((1 ? var_0 : var_4)) : (var_3 >= var_0))) : ((min(var_3, -1090100266)))));
    var_16 = (max(var_16, (((((var_8 ? ((var_4 ? var_9 : var_6)) : var_4))) - ((var_3 ? (-1863677185100881386 - var_6) : var_11))))));
    #pragma endscop
}
