/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 + 1] [i_0] = (((arr_1 [i_0]) >= ((((min((arr_0 [i_0 - 1]), var_1))) ? ((((arr_0 [i_0]) != var_5))) : (arr_1 [i_0])))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_0 + 1] [i_0] [i_1] = ((var_1 ? 12424925370136402898 : (arr_3 [i_0 - 1])));
            var_12 = (max(var_12, (((var_10 ? var_0 : (arr_1 [8]))))));
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        var_13 = (max(((max((min(-4893129047700621803, var_4)), var_0))), (((((var_2 ? (arr_9 [i_0]) : var_7))) ? (var_4 - var_5) : ((56082 ? 0 : (arr_5 [i_0] [i_0])))))));
                        var_14 *= ((!(var_6 + var_10)));
                        var_15 = (((((-28619 ? var_8 : var_1))) ? ((((((((arr_3 [i_3]) + 9223372036854775807)) << (56082 - 56082)))) ? (max((arr_3 [i_0 - 2]), var_11)) : (!54388))) : -21));
                        var_16 = (min(var_16, var_3));
                        var_17 = (((((((max(9453, -29534))) ? (((var_1 ? var_0 : (arr_9 [i_3])))) : (max(32, var_7))))) ? (((((((var_2 ? 13300950863917043024 : 17962))) || var_8)))) : (max(((max(var_8, var_4))), var_2))));
                    }
                }
            }
        }
        var_18 = (((((max((arr_14 [i_0] [i_0] [i_0] [i_0]), var_9)))) & (max(var_3, (max(1545817811, (arr_0 [i_0])))))));
    }
    for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            arr_20 [i_5 - 2] [i_6] = var_10;
            var_19 = (((((var_1 ? (arr_3 [i_5 - 2]) : (arr_3 [i_6])))) ? (-1737376667 + 1) : 60868));
            var_20 = (min((max(((var_1 ^ (arr_16 [i_6]))), (~40536))), ((-(var_4 * var_10)))));
            var_21 = (arr_17 [i_5] [i_6]);
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    {
                        var_22 ^= var_6;
                        arr_29 [i_5] [i_7] = ((((((arr_22 [i_5 - 2]) - (arr_22 [i_5 - 2])))) - (max(((var_0 ? (arr_25 [i_5 - 1] [i_5 + 1] [13] [i_5]) : 9459)), (arr_19 [i_9])))));
                        var_23 ^= var_4;
                    }
                }
            }
        }
    }
    var_24 = ((!(var_2 == var_10)));
    var_25 = 1058340138;
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                {
                    var_26 *= (max((~2761), (((-(((arr_4 [i_10] [i_10]) ? 13531 : (arr_14 [21] [21] [i_11] [i_10]))))))));
                    var_27 = (10410373210065649195 ? 7152953900285309955 : 3600911984);
                    var_28 *= (min((min(var_11, 3195)), 9358));
                    var_29 = (max(var_29, ((((((1860107009 ? var_5 : (arr_37 [i_10] [i_10] [i_12]))))) || (arr_8 [21])))));
                }
            }
        }
    }
    #pragma endscop
}
