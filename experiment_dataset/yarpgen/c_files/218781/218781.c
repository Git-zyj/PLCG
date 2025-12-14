/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = (max(((-((min(var_2, 51542))))), -2890231442));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_4] [2] = ((((max(51525, ((127 >> (13994 - 13984)))))) ? ((~(!var_12))) : (arr_9 [i_0] [i_0] [i_0] [10] [10] [i_0] [13])));
                                var_15 = ((-(!var_7)));
                                arr_13 [i_0] [i_4] [1] [i_0] = (((~(((arr_0 [i_0] [i_0]) ? var_5 : 51542)))));
                            }
                        }
                    }
                    arr_14 [i_0] [1] [i_2] = (((((((12 ? var_1 : var_7))) ? ((var_1 ? 13996 : var_2)) : (((14013 != (arr_2 [1]))))))) ? ((-(((15 != (arr_10 [i_0] [1])))))) : (~-126));
                    var_16 += (arr_10 [i_0] [1]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    arr_22 [i_5] [i_7] [9] [i_6 - 2] = (arr_10 [i_6 - 1] [i_7]);
                    arr_23 [i_5] [i_7] [0] [i_7] = (max(((((arr_18 [i_5]) > (((arr_8 [i_7]) + var_0))))), ((~(arr_19 [i_6] [i_6])))));
                }
            }
        }
    }
    var_17 = (min(var_17, (((1 ? ((((var_3 && 7) ? (!44385) : var_13))) : var_5)))));
    var_18 = (((((var_11 ? var_11 : (~1)))) ? (((min(var_3, (!1594519887))))) : (4088 & 120)));
    #pragma endscop
}
