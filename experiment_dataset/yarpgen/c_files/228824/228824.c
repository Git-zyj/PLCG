/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (~26)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            arr_6 [3] [3] [i_0] = ((!((max((-24555 - var_1), (arr_4 [i_1]))))));
            var_11 = (((-(arr_3 [i_1]))));
            arr_7 [i_0] = ((32755 ? ((min((arr_0 [i_0] [i_1]), (min(-12094, (arr_1 [i_0] [i_0])))))) : ((~(((arr_0 [11] [11]) ? (arr_5 [i_0] [i_1]) : (arr_1 [i_0] [i_1])))))));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_12 += (((arr_8 [i_0] [i_2] [i_0]) ? (((arr_0 [i_0] [i_2]) >> ((((-(arr_0 [i_0] [i_2]))) + 3961)))) : -32750));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                arr_12 [i_2] [i_3] [i_3] = (((arr_4 [i_3]) / var_0));
                var_13 = (max(var_13, ((((arr_11 [i_0] [i_0] [i_3]) * (arr_9 [i_0]))))));
            }
        }
        var_14 = (max(var_14, ((min(((((max((arr_4 [0]), (arr_4 [i_0])))) ? (((arr_5 [i_0] [i_0]) & var_0)) : ((var_2 - (arr_10 [i_0] [i_0]))))), ((28294 ? -27641 : -18261)))))));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                var_15 = ((!((!(arr_17 [i_4] [i_4] [i_5])))));
                var_16 += 3188;
                arr_19 [i_4] [i_5] [i_5] = ((-(max(-27, (arr_17 [i_4] [i_4] [i_4])))));
                arr_20 [i_4] [i_5] [i_5] = arr_18 [i_4] [i_4];
            }
        }
    }
    #pragma endscop
}
