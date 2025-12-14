/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, 57073));
                                var_15 = (min(var_15, ((((-702768584305621409 ? 12098 : 69))))));
                                var_16 = (min(var_16, 5603442673757329927));
                                arr_13 [1] [i_2] [i_2 + 2] [i_2] [i_0 + 1] = ((max(-0, ((18 & (arr_2 [i_0 - 1] [i_0] [i_0]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [i_1] [i_5] [i_6] = (max(6479568968618116771, (arr_3 [i_2 - 1] [i_0 - 1] [i_0 + 1])));
                                var_17 = ((~((-42 & (arr_0 [i_0 - 1])))));
                                arr_19 [i_2] [i_1] [i_2] [i_0] [i_6] = ((var_5 ? (max(-6396709011781934816, 0)) : (((32736 ? 8 : -1)))));
                            }
                        }
                    }
                }
            }
        }
        var_18 = ((((min((arr_17 [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0 - 1]), 131))) ? (((((-32756 ? 2 : 32764))))) : (max(-77, (arr_7 [i_0 + 1] [i_0 + 1] [i_0] [11] [i_0])))));
    }
    var_19 = (max(var_19, (((-(--921407311))))));
    var_20 = (max(var_20, (((((var_6 * (27223 * var_5))) / var_8)))));
    #pragma endscop
}
