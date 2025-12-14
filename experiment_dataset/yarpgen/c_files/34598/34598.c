/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (((+((4294967295 ? (arr_1 [i_0] [i_0]) : var_12)))));
        var_19 = (min(var_19, (((((((arr_0 [i_0]) / var_7))) > ((((((arr_0 [i_0]) <= (arr_0 [i_0])))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_20 += (~6);
                    var_21 *= var_16;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] = (max(var_7, (((min((arr_1 [i_0] [3]), (arr_13 [11] [i_0])))))));
                                var_22 = (min((max((((~(arr_6 [i_3] [i_2])))), (((arr_0 [i_1]) ? (arr_2 [15]) : 4294967279)))), (~var_5)));
                            }
                        }
                    }
                }
            }
        }
        var_23 = (max(var_23, (((((((max(var_4, 1))))) || ((9094 > (min((arr_5 [i_0] [i_0] [i_0]), (arr_0 [i_0]))))))))));
    }
    #pragma endscop
}
