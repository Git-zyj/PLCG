/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] = (arr_4 [i_0] [i_1]);
                arr_6 [i_1] [i_0] [i_0] |= (max((~3675904145729007809), -3924545331896260911));
            }
        }
    }

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_20 = ((((4294967295 ^ var_15) % (max((arr_3 [1] [1]), 1206428128)))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        var_21 = (((3924545331896260905 / (arr_3 [i_2] [6]))));
                        var_22 = ((((!((((arr_1 [2]) ? (arr_7 [i_3] [0]) : (arr_9 [i_2])))))) ? (!var_2) : (3 | -3924545331896260911)));
                        var_23 = ((((arr_3 [12] [4]) ? (~var_19) : (((arr_11 [i_2] [i_3] [i_3]) + 4771)))));
                    }
                }
            }
        }
        arr_17 [i_2] = (~var_9);
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        arr_21 [i_6] [i_6] = (-((((-(arr_19 [i_6]))))));
        arr_22 [i_6] = (((((max(var_9, (arr_18 [i_6])))) ? (var_10 % -3924545331896260923) : (((min(31, (arr_18 [i_6]))))))));
    }
    #pragma endscop
}
