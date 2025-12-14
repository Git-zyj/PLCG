/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = ((((arr_1 [i_2]) ? 4294967295 : -490107929)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_14 = ((((((((min((arr_3 [i_0] [i_1]), (arr_7 [i_2] [i_2])))) && (arr_12 [i_4 + 2] [i_4 - 3] [i_4] [i_4 + 4] [i_4 + 1] [i_4 - 3]))))) & -2256497008));
                                var_15 = (min(((min((((arr_12 [i_0] [i_0] [i_1] [1] [6] [i_4]) < (arr_6 [i_0]))), (arr_10 [i_4 + 1] [i_2] [7] [i_0])))), (((!2101610677) ? (((arr_8 [i_0] [i_3] [i_2] [i_3]) / 5)) : (arr_7 [i_4 + 4] [i_4 - 2])))));
                            }
                        }
                    }
                    var_16 *= (max((((arr_2 [i_0]) ^ -18446744073709551612)), ((min((((-1606 >= (arr_11 [i_0] [i_1] [i_1] [i_1])))), (min(1300990210, (arr_14 [7] [i_2] [7] [i_2] [i_2] [i_2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
