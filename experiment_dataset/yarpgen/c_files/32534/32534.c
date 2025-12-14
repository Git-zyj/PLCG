/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_10 &= (~var_6);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_11 = (max(1, (((arr_2 [i_0]) ? (arr_10 [i_2] [i_1] [i_2] [i_3] [i_2]) : (arr_2 [i_0])))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((-((-(((!(arr_9 [i_0] [i_0] [i_0] [i_0]))))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                {
                    var_12 = ((+(((arr_6 [i_0] [i_4] [i_5]) ? -var_7 : (((arr_14 [i_5] [i_0]) ^ -8192))))));
                    arr_16 [i_0] [i_0] [i_4] = (((((~(arr_14 [i_4] [i_4 - 1])))) ? ((max(((min(1, 1))), 1521804080))) : ((((min((arr_12 [i_0] [i_0]), var_7))) ? ((1 ? 1 : 7117552879293427609)) : (arr_1 [i_4 - 1] [i_5 - 2])))));
                }
            }
        }
    }
    for (int i_6 = 4; i_6 < 19;i_6 += 1)
    {
        var_13 = (max(var_13, (((!(((~(~var_9)))))))));
        arr_20 [i_6] [i_6] = (((((((var_1 ? var_3 : (arr_19 [i_6]))) != (!54852)))) >> (var_4 - 33050)));
        arr_21 [i_6 + 1] = (((((((((arr_19 [i_6]) / (arr_17 [i_6] [i_6])))) ? (arr_17 [i_6 - 2] [i_6 - 4]) : (arr_17 [i_6 - 4] [i_6 - 4])))) >= ((~(arr_19 [i_6 - 3])))));
    }
    var_14 = var_7;
    var_15 = 119;
    #pragma endscop
}
