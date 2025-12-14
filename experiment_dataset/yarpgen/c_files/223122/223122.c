/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((126 ^ var_11), (min(((var_7 ? 65423 : var_11)), 0))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 ^= (((((((!(arr_1 [i_0]))) == 1)))));
                var_16 = var_6;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        var_17 = (arr_6 [i_0 + 1] [i_1] [i_2]);
                        arr_8 [20] [i_1] [i_1] [i_1] [i_3] = ((~(!0)));
                    }
                    arr_9 [i_1] = (((arr_0 [i_0 - 1]) > (arr_0 [i_0 + 1])));
                    var_18 = (((arr_0 [i_0 - 1]) ? var_11 : (arr_0 [i_0 - 1])));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_19 ^= (((((3674514404271465 ? (arr_1 [i_0]) : var_5))) ? (arr_10 [1]) : ((var_0 ? 417716380 : (arr_6 [i_0 + 1] [i_1] [i_4])))));
                    arr_13 [i_4] [i_1] [i_0] = ((var_10 ? -1 : (37936 != 0)));
                    var_20 ^= ((-((var_3 ? (arr_2 [i_0]) : (arr_3 [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
