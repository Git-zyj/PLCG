/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_12 = (max(var_12, 151));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_13 = (min(var_13, (((-((((arr_7 [1] [i_2] [i_3]) > -2))))))));
                        var_14 |= 91;
                        var_15 = (arr_7 [i_0] [14] [i_1]);
                        var_16 = (max(var_16, (((32759 ? 91 : -9)))));
                    }
                }
            }
            arr_10 [i_0] &= (max((arr_1 [i_0]), ((-21 ? -9223372036854775790 : -18196))));
            var_17 = (max(var_17, ((min(var_9, -20)))));
        }
        var_18 = (min(((3315282630 ? 3232 : 8471981119814612699)), ((((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_0]))))));
        var_19 |= (max((arr_9 [i_0] [i_0] [i_0]), ((!(arr_3 [i_0] [i_0])))));
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] = ((arr_0 [i_4 + 2]) ? (62308 % 2231129413) : 16380);
        var_20 -= (max(((~(arr_1 [i_4 + 2]))), (arr_11 [i_4 - 1])));
        var_21 = (min(var_21, (arr_0 [i_4 + 1])));
    }
    for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
    {
        var_22 -= var_7;
        arr_17 [i_5] = 6304636761221772328;
        var_23 = ((((((arr_0 [i_5 + 1]) ? (arr_9 [i_5 - 1] [i_5 - 1] [i_5 + 1]) : 1125871649786501680))) ? (max(var_6, ((~(arr_1 [i_5]))))) : ((((max(159, (arr_1 [i_5]))))))));
    }
    var_24 ^= (max(var_5, var_6));
    #pragma endscop
}
