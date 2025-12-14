/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    var_21 -= ((!(3350680776 + var_8)));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_22 *= (((arr_0 [i_0]) ? (arr_0 [i_0 - 1]) : (max((max((arr_0 [i_0]), (arr_1 [i_0 + 1]))), var_18))));
        arr_2 [i_0] &= (arr_1 [4]);
        var_23 = (((~-14653) >= (arr_1 [i_0 + 1])));
        var_24 *= (-6133291472743504083 == 175);
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_25 = max((min(-2008381627465116912, (arr_0 [i_1 + 1]))), (((max(var_14, 220)) - (arr_1 [i_1 + 2]))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 18;i_4 += 1)
                {
                    {
                        arr_13 [i_4 - 3] [i_4 - 3] [i_1] [6] = 93;

                        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_26 = ((((!(arr_5 [i_2 - 1] [i_2 - 1]))) ? 1 : (min(29017, ((~(arr_7 [i_1 - 1] [i_2 - 1])))))));
                            arr_16 [i_1] [i_2] [i_2] [16] [i_1] = ((+(((!((max((arr_5 [4] [i_5]), (arr_9 [i_1])))))))));
                            var_27 = -275909334314206447;
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            var_28 = 80;
                            var_29 = (max(var_29, ((((~(arr_12 [i_1 + 2] [i_1 + 1] [i_3] [i_4 - 1] [i_4 + 2])))))));
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            var_30 = ((!(arr_3 [i_1 - 1])));
                            var_31 = (arr_24 [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1]);
                            var_32 = ((var_11 < (!var_14)));
                        }
                    }
                }
            }
        }
        arr_25 [i_1] = ((((((arr_0 [i_1 - 1]) != (arr_5 [i_1 - 1] [i_1])))) << (((arr_1 [i_1]) - 14784))));
        var_33 = (min((((arr_21 [i_1] [i_1 + 2] [4] [i_1 + 1] [i_1 + 1]) ? -7945605212372716528 : (arr_21 [i_1] [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 + 1]))), (((~((var_4 ? 1 : var_9)))))));
        var_34 = 6629441608018134296;
    }
    #pragma endscop
}
