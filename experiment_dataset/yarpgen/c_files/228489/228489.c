/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!33479);
    var_21 = (min(var_7, var_10));
    var_22 = -var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_23 = (max(var_23, -850267444));
        var_24 = ((!(arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] = (8 | 0);
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                {
                    var_25 = (max((max(((84 ? (arr_7 [i_1] [i_1]) : 181)), (((!(arr_2 [i_1])))))), (((!((((arr_9 [i_2] [8]) ? 246 : (arr_4 [i_1])))))))));
                    var_26 = 246;
                    var_27 = ((((((arr_3 [i_1] [i_1]) >> (((arr_7 [i_1] [1]) - 40521))))) ? 1112458457 : (max((arr_8 [i_3 + 2] [i_2] [i_2] [i_2 - 1]), 6))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_28 -= ((((arr_1 [i_4] [i_4]) ? (164 | var_15) : (((9 >> (((arr_9 [8] [i_4]) - 7401))))))));
        arr_13 [i_4] [i_4] = ((-5643 < ((-(arr_6 [i_4] [i_4] [i_4])))));
        var_29 *= (((((-(arr_9 [8] [i_4])))) < ((-((245 ? 246 : 11883506049527231073))))));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    var_30 = (min(var_30, (((((((arr_7 [i_4] [i_5 - 2]) | (arr_7 [i_5] [i_5 + 1])))) ? ((((91 ? (arr_0 [i_4]) : (arr_6 [8] [i_5] [12]))) / var_18)) : 24924)))));
                    arr_20 [i_4] [i_5 - 1] [i_4] = (i_4 % 2 == 0) ? ((((arr_12 [i_4]) > (max((arr_6 [i_5 + 1] [i_5 - 2] [i_4]), ((var_3 >> (((arr_6 [i_4] [4] [i_4]) + 574451527))))))))) : ((((arr_12 [i_4]) > (max((arr_6 [i_5 + 1] [i_5 - 2] [i_4]), ((var_3 >> (((((arr_6 [i_4] [4] [i_4]) + 574451527)) - 651555749)))))))));
                }
            }
        }
    }
    #pragma endscop
}
