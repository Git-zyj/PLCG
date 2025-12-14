/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;

    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        var_17 = ((-((14292443097410548508 << (((4154300976299003084 && (arr_0 [i_0]))))))));
        arr_3 [i_0] = ((((!(arr_1 [i_0]))) ? -4154300976299003116 : 44902));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] |= (((239 > 0) ? ((65535 / (((arr_5 [i_1]) % -2765)))) : (((1041121499 ^ -4) % (31 + 2047)))));
        var_18 = (min(var_18, (((!(((-(((arr_4 [i_1]) ? -7263362955229402699 : var_2))))))))));
        arr_7 [i_1] [i_1] |= (max(((-65515 ? -23173 : 8590383222732482142)), (((var_0 ? (14292443097410548510 && 10710821437683836023) : (10 ^ 1141204477))))));

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_10 [i_2] [i_2] [i_1] = var_13;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    {
                        var_19 = (max(var_19, (arr_13 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])));
                        var_20 = var_5;
                    }
                }
            }
            var_21 = ((-32 ? (0 < 7991) : (arr_13 [i_1] [i_2] [i_2] [i_1])));
        }
    }
    var_22 -= var_5;
    #pragma endscop
}
