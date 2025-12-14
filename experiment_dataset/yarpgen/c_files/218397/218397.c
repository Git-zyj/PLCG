/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((max((((!var_9) ? ((var_18 ? var_13 : 231)) : (((var_2 ? var_4 : var_17))))), ((((((2511488110035216981 ? var_7 : var_13))) ? ((9223372036854775807 ? var_7 : var_12)) : (var_9 > var_18)))))))));
    var_20 = (((((var_9 ? var_14 : 24))) ? var_6 : (((2 ? var_16 : var_5)))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_21 = (min(var_21, (arr_2 [i_0 + 1] [8])));
        var_22 = (max(((max(-146, var_5))), (max((((arr_0 [i_0]) % (arr_0 [i_0]))), (arr_0 [i_0 - 1])))));
        arr_3 [i_0] [i_0] = (((((((arr_2 [i_0] [i_0]) ? 231 : var_7))) ? (var_10 || 148) : ((~(arr_1 [i_0]))))));
        var_23 = ((arr_0 [i_0 + 1]) ? ((252 + (max(18446744073709551615, (arr_1 [i_0]))))) : (arr_1 [i_0]));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            {
                arr_9 [i_1] [i_2] = ((var_4 ? (((arr_5 [i_1] [i_1]) >> (var_17 + 731457286))) : ((~(~var_3)))));
                arr_10 [i_2] = var_6;
            }
        }
    }
    #pragma endscop
}
