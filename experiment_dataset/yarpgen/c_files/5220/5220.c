/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((min((~var_7), ((var_10 ? var_12 : var_6)))) < (((((~0) >= (var_9 != var_5))))))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (min((((!(-32609 && 1023)))), (max((max(var_9, var_11)), (((!(arr_1 [i_0] [i_0]))))))));
        var_16 += var_3;
        var_17 ^= var_8;
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] |= (arr_3 [i_0] [i_1] [i_2]);
                    var_18 = (max(((max(var_13, var_1))), var_12));
                }
            }
        }
        arr_9 [i_0] = (!var_1);
    }
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        var_19 = var_4;
        var_20 = (~-1);
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_14 [i_4] = var_0;
        var_21 = ((((((((arr_6 [i_4] [i_4] [i_4] [i_4]) ? (arr_10 [i_4]) : var_6))) ^ -var_9)) >> (((~var_12) - 2737629046))));
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_23 [i_5] = (max((!18446744073709551602), (arr_5 [i_4] [i_5] [i_4] [i_7])));
                        var_22 = (max(var_22, (var_12 || var_7)));
                        arr_24 [i_4] [i_4] [i_5] [i_4] [i_7] = max(67108863, 31);
                        arr_25 [i_4] [i_6] [i_5] [i_6] [i_6] [i_7] &= (~var_0);
                    }
                }
            }
        }
    }
    #pragma endscop
}
