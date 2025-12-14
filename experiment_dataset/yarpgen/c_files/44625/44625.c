/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_16 = 12;
                        var_17 = ((((((((var_3 ? (arr_5 [i_0] [i_1] [5]) : (arr_0 [i_2] [i_2])))) ? (arr_1 [i_0]) : ((var_14 ? (arr_1 [i_0]) : (arr_1 [i_1])))))) || (((var_10 ? var_0 : (((var_3 ? (arr_7 [i_0] [i_1] [i_2] [i_3]) : (arr_3 [i_1])))))))));
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = (((((max(var_3, var_12)) != (((((arr_0 [i_0] [i_0]) == (arr_9 [i_1]))))))) ? ((((arr_3 [i_1]) == (arr_3 [i_1])))) : ((((arr_8 [i_0] [3] [i_0]) || var_14)))));
                        var_18 = ((((((var_11 & (arr_0 [i_0] [i_1]))) << ((((var_1 ? var_5 : (arr_4 [i_0] [i_0] [i_0]))) + 179339324)))) > ((max(var_7, (((arr_6 [9] [i_1]) ? var_15 : (arr_2 [i_0]))))))));
                    }
                    var_19 += var_8;
                    var_20 = (arr_8 [i_0] [i_2 + 1] [i_2]);
                }
            }
        }
    }
    var_21 += ((var_1 ? ((~(~var_10))) : ((~((var_1 ? var_13 : var_14))))));
    #pragma endscop
}
