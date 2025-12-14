/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((min((((var_8 ? var_2 : -4))), var_9)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = (((max(((7548893123733524404 ? var_0 : 3)), (arr_5 [i_0] [i_0]))) ^ (((arr_2 [6] [i_0]) - (-15344 & -31)))));
                    var_15 = (max(((max(-226281256259650696, (arr_0 [i_0] [i_1 + 2])))), (((-var_1 >= (arr_9 [i_0 + 1]))))));
                    arr_11 [i_0] [i_1 - 1] [i_2] [i_2] = ((((arr_7 [i_0 + 2] [i_1] [11] [i_1 - 1]) ? ((var_12 ? (arr_8 [i_0] [i_1 + 2] [12] [i_0]) : (arr_10 [11] [i_1] [i_2]))) : -15348)));
                    var_16 = ((((((arr_5 [i_1 + 2] [i_2 - 3]) ? (arr_5 [i_1 + 2] [i_2 - 3]) : (arr_5 [i_1 + 2] [i_2 - 3])))) ? ((7548893123733524403 ? (arr_5 [i_1 + 2] [i_2 - 3]) : (arr_5 [i_1 + 2] [i_2 - 3]))) : (arr_5 [i_1 + 2] [i_2 - 3])));

                    for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        var_17 = (arr_6 [i_0]);
                        var_18 = ((~((((((arr_8 [i_0] [12] [i_0] [i_0]) ? 31312 : 31319))) ? 1 : var_4))));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        var_19 = (17235 < -8);
                        var_20 &= -9;
                        var_21 = (((((var_6 + (arr_3 [i_0] [i_1])))) ? (!7548893123733524431) : 27930));
                        arr_19 [i_2] [6] [i_2] [i_2] = (((arr_18 [i_2]) ? (arr_18 [i_2]) : 30));
                    }
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            var_22 = -21;
                            var_23 = ((((min(27906, (min(var_9, (arr_20 [i_1 - 1])))))) ? ((-19 | (min((arr_26 [i_0] [i_1 - 1] [i_1 - 1] [11] [9] [i_6]), (arr_13 [2] [i_2 + 1] [13] [13]))))) : (arr_3 [i_0] [i_0 + 2])));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            var_24 = (arr_20 [i_0]);
                            var_25 |= (arr_24 [i_0 - 2] [i_1 + 2] [i_2 - 2] [0] [0] [i_7]);
                        }
                        var_26 = ((~(arr_7 [i_0] [i_1] [i_2] [i_5])));
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_27 = (((((((max((arr_21 [i_8] [i_1] [i_2] [i_0]), (arr_1 [i_1])))) ? (((arr_23 [i_0] [i_0] [i_2] [i_8]) - var_10)) : (((min((arr_31 [i_0] [3] [i_2] [1]), (arr_6 [i_2])))))))) || (arr_20 [i_2])));
                        var_28 = ((((((36 ? (arr_20 [i_0 + 2]) : var_4)))) >> (145 - 128)));
                        var_29 = (max(var_29, var_6));
                        arr_32 [i_2] [0] = -15354;
                    }
                }
            }
        }
    }
    var_30 = (max((~var_8), ((min(26489, ((var_3 ? var_9 : var_11)))))));
    #pragma endscop
}
