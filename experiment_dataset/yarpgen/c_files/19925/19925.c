/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_4, (((((max(-3080, var_7))) ? ((max(var_3, -56))) : ((max(var_6, var_6))))))));
    var_12 = (min((min((var_1 % var_1), ((3079 ? -3080 : var_7)))), (min(((var_4 ? var_3 : var_3)), var_5))));
    var_13 = var_0;
    var_14 |= ((((max((~var_7), ((min(var_9, var_6)))))) && ((((max(var_7, 1100915800)) & (((var_0 ? -3085 : var_7))))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = (arr_2 [i_0]);
        var_15 = (min(var_15, (min((min(((max(var_7, var_7))), ((1565051921 ? 2429711502 : (arr_2 [i_0]))))), (min((max((arr_1 [14]), (arr_1 [18]))), (arr_2 [i_0])))))));
        var_16 = (min((arr_3 [i_0]), (min(3071, (arr_0 [i_0])))));
        arr_5 [i_0] [i_0] = 536868864;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_17 ^= (~0);
        var_18 = (((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1])));
        var_19 = arr_2 [i_1];
        arr_9 [i_1] &= ((13826054149399615710 <= (arr_6 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_20 ^= 1;
                    arr_17 [i_2] [0] [i_2] [i_2] = (~2008617918);
                    var_21 = -var_9;
                }
            }
        }
        arr_18 [i_2] = var_2;
        arr_19 [2] = (((arr_1 [i_2]) | (arr_1 [i_2])));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        var_22 = (((arr_13 [i_6] [i_6] [i_6 - 2]) ? (arr_13 [i_6] [i_6] [i_6 - 2]) : (arr_20 [i_6] [i_6] [i_6 - 2])));
                        var_23 |= 58;
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_24 |= min((((min(var_6, (arr_11 [i_8]))) ? 7641 : (arr_1 [8]))), -5520);
        var_25 = (arr_24 [i_8] [3] [i_8] [i_8] [i_8]);
        arr_29 [i_8] = (max(((((arr_0 [1]) && var_1))), (min(0, ((min(var_1, (arr_3 [8]))))))));
        var_26 ^= (min((min(((-(arr_16 [i_8] [i_8] [i_8]))), ((((arr_13 [i_8] [i_8] [10]) >= -24133))))), var_5));
        var_27 = (((arr_20 [i_8] [i_8] [i_8]) > (max((arr_20 [i_8] [i_8] [i_8]), (max(var_1, (arr_7 [i_8] [i_8])))))));
    }
    #pragma endscop
}
