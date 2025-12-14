/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 63098;
    var_14 = (var_0 + var_11);
    var_15 = ((224 + (-2147483647 - 1)));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            arr_7 [i_0 + 1] [i_0 + 1] = 2437;
            var_16 = (!((var_11 && (~var_2))));

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_17 = (max(var_17, (!var_3)));
                            var_18 = -var_10;
                        }
                    }
                }

                for (int i_5 = 3; i_5 < 20;i_5 += 1)
                {
                    var_19 = 1333268693;
                    var_20 = (min(var_20, (((((-(arr_18 [i_5] [i_0 + 1] [i_0 + 1] [i_5])))) ? (-18724 - 171) : 1058947321))));
                    var_21 = ((~(!-18724)));
                    var_22 = (((arr_5 [i_5 + 1]) ^ 0));
                }
                arr_20 [i_0] [i_1] [20] [i_0] = (-2147483647 - 1);
                var_23 = (~2651881704);
                var_24 = 1058947323;
            }
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_25 = (min(var_25, var_0));
            var_26 = 8466430696747997056;
            var_27 ^= ((~(((arr_11 [5] [i_0 + 1] [i_0] [i_0 + 1]) ? (arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : 101))));
        }
        var_28 = (((max((arr_8 [i_0] [i_0] [i_0] [i_0]), (var_8 + var_1))) ^ (arr_23 [i_0 + 1] [i_0 + 1] [18])));
        var_29 = ((~((17545346091427921399 ? (var_12 < var_2) : ((~(arr_1 [i_0] [i_0])))))));
    }
    #pragma endscop
}
