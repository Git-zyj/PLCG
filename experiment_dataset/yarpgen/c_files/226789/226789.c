/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -39;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_13 += ((!(((1 ? 58228 : 58228)))));
                        var_14 = (min(var_14, ((((~(arr_5 [i_0] [i_0] [i_0])))))));
                        var_15 = (min(var_15, (((((((arr_10 [i_0] [i_1] [i_2 + 2] [i_1]) ? (arr_9 [i_2] [i_3] [i_2] [i_2] [i_1] [i_0]) : (58220 % 40201)))) ? 7308 : (max(7308, (((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - (arr_2 [i_1]))))))))));
                        arr_11 [i_0] [i_0] = ((+((+(((arr_0 [i_0] [i_1]) ? (arr_8 [i_0] [i_1] [i_2 + 4] [i_3]) : (arr_5 [i_0] [i_2 + 4] [i_3])))))));
                    }
                    arr_12 [i_0] [i_0] [i_1] [i_2 + 4] = (((((((arr_10 [i_0] [i_1] [i_0] [i_0]) + (arr_0 [i_2] [i_1]))))) ? (((513438179 ? -2517 : 7308))) : (((((arr_7 [i_0] [i_2]) + 9223372036854775807)) >> (((arr_8 [i_1] [i_1] [i_1] [i_1]) - 6132977147921619927))))));
                    var_16 = (max(var_16, (((((-(arr_8 [i_0] [i_1] [i_2 + 1] [i_2 - 2]))))))));
                    arr_13 [i_0] [i_2 - 2] [i_2] [i_2] = 7315;
                }
            }
        }
        var_17 = (max(var_17, (((-(((arr_10 [i_0] [1] [i_0] [1]) ? (max((arr_4 [i_0]), (arr_6 [i_0]))) : (((!(arr_5 [i_0] [6] [i_0])))))))))));
    }
    var_18 = ((~(min(40201, ((58221 ? 58228 : 16868))))));
    #pragma endscop
}
