/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((!-435633942), ((var_18 ? (max(var_7, var_6)) : var_16))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 = (max(var_21, (((!(((var_17 ? var_12 : (arr_1 [i_0])))))))));
        arr_3 [i_0] [i_0] = (min((max(((((arr_0 [i_0]) < var_13))), -var_17)), (~var_6)));
    }
    var_22 = var_19;
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_23 = var_5;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_24 = (min(var_24, ((min(((var_10 ? (arr_5 [i_3]) : (arr_5 [i_1]))), (arr_14 [16] [i_2] [i_3] [i_2] [i_1]))))));
                                arr_16 [i_3] [i_1] [i_2] [i_3] [i_4] [i_5] = max((arr_6 [i_1] [1]), -435633942);
                                arr_17 [i_1] [i_1] [i_1] [i_1] [i_3] = ((((max(((max(var_15, var_2))), (max(var_8, -435633946))))) ? (arr_10 [i_1] [i_2] [14]) : var_15));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_25 -= ((((max((((~(arr_15 [i_1] [i_1] [i_2])))), var_18))) ? (-435633946 ^ var_16) : var_6));
                                var_26 += (arr_22 [i_2] [i_7]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
