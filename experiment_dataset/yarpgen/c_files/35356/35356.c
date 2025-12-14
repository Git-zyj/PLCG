/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_19 = (arr_4 [i_0 + 1] [i_0 - 4]);
            var_20 = (min(var_20, (((-((var_14 ? 4294967295 : -446195794)))))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_14 [i_0] [i_0] = ((~(18446744073709551615 && 157)));
                        var_21 = 9223372036854775807;
                    }
                }
            }
            var_22 = ((((((!206) != ((min((arr_7 [i_2]), 65518)))))) > ((var_13 ? (!18011) : (arr_5 [i_0] [i_0 - 1])))));
            var_23 = (1 / 1023);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            arr_18 [i_0] = (!18446744073709551615);
            var_24 &= ((-(arr_0 [i_0 - 4] [i_5])));
            var_25 = (((arr_3 [i_0 - 4]) ? (!18446744073709551615) : var_3));
        }
        var_26 = ((((min((206 | 50), (3791170 | 50)))) ? (((~((var_12 ? 113 : 65535))))) : ((((min((arr_13 [5] [5] [i_0] [5]), 1))) ? (min(var_9, (arr_1 [i_0]))) : (arr_5 [i_0] [i_0])))));
        arr_19 [i_0 - 2] [i_0 - 2] = (~((var_11 * ((min(var_1, (arr_4 [i_0] [i_0])))))));
        var_27 &= ((((((((((arr_2 [i_0 - 3] [i_0 - 3] [i_0 - 3]) > var_6)))) < ((32767 ? 1023 : var_7))))) == (((4399642846653067738 <= 394704348) ? 10911745730441274558 : (min(2141790306, -57))))));
    }
    var_28 = (min(var_28, var_14));
    #pragma endscop
}
