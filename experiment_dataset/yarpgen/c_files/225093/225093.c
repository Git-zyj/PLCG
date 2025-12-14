/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_19 = ((max(2290263966546996031, (max(-1391126745, 14048187382930100555)))));
        var_20 = arr_2 [i_0 - 3];

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_21 = (((arr_0 [i_0] [i_1]) ? 16761009447992519083 : (arr_4 [i_0] [i_0 + 1])));
            arr_5 [i_1] = ((arr_0 [i_0 - 3] [20]) ? (arr_0 [i_0 - 1] [i_0]) : (arr_0 [i_0 - 3] [i_0 - 3]));
        }
        var_22 = ((~(((arr_3 [i_0]) - ((1391126744 ? 994696540 : 7521))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_23 = (arr_4 [12] [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    arr_14 [i_2] = ((!((((arr_4 [i_3] [i_3]) ^ (arr_7 [i_2] [i_2]))))));
                    var_24 = (min(var_24, (((!((((arr_10 [4] [i_3 - 4] [i_4]) ? (arr_10 [i_2] [i_2] [i_2]) : (arr_12 [i_4] [i_3])))))))));
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        arr_17 [i_5 + 1] = (((((((arr_16 [i_5 + 1]) % (arr_1 [i_5]))))) ? (((~(arr_16 [i_5])))) : (min((arr_3 [i_5]), -1243591055938305593))));
        var_25 = (min((arr_2 [7]), 11920049362955229195));
        var_26 |= ((-((-(arr_15 [i_5])))));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_27 = (max(var_27, ((((((((arr_7 [i_6] [i_6]) ? (arr_3 [i_6]) : (arr_9 [i_6] [i_6]))))) ? (arr_4 [i_6] [i_6]) : (((((arr_10 [13] [13] [i_6]) ^ (arr_15 [i_6]))) >> (((((arr_12 [i_6] [i_6]) % (arr_6 [i_6]))) + 3696167863763023157)))))))));
        var_28 = max((arr_20 [i_6]), ((~(arr_6 [i_6]))));
        var_29 = ((((0 ? 4398556690779451060 : 65535)) < ((~(52794 >> 1)))));
    }
    var_30 = (min(var_30, (((13267518803200000789 ? 228 : 12542994141263134722)))));
    #pragma endscop
}
