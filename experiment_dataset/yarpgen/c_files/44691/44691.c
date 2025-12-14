/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((-58 + 2147483647) >> (((min(7204582029558259454, 67319629253641088)) - 67319629253641085))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_17 [i_0] [i_0 - 1] [i_1] [i_1] [i_0 - 1] [i_3] [i_0] = var_2;
                            arr_18 [i_4] [i_3] [i_0] [i_0] [i_1] [i_0] = ((+((((arr_14 [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 3]) > (arr_3 [i_0] [i_0]))))));
                        }
                        var_19 -= (((((((183 ? 7153 : 70))) ? (~4208384709) : (max(var_8, var_4)))) >= (((var_5 ? (max((arr_11 [i_2] [i_0] [i_2]), var_2)) : (var_6 || var_14))))));
                    }
                    arr_19 [i_0] [i_1] [i_0] = ((arr_13 [i_0 + 4] [i_0 + 4] [i_1] [i_1] [i_2]) & (arr_15 [i_2] [i_1] [9] [i_1] [i_1]));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 13;i_6 += 1)
        {
            {
                arr_24 [i_5] [i_5] = max((64730 / var_2), (min(188, 0)));
                var_20 = (((((min(var_16, (arr_20 [i_5] [i_5])) < (((var_16 >= (arr_23 [i_5 + 4] [i_5] [i_5])))))))));
                var_21 = (i_5 % 2 == 0) ? ((min((max((!var_4), (((var_2 + 2147483647) << (((arr_23 [i_5] [i_5] [i_5]) - 7416587657680175469)))))), (arr_21 [i_5] [i_6])))) : ((min((max((!var_4), (((var_2 + 2147483647) << (((((arr_23 [i_5] [i_5] [i_5]) - 7416587657680175469)) - 13250228271912823146)))))), (arr_21 [i_5] [i_6]))));
            }
        }
    }
    #pragma endscop
}
