/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, ((max((((58113 ? 295810898 : 1))), ((((1 || (arr_0 [7]))) ? 1 : (max(-8672948916348864789, 1)))))))));
                    var_18 = (min(var_18, ((((arr_6 [i_0] [i_1] [i_0] [i_1]) ? (((((arr_7 [3] [1] [i_2]) || (arr_7 [15] [15] [i_2]))) ? (((max((arr_5 [i_0] [i_0] [i_0]), 1)))) : ((~(arr_7 [i_0] [13] [i_2]))))) : (min((204 + -8672948916348864789), ((((arr_1 [i_1] [i_1]) <= (arr_1 [21] [21])))))))))));
                }
            }
        }
    }
    var_19 = (~(max(var_9, var_5)));
    var_20 = ((var_1 % (((var_0 || (204 / 64833))))));

    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_12 [i_3] = ((1428480444 ? 9223372036854775790 : 8672948916348864806));
        var_21 = (arr_0 [i_3]);
        var_22 = ((((((((((arr_4 [i_3] [i_3]) >= 8672948916348864806))) == (~var_13))))) - ((~(arr_10 [1] [i_3])))));
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        arr_20 [i_3] [i_3] [i_5] [i_3] = (((52470 <= 6) * (arr_9 [i_6])));

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_23 [i_3] [1] [i_3] [i_5] [6] [1] [i_7] = (((((((max(var_13, (arr_19 [i_5] [i_5] [i_5] [i_5])))) == (arr_11 [i_3])))) >> ((((min(var_2, 1876))) + 26732))));
                            var_23 = (min(((1 * (((arr_9 [i_5]) ? (arr_1 [i_4 + 2] [5]) : (arr_14 [i_7] [i_6] [12]))))), (max((((arr_8 [i_7]) << (var_9 + 5295461587480594215))), (arr_11 [i_3])))));
                            var_24 = ((~((+(max((arr_18 [i_7] [i_6] [i_4] [i_3]), var_0))))));
                        }
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_25 = (max(var_25, 58115));
                            var_26 = ((+((+(((arr_21 [i_3] [i_4 - 3] [i_4 - 3] [i_4 - 3] [i_8]) % 121))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
