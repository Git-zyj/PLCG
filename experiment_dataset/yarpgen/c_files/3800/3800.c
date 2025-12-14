/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(!0)));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_14 -= ((11 || (1 + -9455)));
        var_15 = (arr_0 [i_0 + 1]);
        var_16 += (arr_0 [i_0 - 1]);
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_17 = ((1 < ((var_8 ? (arr_6 [i_1 + 2] [i_2]) : (arr_2 [i_2])))));
            var_18 = (arr_4 [i_1]);
            arr_7 [i_2] = (((arr_6 [i_1] [i_2]) ? (arr_3 [3]) : (arr_3 [i_1 + 1])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_19 -= ((+((((arr_6 [i_1] [i_1]) <= 153)))));
                        arr_12 [i_4] [i_1] [i_2] [i_1] = ((1 >= (arr_9 [i_1] [i_1 + 2])));
                    }
                }
            }
        }
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            var_20 += (min((!var_8), (arr_9 [i_1] [i_1 + 2])));
            var_21 = (min(((min(39719, 36093))), (max((arr_14 [i_1 + 1]), var_12))));
        }
        var_22 = ((511 <= (min(-1023, (min((arr_14 [i_1]), (arr_2 [i_1 - 1])))))));
        arr_15 [i_1] [i_1] = (((arr_9 [i_1] [i_1]) + (arr_13 [i_1] [i_1])));
    }
    #pragma endscop
}
