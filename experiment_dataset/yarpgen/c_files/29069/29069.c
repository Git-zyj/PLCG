/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_2 ? var_14 : (min(8380416, ((max(13, var_8)))))));
    var_16 = (1 * -13);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((((10643964873028814355 ? 0 : 0))) ? ((5349894651613999409 ? 65535 : var_5)) : (arr_0 [i_0] [i_0])));
        var_17 = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
        var_18 = (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((!((((arr_5 [i_1]) ? (arr_5 [i_1]) : var_9)))));
        var_19 &= (((((+((-32739 ? (arr_5 [i_1]) : var_12))))) ? ((max(((49 % (arr_4 [i_1] [i_1]))), ((2047 ? -29906 : (arr_5 [i_1])))))) : ((+(((arr_4 [i_1] [i_1]) / 6691099498250830215))))));
        var_20 = (max(1, 0));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [16] [i_3] [i_3] [i_3] [1] = (((((((arr_4 [10] [i_4 - 2]) ? (arr_7 [i_1] [i_2]) : (arr_11 [i_1] [i_3] [i_3]))))) || ((max(var_9, (((arr_10 [i_1] [i_2]) ? 65535 : (arr_12 [i_1] [5] [13] [i_4]))))))));
                        arr_16 [i_1] [i_2] = (((31 ? -21715 : 18591)));
                        var_21 += var_13;
                        var_22 = (min(var_22, 63));
                    }
                }
            }
        }
    }
    var_23 = (min(var_23, ((((((var_12 ? var_7 : var_8))) ? var_5 : var_8)))));
    var_24 = (((~((max(var_1, var_4))))));
    #pragma endscop
}
