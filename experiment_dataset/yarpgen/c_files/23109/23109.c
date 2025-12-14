/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_13, var_18));
    var_21 = var_18;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        var_22 ^= -1758112369;
                        var_23 = 6048480876460831171;
                        arr_10 [i_0] [i_1] [i_2] = (max(var_17, var_18));
                        var_24 = (max((((!(arr_8 [i_1 - 1] [i_1 - 1] [i_2 + 1] [i_2 + 1])))), (arr_8 [i_1] [i_1 - 1] [i_2 - 1] [i_2])));
                        arr_11 [i_0] [i_0] [i_0] [i_0] = var_7;
                    }
                    for (int i_4 = 4; i_4 < 8;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            arr_16 [i_0] [i_0] = (max(5031561259740789755, 127));
                            arr_17 [i_0] [i_1] [i_2] [0] [0] [i_5] = ((-(min((arr_7 [i_0] [i_1] [i_0] [i_4] [i_4] [0]), (arr_13 [i_0])))));
                            var_25 = var_12;
                        }
                        var_26 = (arr_3 [i_0] [i_0] [i_0]);
                    }
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        var_27 = (!-5031561259740789756);
                        arr_22 [i_6] [i_6] [i_6] [i_6] = (max((min(-6899581087606533378, (max(var_16, (arr_9 [i_0] [i_1] [i_2] [i_2]))))), (((((5031561259740789744 ? 24576 : (arr_2 [i_2]))) % 47264)))));
                        var_28 = (min(var_28, 54600));
                        arr_23 [i_0] [i_0] [i_2] [i_6] [i_6] = (max(-8, (max(((((((arr_18 [i_0] [i_1] [i_2 + 2] [i_6]) + 2147483647)) << (18284 - 18284)))), 15))));
                        var_29 = (min((max(var_8, var_16)), (((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? 13164663699573219465 : (arr_9 [i_0] [i_1] [i_1] [i_6 + 1])))))));
                    }
                    var_30 = (max(10963, 1));
                }
            }
        }
    }
    #pragma endscop
}
