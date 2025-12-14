/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 -= (-56 - 102);
        var_12 = -103;
        arr_2 [i_0] = min(var_2, (min(123, 45)));
        var_13 -= var_1;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_14 *= ((((!(arr_0 [i_1])))));
            var_15 ^= -var_5;
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_16 = (max(var_16, (~126)));
            var_17 -= (!124);

            /* vectorizable */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_18 [i_2] [i_0] [i_0] [i_2] = (((((((arr_1 [i_2] [i_2]) + 2147483647)) >> (var_7 - 20))) >= (arr_15 [i_0] [i_0] [i_5 + 2] [i_4] [i_5 + 1] [i_0] [i_4])));
                            var_18 = (max(var_18, ((((arr_14 [i_0] [i_2] [i_3] [i_3]) ? (arr_14 [i_0] [i_2] [i_3] [i_5 + 2]) : 108)))));
                        }
                    }
                }
                var_19 = (max(var_19, (((((((arr_6 [i_0] [i_0]) && 55))) << ((((arr_4 [i_2] [i_2]) && -26))))))));
                arr_19 [i_2] [i_2] [i_2] [i_3] = (arr_15 [i_0] [i_0] [i_2] [i_2] [i_0] [i_3] [i_3]);
            }
        }
    }
    var_20 ^= var_8;
    var_21 = (min(var_21, (max(var_6, (max(var_4, var_1))))));

    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_22 = (min(var_22, (((((var_0 == ((max(-71, var_10))))))))));
        arr_23 [i_6] = ((((max((-127 - 1), 15))) ? -60 : -68));
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 20;i_7 += 1)
    {
        var_23 = (max(var_23, var_9));
        arr_28 [i_7] = (arr_26 [i_7 + 3] [i_7 + 3]);
        var_24 = (!120);
    }

    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        var_25 = (max(((-83 ? 64 : 91)), ((min(var_4, (arr_32 [i_8] [i_8]))))));
        arr_33 [i_8] = (40 >= -114);
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                {
                    var_26 ^= (((arr_39 [i_10]) >> (((~var_0) + 40))));
                    var_27 = ((15 ? (6 && 65) : 3));
                }
            }
        }
    }
    #pragma endscop
}
