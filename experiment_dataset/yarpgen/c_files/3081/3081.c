/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_9;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((((min(42807, 64212))) + (((arr_1 [12] [12]) ? var_10 : var_1))))) ? (arr_1 [i_0] [i_0]) : (((((arr_1 [i_0] [i_0]) > var_16))))));
        var_18 = arr_0 [i_0] [i_0];
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_15 [i_1] [i_1] [i_2] [i_1] [i_3] [18] = ((57838 | ((((arr_10 [i_1] [i_1] [i_1] [i_1]) == (arr_10 [i_1] [i_1] [i_1] [i_1]))))));
                        var_19 ^= ((min(((57838 ? 31086 : 57838), 57849))));
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        var_20 = ((4095 ? (((arr_17 [13]) ? ((max((arr_12 [12] [i_2] [12] [12]), (arr_9 [i_2] [i_2] [i_2])))) : ((7697 ? (arr_3 [i_3] [i_1]) : 0)))) : (min(((var_5 ? (arr_1 [3] [i_2]) : 44932)), ((30910 ? 37729 : 62606))))));
                        var_21 -= ((((((!(arr_4 [i_1] [0]))))) ? (((arr_8 [i_1] [15]) ? var_3 : (arr_8 [i_5] [i_2]))) : (((!var_8) ? (arr_12 [i_1] [17] [7] [16]) : -65535))));
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        var_22 = ((var_10 ? (arr_6 [i_1]) : 56065));
                        arr_21 [i_1] [i_2] [i_6] [i_6] = (((((!7375) || ((((arr_0 [i_3] [i_3]) ? (arr_11 [17] [i_2] [i_3]) : (arr_14 [i_3])))))) && ((((((var_15 ? 3 : 64736))) ? var_13 : ((27296 ? var_4 : 33055)))))));
                    }
                    var_23 = ((0 ? (var_9 & 31744) : (58038 / 65535)));
                }
            }
        }
        arr_22 [i_1] = (min(((((var_12 ? var_5 : 65535)) << (((arr_3 [i_1] [i_1]) - 13613)))), ((2863 ? (arr_4 [i_1] [i_1]) : (arr_11 [i_1] [i_1] [i_1])))));
    }
    var_24 = 49375;
    #pragma endscop
}
