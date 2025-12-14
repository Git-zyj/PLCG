/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = ((!(((~((255 >> (((arr_3 [i_1]) - 184)))))))));
                var_19 -= (max(((max(0, (min(var_16, (arr_1 [i_0] [i_1])))))), (var_17 + -2147483645)));
                var_20 = (min(var_20, (((!(((min(var_8, (arr_2 [i_0]))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_21 = (((((max(1, var_4))) < (var_15 * var_4))));
                            var_22 = ((-((min((arr_2 [i_0]), (((arr_7 [i_0] [i_1]) < 1)))))));
                            var_23 = var_10;
                            var_24 ^= ((-(((((max((arr_4 [i_1] [i_1] [i_0]), 1))) || (((1995090767 << (arr_2 [i_0])))))))));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
    {
        var_25 = ((-(max(var_3, (((arr_8 [i_4] [i_4] [i_4 + 2] [i_4] [i_4]) / 1))))));
        var_26 = (((((var_5 != (max(127, (arr_9 [i_4] [i_4])))))) > (18142 ^ 1073741823)));
        var_27 = (max(((max((arr_12 [i_4 + 1]), var_2))), var_1));
    }
    for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_28 = (!(((-(arr_12 [i_5])))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_20 [i_5] [i_6] = (!(~var_3));
                    var_29 -= (max(1, (67 - -276)));
                }
            }
        }
        var_30 = (min(var_30, (((~((max((arr_8 [i_5 + 1] [i_5] [i_5 - 1] [i_5] [i_5 + 1]), 32760))))))));
    }
    for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
    {
        arr_23 [i_8] [i_8] = (max(1, 524287));
        arr_24 [i_8] = (max(1, (max(((-(arr_0 [i_8 + 2] [i_8]))), (((~(arr_1 [16] [i_8 + 1]))))))));
    }
    for (int i_9 = 2; i_9 < 10;i_9 += 1)
    {
        arr_27 [i_9 - 2] [i_9] = (min(((((!(arr_17 [i_9] [i_9] [i_9]))))), (-283 & 255)));
        var_31 = (max(var_31, ((max((((((max(27736, var_10))) >= var_14))), (min(((max(129, (arr_16 [i_9] [i_9] [i_9])))), -9913607492572803054)))))));
    }
    #pragma endscop
}
