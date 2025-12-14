/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = (max(44288, 700035878249461337));
        var_15 += (max(0, (max(var_1, ((7 ? 0 : var_1))))));
        var_16 = (min(var_16, (((((((arr_2 [i_0]) ? 43362 : (min(var_3, var_0))))) ? var_10 : (min(((min(64810, var_1))), var_4)))))));
        var_17 = 4;
    }
    var_18 = 12263822070051488118;

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 = (((((((min(1, var_2))) ? var_12 : (arr_7 [i_1] [i_1])))) ? (((((min(1090, 65533))) >= 17746708195460090281))) : var_6));

        for (int i_2 = 4; i_2 < 22;i_2 += 1)
        {
            var_20 = (arr_5 [i_2]);
            var_21 = ((min(((max(4294922123, var_14))), (((arr_7 [i_1] [i_1]) + var_4)))));
            var_22 = ((min((arr_7 [i_1] [i_2 - 3]), 14)));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                var_23 = (min(var_23, (arr_10 [i_4] [i_1])));
                var_24 = var_7;
            }
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                var_25 -= ((33 * (var_4 > 2175)));
                var_26 = 65535;
                var_27 = (((arr_14 [16] [i_3] [i_3] [i_3]) ? 199 : (arr_10 [i_3] [i_1])));
                var_28 -= 65535;
                var_29 = (15 / 64809);
            }
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                arr_20 [i_1] [i_3] [i_3] = (((arr_18 [i_1] [i_3] [i_6]) ? (-9223372036854775807 - 1) : ((16 ? -3048961841891589355 : var_1))));
                arr_21 [i_1] [i_3] = 4294922121;

                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    var_30 = (((((32641 ? 34112 : 22174))) ? var_3 : var_8));
                    var_31 = (arr_11 [i_1]);
                }
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_32 = ((7721666680361837594 ? (64812 >= 4264077188) : var_1));
                arr_27 [i_1] [i_1] [i_8] = ((((var_14 ? 32459 : var_2)) ^ (3763384453 && 32661)));
            }
            arr_28 [i_1] [i_1] = (arr_15 [i_1]);
            var_33 = ((((30890098 ? 879145859 : 12348)) / 32892));
            var_34 = (max(var_34, (((3763384453 > (((var_3 ? (arr_8 [i_1]) : 71))))))));
        }
        var_35 = (((((48009 ? 50448 : 3763384453))) ? (min((min(var_5, var_13)), 4294967292)) : ((((!63) | ((1 ? 12393 : 2892)))))));
        var_36 = ((((-237815140644957523 > -241447528) % (min((arr_14 [i_1] [11] [i_1] [13]), 3763384453)))));
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        var_37 = ((((1 >= (((var_12 ? var_10 : 76))))) ? var_6 : (arr_30 [i_9])));
        var_38 = (max(((((60967 ? 19616 : 77)) & (((2147483647 <= (arr_7 [i_9] [1])))))), ((((max((arr_26 [i_9] [20] [i_9]), 0))) ? 1 : (min(-268435456, var_9))))));
        arr_31 [22] = var_7;
    }
    #pragma endscop
}
