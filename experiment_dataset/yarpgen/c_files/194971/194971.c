/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 119;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, 35228));
                    arr_7 [i_0] [i_0] [i_0] [i_2] = (max((((((var_8 / (arr_1 [i_2])))) ? ((79 * (arr_6 [i_2] [i_1] [i_0]))) : ((max((arr_2 [i_0] [i_1]), (arr_6 [i_0] [i_1] [i_2])))))), (((((arr_3 [i_0]) / var_7))))));
                    var_22 = (((arr_0 [i_0]) ? var_7 : ((-(((arr_2 [i_0] [i_1]) * (arr_2 [i_0] [i_0])))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 10;i_4 += 1)
            {
                {
                    var_23 = (~var_2);
                    var_24 = ((((var_10 / ((var_2 ? var_9 : var_17)))) * ((((var_10 <= ((max(110, (arr_4 [i_4] [i_4] [i_4]))))))))));
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((-(!1)));
                    var_25 |= (min((((((arr_13 [i_0] [i_0]) ? 13564 : (arr_9 [i_0] [i_4] [9]))) >> (((arr_0 [i_3]) - 13599566102183496993)))), 65522));
                }
            }
        }
        var_26 = (max(((((arr_8 [i_0] [i_0]) <= ((9223372036787666944 | (arr_5 [i_0] [i_0] [i_0])))))), 1678598174));
        arr_15 [i_0] [i_0] = var_19;
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_27 |= var_9;
        var_28 = (max(var_28, 7891249318795205636));
    }
    #pragma endscop
}
