/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 = ((((min((arr_0 [i_0]), (arr_3 [i_0] [i_1])))) ? (arr_3 [i_2] [i_1]) : ((min((arr_4 [i_0] [i_1] [i_2]), (arr_3 [i_0] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 *= ((-(((arr_6 [i_4 + 2] [i_4 + 1] [i_4 + 2]) ? -7445593102031029773 : (arr_6 [i_4 + 2] [i_4 + 1] [i_4 + 1])))));
                                var_14 = ((26882 % 7445593102031029773) ? (arr_2 [i_0] [i_1] [i_0]) : ((((26882 ? 42155 : 21)))));
                                var_15 = (min(1984, -2068813997755163009));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (((((30590 ? -55 : 7148))) ? ((((((7445593102031029772 ? 418354230 : var_3)) >= var_8)))) : (((((21 ? 286007806 : 246))) ? (178 % 7445593102031029773) : 5610107705058897291))));
    #pragma endscop
}
