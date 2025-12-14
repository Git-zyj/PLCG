/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0 + 1] = (min(var_9, ((var_10 ? var_10 : var_10))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [6] [i_1] [1] [1] [13] [0] [i_3] = 2475303717;
                                arr_16 [i_3] [2] [1] [i_3] [i_4] [6] = (+-646353966);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 14;i_6 += 1)
                    {
                        {
                            arr_23 [i_0] [5] = ((((min(((646353957 ? 24 : var_7)), (var_7 ^ var_3)))) > ((((var_0 << (((var_10 + 30865) - 24)))) % (var_5 % 273969322)))));
                            var_11 = (((max(1822233392, 3638440085345422881)) >> ((((-(min(3, 30)))) + 38))));
                        }
                    }
                }
            }
        }
    }
    var_12 = (min(var_9, -107));
    var_13 = ((-(((((max(var_7, var_1))) < ((46 ? 1772 : 646353941)))))));
    #pragma endscop
}
