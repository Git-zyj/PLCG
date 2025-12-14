/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = (max(var_15, var_0));
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] = 10;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                {
                    var_16 += (var_5 | (var_1 * var_6));
                    arr_14 [i_2] [i_2] = (arr_11 [i_2]);
                }
            }
        }
        arr_15 [5] [i_1] = var_0;

        for (int i_4 = 4; i_4 < 12;i_4 += 1)
        {
            var_17 = (max(var_17, var_10));
            arr_20 [i_1 - 1] [i_4 - 4] = ((!(arr_9 [i_1 + 1] [i_4 + 1])));
            var_18 = (arr_6 [i_4 - 1] [i_4 + 1]);
            var_19 ^= ((var_12 > (arr_8 [i_1 - 1] [i_4 - 3])));

            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                var_20 = 45718;
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_21 = var_0;
                            arr_29 [i_7 + 1] [i_6] [i_5] [i_4] [i_1] = ((899690806 ^ 3011079596845862086) + var_9);
                            arr_30 [i_1] [4] [i_5] [i_6] [i_7] = var_6;
                            arr_31 [i_1] [i_4 + 1] = var_10;
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                var_22 = ((var_3 >> (var_1 - 3243311113)));
                var_23 = (max(var_23, (arr_11 [i_8])));
                var_24 = (min(var_24, (arr_22 [i_1] [i_1 + 2] [i_1 + 2] [i_1])));
                var_25 = ((3032780184 ? 7250214381683820354 : 15435664476863689519));
                var_26 *= 4224846218671945230;
            }
        }
        var_27 = (min(var_27, (var_4 + var_1)));
    }
    for (int i_9 = 1; i_9 < 21;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            arr_41 [i_9 + 1] [i_10] &= 0;
            var_28 = max((5246 * var_3), (min(var_7, 15435664476863689528)));
            arr_42 [i_9 + 2] [i_10] = (((arr_36 [i_10]) < var_12));
        }
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            var_29 = (max(var_29, (max(((min(48007, var_10))), (max(46671, 28014))))));
            /* LoopNest 3 */
            for (int i_12 = 1; i_12 < 21;i_12 += 1)
            {
                for (int i_13 = 4; i_13 < 22;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 22;i_14 += 1)
                    {
                        {
                            arr_52 [i_11] [i_11] [i_12] = var_11;
                            arr_53 [6] |= ((((~(max(var_2, 0)))) ^ ((~(max(2220048932, var_1))))));
                        }
                    }
                }
            }
            arr_54 [i_9] [i_11] = (~var_1);
            arr_55 [i_9] [6] &= (!56636);
        }
        var_30 = (min(var_30, (((47999 ? 34110 : (arr_51 [i_9] [i_9 + 1] [i_9] [i_9 - 1] [16]))))));
    }
    var_31 += var_3;
    #pragma endscop
}
