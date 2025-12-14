/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_12, (((((var_10 ? var_0 : var_4))) ? var_12 : var_3))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3 - 2] [i_4 - 1] = ((!(((65530 - ((min((arr_10 [i_0] [i_0]), 253))))))));
                                arr_15 [i_2] [i_2] [i_2] [i_2] [i_2 + 1] = (((((((39 ? 3778236888623529670 : 1793))))) == 15450301313252493345));
                                arr_16 [i_0] [i_1] [i_2 - 1] [i_3] [i_4 - 2] = 1793;
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_2 + 1] [i_1] = ((-((-(((-127 - 1) ? 13140861136513877575 : (arr_1 [i_0])))))));
                    arr_18 [i_0] [i_1] [i_2 - 1] = ((-(min(199, 52960))));
                    arr_19 [i_0] [i_1] [i_0] = (min(1793, ((min(45, 51)))));
                    arr_20 [i_0] [i_1] = (min(((((arr_13 [i_0] [i_2] [i_2] [i_2] [i_2 + 1] [i_2 + 1]) + 102))), (~2828315538)));
                }
            }
        }
    }
    var_14 = (~var_5);
    var_15 = (((1 ? 38927 : ((var_10 ? var_12 : var_12)))));
    #pragma endscop
}
