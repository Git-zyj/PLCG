/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 7028755042087661428;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (((arr_6 [i_0] [i_0]) ? 7 : (max(15, (arr_0 [i_0] [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_19 [i_2] [13] [14] [i_2] = (arr_15 [18] [18]);
                                var_17 = (~3722);
                            }
                            var_18 = (((((arr_2 [i_2 - 1] [i_3 + 1]) ? var_0 : (arr_2 [i_2 - 1] [i_3 - 1])))) ? (((min(26, var_3)))) : (max(65434, 7028755042087661428)));
                        }
                    }
                }
                arr_20 [i_0] = ((((((arr_15 [i_0] [i_1]) ? 0 : ((var_9 ? var_4 : 4294967282))))) ? (max(((max((arr_3 [16]), var_10))), (max((arr_13 [i_0] [i_1] [i_0] [i_0]), (arr_18 [i_1] [i_0] [1]))))) : (((-(arr_2 [i_1] [i_0]))))));
            }
        }
    }
    var_19 = (min((min((((var_8 ? -26 : var_0))), var_9)), (min(var_14, (((var_6 ? var_0 : 34926)))))));
    #pragma endscop
}
