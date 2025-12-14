/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                var_16 &= (((arr_11 [i_0] [i_1 + 1] [6] [i_3]) > var_5));
                                var_17 = ((((arr_3 [i_0]) >= (arr_14 [i_0] [i_1] [i_2] [i_3] [5]))));
                            }
                            arr_16 [i_1] [i_1 + 2] [i_2] [6] = (18446744073709551615 ? (((arr_11 [i_1 - 1] [0] [i_1 + 1] [i_2]) ? (arr_11 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1]) : (arr_11 [i_1 + 1] [i_1] [i_1 + 1] [i_3]))) : (((~((7 ? 602623314 : (arr_12 [i_0] [i_1] [i_2] [i_2] [18] [i_3])))))));
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_18 = 27678;
                    var_19 = (max((((var_4 ? ((((arr_17 [i_1]) ? (arr_9 [i_0] [i_1] [i_5] [i_1]) : (arr_18 [i_1] [i_1])))) : (((arr_4 [i_0] [i_0] [i_0]) ? var_5 : (arr_5 [i_1])))))), var_12));
                    var_20 = ((27688 ? (min(18446744073709551595, (arr_1 [i_1 + 2]))) : ((min(127, 624883259)))));
                    arr_19 [i_0] [i_1] = ((+(((arr_0 [i_1 - 1] [i_1 + 1]) ? (arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_5]) : (arr_9 [i_1] [i_1 - 1] [i_1 + 1] [i_5])))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    var_21 = (min(var_21, (((255 ? ((var_7 ? var_4 : var_3)) : (arr_1 [i_1 + 2]))))));
                    var_22 = ((-1 ? (arr_0 [i_1 + 2] [i_1 + 2]) : (arr_0 [i_1 + 1] [i_1 + 2])));
                    arr_24 [0] [i_1] [i_1] = -3327822289927719631;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                var_23 = -32759;
                                var_24 *= (arr_28 [i_0] [i_1 + 2] [i_6] [i_8] [i_8] [i_7]);
                            }
                        }
                    }
                }
                var_25 = (arr_5 [i_1]);
            }
        }
    }
    var_26 *= (max((min(48134, var_11)), 1));
    #pragma endscop
}
