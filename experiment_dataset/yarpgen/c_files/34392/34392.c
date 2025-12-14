/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (min((4410148313921166880 & -7714777854993921410), (~var_4)));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_4 [i_0] = -var_8;
            var_14 = (min(var_14, var_5));
        }
        var_15 &= ((~(max((var_9 - var_12), (arr_3 [i_0])))));
        arr_5 [i_0] = ((+(((arr_1 [i_0] [i_0]) ? ((var_11 ? var_7 : (arr_2 [i_0] [15]))) : (arr_0 [i_0])))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_16 = arr_7 [i_2] [i_2];
        var_17 = (arr_6 [i_2] [i_2]);
        var_18 = (((((4410148313921166880 ? 4410148313921166880 : 14036595759788384747))) && (((arr_7 [i_2] [10]) || (arr_7 [i_2] [i_2])))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_19 = var_4;

        /* vectorizable */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_20 = (~var_10);
                var_21 = var_9;
                var_22 = var_5;
                var_23 = (arr_15 [i_3]);
            }
            for (int i_6 = 2; i_6 < 21;i_6 += 1)
            {
                var_24 -= (((arr_15 [i_4]) && var_2));
                var_25 = ((((arr_16 [i_6 + 2] [17] [i_4] [i_3]) + (arr_13 [i_3] [i_4] [i_6]))) - var_9);
                var_26 = (min(var_26, (arr_14 [i_3] [0] [0] [i_4])));

                for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                {
                    var_27 = (~4410148313921166855);
                    var_28 = (arr_17 [i_3] [i_3]);
                    var_29 = ((-((var_8 << (var_2 - 18)))));
                }
                for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                {
                    var_30 = ((-(arr_16 [i_6 - 2] [i_6 - 1] [i_6 + 2] [i_6])));
                    arr_25 [i_3] = arr_12 [i_3];
                    var_31 *= (arr_12 [i_6 - 2]);
                    arr_26 [i_3] = (arr_23 [i_6]);
                    var_32 = (min(var_32, (arr_12 [i_8])));
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_31 [i_3] [i_6 + 1] [i_3] = ((-(arr_16 [i_3] [i_4] [7] [i_9])));
                    var_33 = (arr_9 [i_3]);
                }
            }
            var_34 = ((!(arr_17 [i_4] [i_3])));
            var_35 &= (arr_18 [i_4] [i_3]);
            var_36 = (arr_16 [i_3] [i_3] [i_3] [i_4]);
        }
    }
    var_37 = (((((~var_12) << (min(var_0, var_2)))) ^ var_4));
    var_38 = (((((var_2 + var_2) ? (max(var_12, var_8)) : (((var_12 ? 32 : 2948451478513615993))))) != var_12));
    #pragma endscop
}
