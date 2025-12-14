/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = 10746;
                var_17 = (arr_2 [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (((37066 ? 1811 : -341319659)))));
                                arr_12 [i_3] [i_3] [i_0] [i_3] [5] [i_3] [5] = (min(3504140020, -7676));
                                var_19 = arr_5 [i_1] [i_2] [i_3] [i_4];
                            }
                        }
                    }
                }
                var_20 = (max(var_20, ((((((var_4 | (arr_9 [1] [i_1] [i_1 - 3] [1])))) < ((1831 - (((arr_5 [1] [i_0] [i_1] [i_1 - 1]) ? var_6 : var_1)))))))));
            }
        }
    }
    var_21 = (var_8 - -100);
    #pragma endscop
}
