/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(-var_0, ((var_12 ? var_11 : (var_4 <= var_6)))));
    var_17 = (((((~(min(-13, -1276811218))))) ? var_4 : ((var_0 ? var_3 : -var_1))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_18 = (arr_1 [i_0 - 1]);
        arr_2 [i_0] [i_0] = ((!(arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_19 = (((((((arr_4 [i_1] [15]) < (arr_0 [i_1 + 1]))))) ^ -8045874667496796311));
        arr_6 [i_1] = (arr_3 [i_1]);
        var_20 = (((arr_5 [i_1 - 3]) != (arr_5 [i_1 - 2])));
    }
    for (int i_2 = 4; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((((~((~(arr_7 [i_2]))))) ^ (((min((arr_5 [i_2]), (arr_1 [i_2 - 3])))))));

        /* vectorizable */
        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            var_21 = 16591;
            var_22 = ((~(arr_3 [i_2])));
        }
        var_23 = (min(8045874667496796310, (min(((46911 ? (arr_5 [6]) : (arr_8 [i_2] [i_2]))), (((!(arr_8 [i_2] [i_2]))))))));
    }
    #pragma endscop
}
