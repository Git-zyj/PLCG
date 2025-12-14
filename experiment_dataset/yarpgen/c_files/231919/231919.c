/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_10 ^ 2389740761918705952);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_12 [i_0] [i_1] [i_2] [14] = var_2;
                    var_18 = (min((min((arr_7 [i_1 - 2] [i_0 + 2]), var_3)), ((((arr_0 [i_0] [i_2]) > ((min(0, var_1))))))));
                    var_19 += ((0 ? -2389740761918705950 : 524287));
                    var_20 += (min(((min(var_1, ((var_9 - (arr_7 [i_1 - 2] [i_1 + 1])))))), (max((arr_10 [i_2] [i_0] [i_0]), (arr_5 [i_2] [i_1 - 2])))));
                    arr_13 [i_2] [i_2] [i_2] [i_2] = (max((((-2389740761918705926 != ((0 ? (-127 - 1) : 0))))), 549647854));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    arr_17 [i_0] [i_0] [i_1] [1] = (max((((0 ? 1 : -90))), ((59158 ? -1 : 0))));
                    arr_18 [13] [13] [13] = ((+(((arr_10 [8] [i_0] [i_0]) ? ((var_13 ? var_10 : 65535)) : var_11))));
                }
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    arr_23 [14] [i_1 - 2] [18] = min(-0, var_15);

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_21 = ((var_1 ? (min(((max(-103, -44))), 2199019061248)) : (-26 - var_5)));
                        var_22 = min(((((max(0, 18446741874690490365))) ? 11601 : 0)), 830188719);
                        var_23 = ((!((((((var_12 * (arr_10 [i_4 + 2] [i_1 + 2] [i_4])))) ? var_6 : (var_0 * 34751))))));

                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            var_24 = ((((!(arr_14 [i_0 + 1] [i_1 + 1])))));
                            var_25 = 18446741874690490365;
                        }
                    }
                }
                var_26 = (((((var_7 + (-830188720 - -830188720)))) ? (((+(((arr_4 [i_0] [i_1] [i_0]) ? (arr_7 [i_1] [i_0]) : -29))))) : (arr_16 [i_0] [i_0] [14] [i_1])));
            }
        }
    }
    var_27 = max(var_10, ((-((max(86, 42))))));
    var_28 = (((((((1010 ? var_3 : 0))) || var_13)) && var_14));
    var_29 = var_14;
    #pragma endscop
}
