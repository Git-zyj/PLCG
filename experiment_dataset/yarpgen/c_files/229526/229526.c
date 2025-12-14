/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_2] [i_2] = ((((arr_5 [i_0 - 1] [i_0 + 2] [i_0 - 2]) / 18446744073709551601)));
                            arr_12 [i_0] [i_0] [i_0] [i_2] [i_0] |= ((var_4 || ((((arr_9 [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 4] [i_0 - 3]) ? var_6 : (arr_0 [i_0 - 4]))))));
                            var_10 = (max(var_4, (~54801)));
                        }
                    }
                }
                var_11 = (((((((min((arr_3 [i_1] [i_0] [i_0]), var_5))) ? (((!(arr_7 [i_0] [i_0] [i_0] [i_0 + 1])))) : (2147483647 || var_7)))) || (arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])));

                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    arr_15 [i_0] = ((!(arr_8 [i_0 - 4] [i_4] [i_0 - 3])));
                    arr_16 [13] [1] [1] = (((((arr_0 [i_1]) ? (arr_3 [i_0] [i_1] [i_4]) : (((var_4 ? var_9 : (arr_9 [18] [i_1] [i_1] [i_1] [i_4])))))) >= (arr_10 [i_0 + 2] [i_0 + 2])));
                    arr_17 [i_0] [i_1] [i_4] [2] = (min(((((-12855 | 586721846) > ((-670852000 ? (arr_5 [i_4] [i_4] [i_0]) : var_9))))), var_5));
                    arr_18 [i_0] [12] [12] = ((-var_5 >= (((min((arr_8 [i_0] [i_0] [i_0 + 2]), var_9))))));
                }
            }
        }
    }
    var_12 = 10914105963242064744;
    var_13 &= (85 <= var_2);
    var_14 = 436350582566433554;
    #pragma endscop
}
