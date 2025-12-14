/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 14748910766860570863;
    var_16 = var_12;
    var_17 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = max((min((((arr_0 [i_0]) ? (arr_6 [i_0] [7] [7]) : (arr_6 [i_2] [i_1] [i_0]))), (arr_7 [i_1] [i_0]))), ((((max((arr_1 [i_0] [i_2]), 1261297344187144236)) != 2804975190787813513))));
                    var_19 = ((((arr_7 [i_2 - 2] [i_2 + 1]) ? 0 : (arr_7 [i_2 + 2] [i_2 - 1]))) << ((0 >> (18446744073709551615 - 18446744073709551570))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, (max((((!(arr_0 [i_4])))), (max((arr_9 [i_3 + 1] [i_2 + 3]), 18446744073709551615))))));
                                var_21 = (16778207784291381121 ^ 6661088759406494343);
                            }
                        }
                    }
                    var_22 = (max(var_22, 11510629134541726701));
                }
            }
        }
    }
    #pragma endscop
}
