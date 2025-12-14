/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((~(((!(~57))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (((((((min(147, var_13))) || (arr_0 [i_0 - 1] [i_1])))) == (~111)));
                var_19 = (((arr_2 [i_1]) != ((((max((arr_1 [i_0]), (arr_3 [i_1])))) ? (arr_2 [i_1]) : ((((arr_0 [i_0] [i_0]) == (arr_6 [1] [10]))))))));
                var_20 |= ((~(arr_3 [i_0])));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_21 = 111;

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_22 = (arr_10 [i_2] [i_3]);
            var_23 = ((((!(arr_8 [i_2])))));
            var_24 = (((arr_11 [i_2]) >= 145));
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_25 = (((60726 ? -42 : 111)));
            var_26 = (arr_9 [i_2]);
            var_27 = 145;

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_28 = (arr_18 [10] [i_4] [10]);
                var_29 = ((~(arr_18 [i_2] [i_4] [i_5])));
                arr_19 [i_2] [i_4] [i_5] = 28040;

                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    var_30 = ((var_9 != ((97 + (arr_21 [i_6])))));
                    var_31 = (!62667);
                    var_32 |= (arr_15 [i_2] [i_4] [i_5]);
                }
            }
        }
        arr_23 [i_2] = var_13;
        var_33 = (max(var_33, (arr_7 [i_2] [i_2])));
    }
    var_34 = var_14;
    #pragma endscop
}
