/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_4 && var_4) ? ((((var_8 <= var_1) ? ((var_2 >> (var_3 - 2139224570))) : -29924))) : ((((max(0, -1))) ? var_12 : (var_12 || var_2)))));
    var_14 = -var_7;
    var_15 = max(-var_1, (((!(max(var_5, var_9))))));
    var_16 *= var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_17 = ((var_12 | (!750594233)));
                                var_18 *= ((((((((arr_1 [i_0] [i_0]) == (arr_7 [22] [22] [22]))) ? (((arr_8 [i_1] [i_1] [i_1]) % var_1)) : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((~(arr_4 [i_2] [i_2 + 2] [i_4 - 3]))) : (((!(arr_12 [i_0] [10] [i_0] [10] [i_0] [i_0] [i_0]))))));
                                var_19 *= ((((((arr_14 [i_4] [i_4] [i_4] [i_4] [i_4 - 2]) - (arr_14 [i_4] [i_4] [i_4] [i_4] [i_4 + 1])))) ? var_4 : (((min(-29956, -29924))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((+((var_3 / ((((var_1 + 2147483647) << (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) - 1)))))))));
                            }
                        }
                    }
                }
                arr_16 [i_1] [i_1] [i_0] = (arr_1 [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
