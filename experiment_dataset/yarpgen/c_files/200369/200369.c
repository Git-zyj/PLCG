/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((min(var_6, var_9)));
    var_19 *= (((~var_8) < var_2));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((~(arr_1 [i_0]))));
        arr_3 [16] = (min(var_17, (arr_0 [i_0])));

        for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_20 = 1;
            var_21 = ((((max((arr_4 [i_1]), 63013))) >= 1));
            arr_6 [16] [i_1] = (arr_5 [i_1 - 1] [i_1 - 1]);
        }
        for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_0] [i_2 - 1] [5] [i_3] [i_4] [i_5] = ((max(29100, 7300910487139499530)));
                            var_22 = ((((((((1 ? 1940569514829078244 : 9223372036854775807)) < 1)))) * 8662676982073528835));
                            var_23 = (((min((1 | 4969933886678649681), (1 + 12764))) / (((2522 - ((var_9 ? 52745 : 1)))))));
                            arr_19 [i_0] [i_0] [12] [i_3] [i_5] &= (((var_0 ? (~-9223372036854775807) : (~var_3))) >= (arr_5 [i_3] [i_0]));
                        }
                    }
                }
            }
            var_24 = (min(var_24, (((~(min(((min((arr_15 [i_0] [i_0] [i_0] [i_2 + 1] [i_0] [i_2 + 1]), var_9))), (min(504, 1511817719454419173)))))))));
            arr_20 [i_0] &= (((arr_15 [i_0] [i_2 + 1] [i_0] [9] [i_0] [i_0]) / ((max(15, 1)))));
        }
        for (int i_6 = 1; i_6 < 20;i_6 += 1) /* same iter space */
        {
            arr_24 [i_0] [i_0] [i_0] = (((126 ? 2523 : 25880)));
            arr_25 [i_0] &= 23175;
        }
    }
    var_25 = var_17;
    var_26 ^= var_17;
    #pragma endscop
}
