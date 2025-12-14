/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, -var_0));
    var_12 &= var_0;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_13 = ((((arr_1 [i_0]) <= (1955096151920622765 != 1))) ? (arr_0 [i_0 - 1]) : ((((var_1 < ((((arr_0 [4]) == var_2))))))));
        var_14 = ((-((144 ? 14100896596457299050 : 133))));
    }

    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_15 = (min(var_15, ((((arr_5 [i_1]) - (arr_5 [i_1]))))));
            arr_7 [i_1] [i_1] [i_1] = ((((((arr_3 [i_1] [1]) / (arr_6 [i_2] [8] [i_1])))) ? (arr_5 [i_2]) : (((arr_0 [i_2]) ? (arr_0 [i_1]) : (arr_6 [i_1] [i_2] [i_2])))));
            arr_8 [i_1] = ((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1]));
            var_16 = (((((arr_2 [i_1] [i_2]) * var_6)) * (((((arr_3 [i_1] [i_2]) && 2038278895))))));
        }
        var_17 ^= (arr_5 [i_1]);
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_18 -= (((1231508748451670505 ? 3303566545 : -12227)));
                    arr_14 [i_4] [i_3] [i_3 + 1] [i_4] = ((25888 ? 18354835174409982639 : (arr_3 [i_1] [i_3 - 2])));
                }
            }
        }
        arr_15 [i_1] = (((arr_13 [i_1] [8] [0]) | 91908899299569000));
    }
    #pragma endscop
}
