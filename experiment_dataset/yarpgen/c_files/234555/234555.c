/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((max((((~(!var_15)))), (max(((var_14 >> (var_12 - 85))), var_17)))))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        var_19 = (max(var_19, ((((((((var_11 ? (arr_0 [i_0 + 1] [i_0 + 1]) : (arr_0 [i_0] [i_0])))) ? (max(var_13, var_7)) : (arr_0 [i_0 + 1] [i_0]))) == ((-(arr_0 [i_0] [i_0]))))))));
        arr_3 [i_0] = (max(var_16, 1));
        var_20 |= ((-(max((var_9 | 1), (((arr_0 [i_0] [i_0]) | var_14))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        var_21 ^= 27;
        var_22 += (arr_4 [i_1]);
        arr_8 [i_1] = var_13;
        var_23 = var_11;
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 7;i_4 += 1)
            {
                {
                    var_24 -= ((min(3933873102313332949, 11037860430142771064)) % ((((arr_9 [i_2 + 1] [i_2 + 1]) ? (arr_14 [i_2 + 1] [i_2 + 1]) : (arr_9 [i_2 + 1] [i_2 + 1])))));
                    var_25 = (((((arr_7 [i_2 + 1]) ? (arr_13 [i_2 + 1] [i_2 + 1]) : (arr_2 [i_2 + 1]))) ^ ((((max((arr_13 [i_3] [i_3]), 0)) <= (((((arr_9 [i_2] [i_2]) && (arr_2 [i_4]))))))))));
                    var_26 &= (((((((1 ? 2 : (arr_12 [i_2])))) ? (!1039266760) : ((var_7 ? var_14 : var_8)))) < var_17));
                }
            }
        }
        arr_16 [i_2 + 1] = ((((-(max((arr_4 [i_2]), var_9)))) << (((max((((arr_5 [i_2 + 1]) + (arr_4 [i_2]))), (3977221363 - 221))) - 3977221114))));
        var_27 = var_11;
    }
    #pragma endscop
}
