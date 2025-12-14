/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((var_15 ? -24651 : var_3)) ^ (var_8 - 1)))) ? (!1094932307) : (((!(((1 ? var_3 : var_10))))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_17 = ((-6982989320480719271 ? 3651448428 : -9223372036854775797));
            arr_5 [11] [i_0] = ((!((((~-201231767) % (((arr_4 [i_0] [i_0] [i_1]) ? (arr_4 [i_1] [i_0] [i_1]) : (arr_3 [i_0] [i_0] [i_1]))))))));
        }
        var_18 = (min(var_18, (~-201231770)));
        var_19 = (var_14 ^ (!var_2));
        arr_6 [i_0] [7] = (((~(-2147483647 - 1))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [15] = ((((!(arr_4 [i_2] [i_2] [i_2]))) ? ((~(arr_4 [i_2] [5] [i_2]))) : ((((arr_9 [i_2]) < (arr_9 [i_2]))))));
        var_20 ^= (268435455 == 3110482695);
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        var_21 = ((((-((var_10 ? var_0 : -1891984293)))) ^ (((arr_16 [10] [i_6]) % 119))));
                        arr_22 [i_5] [i_3] [i_3] [i_3] = ((~((140 / (arr_20 [i_4] [i_4] [i_5 - 1] [i_5] [i_3])))));
                    }
                }
            }
        }
        arr_23 [i_3] = ((113 - (14804480 + -90)));
        arr_24 [i_3] = 145;
    }
    #pragma endscop
}
