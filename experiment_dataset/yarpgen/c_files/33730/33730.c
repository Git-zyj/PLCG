/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (184 ? var_4 : -3223);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 = (((((-1372240324 - var_7) < (((var_11 || (arr_2 [i_0] [i_0])))))) ? ((((1 < var_0) ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0])))) : (((((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : var_12)) - (arr_0 [i_0])))));
        var_22 = ((~(((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))));
        var_23 = -8771373025776516258;
        arr_3 [i_0] = (min((!6997378545246727616), ((~((-8771373025776516286 ? var_6 : (arr_0 [i_0])))))));
    }
    for (int i_1 = 4; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] = ((17671219812274056407 >> (((arr_1 [i_1] [i_1 + 1]) + 3271880544649428484))));

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            var_24 = (max(var_24, ((((((arr_4 [i_1 - 4]) ? (arr_5 [i_2 + 1]) : (((arr_4 [i_2]) ? (arr_0 [i_2 + 1]) : (arr_4 [i_2 + 1]))))) < ((min((arr_0 [i_1 - 3]), (arr_0 [i_1 - 3])))))))));
            arr_9 [i_1] = 62381;

            for (int i_3 = 1; i_3 < 23;i_3 += 1)
            {
                arr_12 [i_3] = (((((arr_7 [i_1 + 1]) + 9223372036854775807)) >> (11458348037256147175 + 1183682354)));
                var_25 &= ((((1269412228 > (arr_8 [i_1 - 4]))) || (~125)));
            }
            /* vectorizable */
            for (int i_4 = 2; i_4 < 23;i_4 += 1)
            {

                for (int i_5 = 3; i_5 < 23;i_5 += 1)
                {
                    arr_17 [i_4] [i_2 + 1] [i_2 + 1] [i_1 + 1] = ((arr_14 [i_4 - 1]) ? ((var_12 ? 53 : var_8)) : (var_0 ^ var_4));

                    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_1] [i_2] [i_4] [i_5] [i_4 - 2] = 6997378545246727609;
                        var_26 ^= (((arr_16 [i_1 - 2] [i_1 - 4] [i_1 - 4] [i_1 - 4]) < (arr_16 [i_1 - 2] [i_1 - 4] [i_1 - 3] [i_1 - 4])));
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_18 [i_4 + 1] [i_4 + 1] [i_4] [i_5] [i_7] [i_1 - 3] [i_5 - 1]);
                        var_27 = (((arr_2 [i_2 + 2] [i_2 + 1]) != (arr_2 [i_2 + 1] [i_2 + 2])));
                        var_28 &= ((-(arr_2 [i_2 + 1] [i_2])));
                    }
                }
                arr_26 [i_1 + 1] [i_2 - 1] [22] [i_2] = ((-(((60734 > (arr_11 [i_1] [i_2 + 1] [i_2 + 1]))))));
            }
            var_29 = (max(var_29, (((((min((arr_19 [i_2 + 2] [i_2] [i_2 - 1] [i_2 + 1] [i_1 + 1] [i_1] [i_1]), (arr_11 [i_1 - 4] [i_1 - 1] [i_2 + 1])))) ? (((arr_20 [i_1] [22] [10] [i_1] [i_1 - 3] [i_2 + 1] [i_2 + 2]) % var_1)) : ((((max((arr_1 [i_1] [i_1]), var_14)) != 21))))))));
            var_30 &= ((var_12 <= (((arr_16 [i_2 + 1] [0] [i_2] [i_1 - 2]) ? (arr_8 [i_2 + 1]) : (arr_22 [i_2 + 1])))));
        }
        var_31 = (arr_24 [i_1] [0] [i_1 - 1] [i_1] [i_1]);
        var_32 = (min(var_32, ((((min(-8080219092689812173, ((max(var_14, (arr_10 [i_1] [i_1]))))))) ? ((((max((arr_13 [i_1] [i_1] [i_1]), (arr_5 [i_1])))))) : ((var_2 ? var_14 : (arr_1 [i_1 + 1] [i_1 - 2])))))));
    }
    #pragma endscop
}
