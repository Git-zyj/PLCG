/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((~920451256) ? ((-2147483638 ? ((var_10 ? 18446744073709551615 : -127)) : 29)) : var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, -128));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 = arr_12 [i_1] [i_1] [i_2 - 1] [i_3 + 2] [i_3 - 2] [i_3];
                                arr_15 [i_3] [i_3] [i_2 + 2] [i_1] [i_3] = ((~(((!(arr_14 [i_1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2]))))));
                            }
                        }
                    }
                    var_20 -= (!((((116 * 1) ? (min((arr_7 [i_0] [i_1] [i_2 + 1]), 234)) : ((-1 ? 18 : (arr_12 [3] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                    var_21 = ((((~(arr_7 [i_2 + 2] [i_2 - 1] [i_2 + 1]))) & (((((arr_7 [i_2 - 1] [i_2 - 1] [i_2 + 3]) < var_8))))));
                    arr_16 [i_0] [i_1] [i_2] = 4294967293;
                }
            }
        }
    }
    #pragma endscop
}
