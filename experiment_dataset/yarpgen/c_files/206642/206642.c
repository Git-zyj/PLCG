/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= ((~(((~3625174705) ? (~var_13) : (((min(190, 1))))))));
    var_17 += ((var_14 ? (max((max(var_11, var_7)), ((max(var_0, var_12))))) : var_10));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = (!2097002270);
        var_19 = var_13;
        arr_3 [i_0] = 65;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 = (arr_4 [i_1]);
        var_21 = ((9 ? ((65 ? 191 : 9223372036854775805)) : -31633));
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        arr_8 [i_2 - 1] [i_2] = -1;
        arr_9 [i_2] = var_8;
        var_22 = (((((var_2 ? var_3 : (arr_6 [i_2])))) ? (min(-1, 4294967295)) : (((var_3 ^ (arr_6 [i_2]))))));

        /* vectorizable */
        for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
        {
            arr_14 [i_2] = (((arr_13 [i_2 + 1] [i_2 + 2] [i_2 + 3]) + (arr_11 [i_2 + 4] [i_2 + 1] [i_2 + 3])));

            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_23 = ((~((-307315443452842201 ? 66 : -30))));
                            var_24 ^= 1;
                            arr_22 [i_2] [i_2 + 4] [i_2] [i_2] [i_2] = (((arr_10 [i_2] [i_2]) << (var_5 - 26094)));
                            var_25 ^= (((var_8 && 65) && ((((arr_19 [i_2] [1] [i_4] [1]) ? var_1 : 4294967295)))));
                        }
                    }
                }
                var_26 = var_1;
                arr_23 [i_3 + 1] [i_2] = (-1 ? 6 : 233);
                var_27 = (var_3 > (14920999 ^ 68));
            }
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 21;i_7 += 1) /* same iter space */
        {
            var_28 = ((-(arr_17 [i_2] [i_2] [i_7 - 1] [i_7 + 1])));
            arr_28 [i_2 + 1] [i_7 + 1] = (~var_5);
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 21;i_8 += 1) /* same iter space */
        {
            var_29 = (((~68) & 27));
            arr_31 [i_2] [i_8] [i_8] = ((~(arr_13 [i_2] [i_8 - 1] [i_2 + 1])));
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 21;i_9 += 1) /* same iter space */
        {
            arr_34 [i_2] [i_9 + 1] [i_9] = ((~(~15108)));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            arr_42 [i_10] [i_9] [i_10] [i_10] [i_12] [i_2] [i_12] = (((-1 ? -1 : -40)));
                            var_30 = var_14;
                            arr_43 [18] [i_9] [i_9] [i_9] [i_11] [i_12] = (~127);
                        }
                        var_31 *= var_14;
                        var_32 = (arr_18 [i_9 - 1] [i_2 + 1]);
                        var_33 = (((arr_33 [i_2 + 2] [i_2 - 1] [i_9 - 1]) % (arr_33 [i_2 + 1] [i_2 + 2] [i_9 + 1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
