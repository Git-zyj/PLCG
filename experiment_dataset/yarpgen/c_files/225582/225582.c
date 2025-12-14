/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-14413978059011439536 ? (((max(var_6, 3661693895730159026)))) : (max((!var_13), -153))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_17 = (min(var_3, (26 ^ 34406)));
                        var_18 = (min(var_18, ((((((arr_1 [i_1] [i_1 + 1]) - var_14)) - ((((min((arr_7 [i_0]), (arr_4 [i_0] [i_0] [i_2])))) ? (((arr_4 [i_0 + 2] [i_1] [i_2]) - (arr_5 [i_0] [i_1] [i_0] [i_3]))) : (arr_1 [i_1 - 1] [i_0 - 2]))))))));
                    }
                }
            }
        }
        var_19 = (max(var_19, ((max((((arr_9 [i_0] [i_0 + 2] [i_0]) * (arr_9 [i_0] [i_0 + 2] [i_0]))), (arr_9 [i_0] [i_0 - 2] [i_0]))))));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 21;i_4 += 1) /* same iter space */
    {
        var_20 = (arr_2 [i_4 + 2] [i_4 + 1] [i_4 + 1]);
        var_21 = (max(var_21, (253 - 3274622868345625730)));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    var_22 = (min(var_22, (arr_11 [i_4 + 2] [i_4 + 1])));
                    var_23 = -var_9;
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 20;i_7 += 1)
    {
        var_24 = (min(((-(arr_11 [i_7] [i_7 - 1]))), var_3));
        arr_21 [i_7] = (min((max((arr_11 [i_7] [i_7 - 1]), (arr_3 [i_7 - 1]))), (max((arr_3 [i_7 - 1]), (arr_4 [i_7 + 1] [i_7 + 1] [i_7 + 1])))));
        arr_22 [i_7] [i_7 + 1] = -3754926818456906238;
    }
    #pragma endscop
}
