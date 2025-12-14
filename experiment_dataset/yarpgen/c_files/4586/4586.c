/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((!var_6) <= var_2));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (((arr_1 [i_0 + 1]) / 28619));
                var_13 = ((!((((arr_1 [i_1]) ? (max((arr_1 [i_1]), var_8)) : (((min((arr_3 [7] [i_0]), (arr_3 [i_0] [i_0]))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_8 [i_3] [i_2] [i_0] [i_0] [i_1] [i_0] = ((-((~(arr_3 [i_0 + 1] [i_0])))));
                            var_14 = ((((-((max(var_10, 0))))) != 65535));

                            for (int i_4 = 3; i_4 < 19;i_4 += 1)
                            {
                                arr_11 [i_3] [i_0] = ((((((arr_5 [i_0 + 1] [i_0] [i_0] [i_0 + 1]) ? (arr_5 [i_0 + 1] [i_0] [i_0] [i_0]) : (arr_5 [i_0 - 1] [i_0] [i_0] [i_0])))) && (arr_7 [i_0 + 1] [10] [i_2] [i_0 + 1])));
                                var_15 = (arr_6 [i_4] [i_4] [i_2] [i_4] [i_4]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
