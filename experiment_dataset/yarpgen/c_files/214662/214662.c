/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {

                        for (int i_4 = 4; i_4 < 20;i_4 += 1)
                        {
                            var_11 = (min(2064064552, ((min((arr_9 [i_0] [i_1] [i_2 - 1] [i_0] [i_4]), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_4 - 3]))))));
                            var_12 = ((((((arr_10 [i_1] [16] [i_2] [i_2]) ? (arr_9 [i_2 + 1] [i_2] [i_2] [i_0] [i_2 + 1]) : (arr_2 [i_2] [i_0] [i_2])))) ? (arr_2 [i_2] [i_0] [1]) : (var_3 + 2230902744)));
                            arr_14 [i_0] [i_0] [i_2] [i_0] [i_4 - 1] = var_9;
                            arr_15 [i_0] = ((-376831196 > (min((arr_10 [14] [i_2 + 1] [i_2 - 1] [i_4 - 1]), 4127238638))));
                            var_13 += min((arr_6 [i_0] [i_3] [i_3] [i_0]), (max((((arr_1 [i_3]) ? 5135478062363486786 : 9223372036854775807)), 3484154925039330897)));
                        }
                        arr_16 [i_3] [i_3] &= (arr_1 [i_3]);
                    }
                }
            }
        }
        var_14 = (arr_4 [i_0] [i_0] [i_0]);
        arr_17 [i_0] [i_0] = ((~(arr_5 [i_0])));
        arr_18 [i_0] = (min(((((min((arr_8 [i_0] [i_0] [i_0] [1]), 926517541))) ? ((var_5 ? 0 : (arr_6 [i_0] [i_0] [i_0] [i_0]))) : 1381576020)), 17));
    }
    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        arr_21 [i_5 - 1] [7] = ((min((min(-4427, var_9)), (1 > var_2))));
        var_15 = ((((((((max(8190472814171582441, 255))) && (((var_6 ? var_4 : -80))))))) + (min((arr_3 [i_5] [i_5 - 2]), (arr_3 [i_5] [i_5 - 2])))));
        var_16 = (min(var_16, var_8));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_17 += ((-(((arr_19 [i_6] [i_6]) ? var_6 : 65528))));
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 9;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                {
                    var_18 += var_2;
                    arr_30 [i_6] = ((var_3 ? ((var_2 << (var_5 - 18237536219406617065))) : (((arr_23 [i_7 + 2] [i_6]) >> (((((arr_8 [i_6] [9] [9] [i_8]) ? var_4 : 13)) - 212211018))))));
                    arr_31 [i_6] [i_6] [i_6] [1] = (max(var_8, (min((~var_6), var_3))));
                    var_19 += var_9;
                    arr_32 [i_6] = var_9;
                }
            }
        }
        var_20 = (max(var_20, -4));
        var_21 = 5992471433022807970;
    }
    var_22 = ((((min((!var_4), -4427))) ? ((3348836253 ? ((max(var_8, var_1))) : var_7)) : ((min(((~(-9223372036854775807 - 1))), var_8)))));
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                {
                    arr_40 [i_9] [11] [i_11] [i_11] = ((~(((219 != (((arr_8 [20] [i_10] [i_10] [i_11]) & 1)))))));
                    var_23 = (min(var_23, ((((var_9 + 2147483647) << (((((var_8 & 2134126) ? (((arr_11 [i_9]) ? 2230902755 : (arr_5 [i_9]))) : ((4294967271 << (var_2 - 30))))) - 2230902755)))))));
                    var_24 += (arr_6 [i_10] [i_10] [8] [i_10]);
                    var_25 += (arr_1 [16]);
                }
            }
        }
    }
    #pragma endscop
}
