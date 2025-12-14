/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_0 ? var_9 : -1066164753));
    var_17 = var_5;
    var_18 = ((((((var_1 + -32759) % (~var_13)))) ? (~var_11) : ((((32738 >= 311267586) || var_2)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_8;

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_7 [8] [8] [8] = ((254 ? (((arr_3 [8] [i_1] [i_0]) ? (arr_5 [i_0] [i_0]) : var_15)) : (arr_5 [i_0] [i_1])));
            arr_8 [i_0] = 17245105828296556279;
        }
        for (int i_2 = 3; i_2 < 23;i_2 += 1)
        {
            arr_11 [i_0] = var_14;
            arr_12 [i_0] = ((arr_5 [i_0] [i_0]) < -29935);
        }
        arr_13 [22] [10] = ((~((2147483647 ? 252 : var_6))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] = (var_0 && 2627942158);
        arr_17 [i_3] [i_3] = (arr_5 [1] [i_3]);
        arr_18 [17] = (arr_1 [2]);
        arr_19 [i_3] = (arr_9 [i_3] [i_3]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        arr_22 [i_4] = (~-128);
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 23;i_7 += 1)
                {
                    {
                        arr_32 [i_4] [i_5 - 2] [i_6] [i_6] [14] [i_5 - 2] = var_3;
                        arr_33 [i_6] [i_7 - 3] = (((arr_6 [i_7 - 2] [i_5] [i_5]) ? (arr_6 [i_7 - 1] [i_5] [i_7 - 2]) : (arr_31 [i_7 - 1] [i_6] [i_6] [i_5 + 2])));
                    }
                }
            }
        }
        arr_34 [i_4] = (29941 % -1066164727);
        arr_35 [i_4] = (((arr_20 [i_4] [i_4]) < -29930));
    }
    #pragma endscop
}
