/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = ((((((-(arr_3 [i_0]))))) ? (((var_10 ? 2241081053 : 39571))) : ((~(!var_6)))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_14 = ((~(((!(((var_0 ? (arr_3 [i_0]) : 1672006979680582833))))))));
            var_15 = ((!(~var_3)));
        }
    }
    var_16 = ((((((((25964 ? 500102380 : -1846271782))) ? 1 : ((1151795604700004352 ? 2 : -32753))))) ? -16 : ((var_4 ? ((1344640332 ? var_2 : -32753)) : 39587))));
    var_17 *= (((((0 ? 29 : 12822796803956126374))) ? -6685291231257760329 : (((((var_10 ? var_5 : 2970736068451041308)))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                var_18 = (min(var_18, (((!((!(arr_6 [i_3]))))))));

                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_19 ^= (((~(~var_5))));
                    var_20 = ((((var_5 ? (((arr_12 [i_2] [i_4] [i_4]) ? (arr_10 [i_4] [i_3]) : (arr_12 [i_2] [i_2] [i_4]))) : (((var_11 ? (arr_13 [i_2]) : 1543016474)))))) ? -2147483635 : (((var_4 ? var_9 : 2517004363599482344))));
                    arr_15 [i_2] [i_3] [i_4] = (((var_12 ? var_7 : (((arr_13 [i_2]) ? (arr_12 [i_3] [i_3] [i_4]) : 14959892988638477777)))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    var_21 = (arr_10 [0] [0]);
                    var_22 = ((!(arr_6 [20])));
                    arr_20 [18] [i_3] [i_3] [i_2] = (!166);
                    var_23 = ((!(((var_11 ? (arr_8 [i_2]) : (arr_7 [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
