/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (var_8 ? 4180964911 : var_4);
    var_11 = (((-9223372036854775807 - 1) >= ((((min(-9223372036854775800, 4180964893))) ? var_4 : var_8))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                arr_6 [i_1] [i_1] [i_1] [i_1] = (arr_5 [i_2]);
                var_12 = ((-(var_2 + var_7)));
                var_13 = ((((((arr_1 [i_0]) ? 72057589742960640 : -7367206187922781945))) ? (-9223372036854775807 - 1) : (-9223372036854775807 - 1)));
                arr_7 [i_0] [i_0] [i_0] [i_1] = (arr_5 [i_1]);
            }
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        {
                            var_14 *= ((var_0 ? ((9223372036854775785 >> (30114 - 30107))) : (~1587936872125165500)));
                            arr_17 [i_0] [i_1] [i_1] [i_4] [i_4] [i_3] = (((((var_1 ? 1 : var_3))) ? var_6 : ((((arr_3 [i_1] [i_1] [i_3]) & (arr_9 [i_0] [i_1] [i_1]))))));
                        }
                    }
                }
            }
            arr_18 [i_0] [i_0] = ((((var_4 > (arr_10 [i_0])))));
        }
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            arr_21 [i_6] [i_6] = (min((min(((-34 ? 6727430254286471829 : 1088407370609926666)), (min(var_3, var_7)))), ((((arr_2 [i_6 - 1] [i_0] [i_0]) / (max(545133645, -9223372036854775793)))))));
            var_15 = ((1 * (min((42438 * var_5), ((min(var_1, (arr_4 [i_0] [i_0] [i_6]))))))));
            var_16 = (max((min(((1352122688 ? 9223372036854775773 : var_4)), (min((arr_8 [i_0]), var_3)))), var_3));
            var_17 = ((9223372036854775806 ? 63 : 7559805980084829619));
            var_18 *= ((((((((arr_2 [i_6] [i_6] [i_0]) != var_9))) > (((1018496591807276160 != (arr_12 [i_6] [i_0] [i_0])))))) ? 1 : (((min(var_2, 2850957864953022491)) ^ (arr_20 [i_6])))));
        }
        var_19 &= (arr_8 [i_0]);
        var_20 = -9223372036854775774;
        arr_22 [i_0] [i_0] = (min((((((arr_14 [i_0] [i_0]) != var_6)) ? var_2 : var_6)), ((9223372036854775777 >> (((arr_4 [i_0] [i_0] [i_0]) - 23229))))));
    }
    #pragma endscop
}
