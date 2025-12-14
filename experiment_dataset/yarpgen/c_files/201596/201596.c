/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((((((min(var_12, 209))))) || ((!((min(var_14, 25477)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = (((((((min((arr_3 [i_1]), var_3))) ? (arr_1 [i_1]) : (arr_4 [i_1] [i_1])))) ? -var_1 : ((((-2147483647 - 1) / var_5)))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] = (((~var_9) || (((var_0 ? 209 : 1581521304)))));
                    arr_11 [i_0] [i_1] [i_1] [i_1] = (min(((-(!var_10))), ((~(arr_1 [i_0 + 1])))));
                }
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    var_17 = min(32767, ((-((var_1 ? 14015 : (arr_4 [i_1] [i_1]))))));
                    var_18 = var_2;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_19 [i_0] [15] [i_3] [i_4] [i_1] [i_3] [i_3] = ((((min(23026, ((43092 << (arr_9 [22] [i_3] [i_0] [i_0])))))) ? 2147483647 : (arr_18 [i_0] [i_1])));
                                arr_20 [i_0] [i_0 + 2] [i_0] [16] [i_4] &= (min((~var_13), (((!(arr_8 [i_0] [i_0 - 1] [i_1]))))));
                            }
                        }
                    }
                }
                var_19 += ((((((((arr_17 [i_0] [i_0] [i_1 + 1] [1] [i_0 - 1]) < var_5)) ? (var_8 && 14014) : 19040))) ? 32747 : (((((arr_9 [i_0] [i_0] [i_0] [i_1]) * (arr_16 [i_0] [1])))))));
            }
        }
    }
    #pragma endscop
}
