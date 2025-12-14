/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_10 = min(var_9, (~var_9));
        var_11 ^= (~4944244795684674045);
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 4; i_2 < 16;i_2 += 1)
        {
            arr_7 [3] [i_2] [i_2] = (((arr_6 [i_2] [i_2]) <= (534773760 <= var_0)));
            var_12 = max(var_4, var_3);

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_13 = var_3;
                var_14 *= var_8;
                var_15 = ((!(~var_0)));
            }
            /* vectorizable */
            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {
                arr_13 [i_2] = -3028402444681347703;

                for (int i_5 = 4; i_5 < 18;i_5 += 1)
                {
                    arr_16 [i_5] [i_2] [i_2] [i_1] = (-7273983934903403720 / 534773760);
                    var_16 = (~(arr_15 [i_2 - 4] [i_2 - 4] [i_2 - 4] [1]));
                    arr_17 [i_4] [i_1] [i_4] [i_2] [i_2] [i_4] = var_8;
                }
                var_17 = (!var_8);
            }
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                arr_21 [i_2] = (min((((var_7 ? (arr_8 [i_2 - 2] [i_2]) : var_4))), 8812362248461460988));
                var_18 = 534773760;
                arr_22 [i_1] [i_2] [i_2] [i_6] = var_0;
            }
            var_19 = var_4;
        }
        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            var_20 = (max(((min((262140 & 3760193541), var_5))), ((-(arr_2 [i_1])))));
            var_21 = var_0;
        }
        for (int i_8 = 4; i_8 < 17;i_8 += 1)
        {
            arr_31 [i_1] = (arr_19 [i_8] [i_8 - 4]);
            arr_32 [i_1 + 2] = (arr_27 [i_1 + 3]);

            for (int i_9 = 3; i_9 < 15;i_9 += 1)
            {
                var_22 += ((-(arr_6 [i_8] [i_9 - 1])));
                var_23 ^= (((~var_8) ? (63185 & -268435456) : var_5));
                arr_35 [i_9] [i_1] = (+(((arr_24 [i_8 - 1] [i_1 + 1]) ? -281474976710656 : var_3)));
                arr_36 [i_1] [i_8] [i_8] [i_9] = 3760193536;
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 18;i_11 += 1)
                    {
                        {
                            arr_44 [i_1] [i_1] [i_9] [i_10] [i_11] = (max(var_8, 4286578688));
                            var_24 = (((min(4286578703, 50331648))) & var_5);
                            var_25 = (min(((((min(1830357691641430307, (arr_19 [i_8] [i_10 + 1])))) ? (max(144106391982833664, var_4)) : (arr_25 [i_1] [i_1] [i_9 + 1]))), -281474976710656));
                            arr_45 [i_10] [i_10 - 1] [i_10] [i_10] [17] [i_10] [i_10] = ((!(~3171315092020490712)));
                        }
                    }
                }
            }
            var_26 = (max((arr_26 [i_1 + 1] [i_8 - 2] [i_8]), (arr_26 [i_1 - 3] [i_8 - 1] [i_1 - 3])));
        }
        arr_46 [i_1] |= (~(((-281474976710656 || var_6) ? -191502646 : (12803 / var_8))));
        arr_47 [8] = ((((3760193536 ? (arr_12 [i_1 + 1] [i_1 - 3]) : 6425827964669769915)) + (281474976710656 | 9998020321462470038)));
    }
    var_27 = var_1;
    #pragma endscop
}
