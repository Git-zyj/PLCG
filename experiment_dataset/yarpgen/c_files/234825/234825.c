/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_10 = ((-(((arr_5 [i_0] [i_1]) ? (arr_3 [i_1]) : (arr_2 [i_1])))));
            var_11 += ((+(((arr_5 [i_0] [4]) + (18591 * 15295574231969540496)))));
        }
        var_12 = ((((max((arr_3 [i_0]), (arr_5 [i_0] [i_0])))) ? 1 : (65535 + -859294716)));
    }

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    {
                        var_13 ^= 153447290;
                        var_14 = (min(var_14, ((((arr_15 [i_5] [i_5] [i_4 + 2] [i_4 + 2] [i_2]) ? 27242 : ((-(arr_5 [i_3 + 3] [i_4 - 1]))))))));
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            arr_18 [i_2] = ((((((((1 + (arr_17 [i_2] [i_2])))) ? 859294715 : (min((arr_13 [i_2] [i_2] [i_6] [i_2] [i_2] [i_2]), var_1))))) ? ((-29 ? 416414566 : (((var_1 ? var_6 : (arr_6 [i_2] [i_2])))))) : -14659));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        arr_24 [10] [10] [i_2] [i_8] [i_8] = (((((((var_6 ? (arr_10 [4] [i_6] [10] [i_8]) : 122))) ? (!1763326652) : 269142227597369703)) > (max((arr_6 [i_2] [i_2]), ((var_1 ? 37 : var_8))))));
                        arr_25 [i_2] [i_2] [i_2] [i_7] [i_8] [i_8] = -304674880;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 9;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        {
                            arr_34 [i_2] = (max((max((arr_1 [i_10 + 2]), ((1 * (arr_32 [i_2] [i_6] [i_9] [i_9] [i_6] [i_2] [i_11]))))), ((max(var_0, 20183)))));
                            var_15 = 10;
                            var_16 += ((min(1923137595, (arr_27 [i_6] [i_9] [i_10 + 3] [i_11]))));
                        }
                    }
                }
            }
            var_17 = (((((var_1 / var_7) ? ((max((arr_2 [i_2]), var_5))) : (arr_3 [i_6]))) << (((var_6 <= (~var_3))))));
        }
        arr_35 [i_2] [i_2] = 3151169841740011119;
    }
    var_18 = (max(var_18, (0 <= var_2)));
    var_19 = var_7;
    #pragma endscop
}
