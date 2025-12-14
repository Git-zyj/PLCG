/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, ((((((-(min((arr_2 [i_2] [i_1]), 984443835))))) ? (arr_1 [i_2]) : (max(((var_4 ? var_0 : 8244188586707915954)), (arr_4 [i_0] [i_1]))))))));
                    arr_6 [i_0] [i_1] [i_2] [i_1] = ((((((arr_2 [i_2] [i_1]) ? 253 : (-2147483647 - 1)))) && ((min((arr_4 [i_2] [i_1]), (arr_4 [i_0] [i_1]))))));
                    arr_7 [i_0] [i_1] [i_2] = ((((min(var_1, (arr_4 [i_0] [7])))) >= ((-((((arr_4 [17] [i_1]) < var_8)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                var_13 = (((arr_4 [i_3] [i_3]) ? ((18446744073709551589 ? -2147483638 : (-2147483647 - 1))) : var_9));
                var_14 = (((-2147483647 - 1) ? (-2147483647 - 1) : 0));
            }
        }
    }
    #pragma endscop
}
