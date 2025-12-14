/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    var_21 = (((((((max(var_18, 32318)) < (var_4 != 5059667061305308445))))) | ((((var_1 ? var_19 : var_2)) + var_5))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_5 [4] [i_1] [i_1] = (min(-var_6, (((max(var_8, var_9))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_22 ^= (min(var_2, ((((min((arr_8 [i_1]), var_7)) != ((((arr_2 [i_0] [i_0]) && var_16))))))));
                                var_23 = ((-(((arr_6 [i_0] [i_1 + 1]) + (arr_6 [i_3 + 2] [i_1 + 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = var_1;
    #pragma endscop
}
