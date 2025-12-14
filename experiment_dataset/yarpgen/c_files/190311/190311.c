/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-1 ? (~var_12) : var_4));
    var_17 ^= (~var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_18 = (arr_5 [i_2] [8]);
                        var_19 = (min(((((var_7 ? var_1 : var_11)) | var_3)), var_9));
                    }
                    arr_12 [5] = 5104725254131389975;
                    var_20 = (min(var_20, (((!(((-21053 ? var_13 : var_15))))))));
                    arr_13 [i_0] [12] [9] = ((((max(28904, (arr_0 [i_1])))) ? (arr_10 [i_0] [i_1] [1] [i_2]) : var_4));
                    var_21 = (~43844886);
                }
            }
        }
    }
    var_22 = ((~((min(0, var_15)))));
    #pragma endscop
}
