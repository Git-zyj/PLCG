/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!1);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (((((!(var_3 != var_7)))) ^ ((((1 ? var_2 : (arr_7 [i_2] [i_1] [i_0]))) % 38810))));
                    var_12 = ((+((max(var_1, (((arr_5 [i_1]) > -74)))))));
                    arr_8 [i_1] = (((~var_3) + 1));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] = ((((((var_9 >> (((arr_14 [i_0] [i_0] [i_0]) + 20802)))))) >= 1));
                                arr_17 [i_0] [i_1] [i_0] [i_0] [i_0] = -101;
                                var_13 = ((+(((arr_0 [i_1]) | -31007))));
                            }
                        }
                    }
                }
            }
        }
        var_14 = ((14750 ? var_8 : (arr_14 [i_0] [i_0] [1])));
    }
    #pragma endscop
}
