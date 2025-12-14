/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (((max(((max(0, var_7))), (min((arr_2 [i_0]), var_12)))) * ((max((arr_2 [i_0]), (((arr_1 [i_0]) / (arr_1 [i_0 - 1]))))))));
        var_15 = (min(-1, var_7));
        arr_4 [i_0 - 1] = (((min(-13, ((((arr_1 [i_0 - 2]) || -2))))) ^ (((max((arr_1 [i_0 - 2]), (arr_2 [i_0 - 1])))))));
        var_16 ^= (min(1, (max(0, (arr_0 [i_0 - 1])))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_9 [13] = ((!(!-1)));
        arr_10 [i_1] [i_1] = ((((((arr_7 [i_1]) >> (arr_7 [i_1])))) ? ((~((8529865060656888270 | (arr_8 [i_1]))))) : (((((9916879013052663346 || (arr_6 [i_1]))) ? -1135051439 : (min((-9223372036854775807 - 1), 106)))))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_14 [i_2] [i_2] = (arr_7 [i_2]);
        arr_15 [i_2] = (((arr_12 [2]) ? (arr_8 [i_2]) : ((min((arr_11 [i_2]), (arr_1 [i_2]))))));
        var_17 = var_5;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_18 = (min(var_18, ((max((arr_19 [i_3] [2]), (max((arr_22 [i_4 + 1] [i_4] [i_4 + 1]), (arr_22 [i_4 + 2] [i_4] [i_4 + 2]))))))));
                    var_19 ^= ((~((3747381840 | (arr_18 [i_4 + 3])))));
                }
            }
        }
        arr_23 [i_3] = (arr_18 [i_3]);

        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_20 = (min(var_20, var_7));
            var_21 = (min(0, 8));
            var_22 = (((-58 ? (arr_22 [22] [i_3] [i_6]) : (arr_22 [i_3] [i_3] [i_3]))) | (!3662133718));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 22;i_8 += 1)
                {
                    {
                        arr_31 [i_8] [i_8] [i_6] [i_8] [i_3] = (((arr_25 [i_3]) ? 3663210108242995953 : (min(((max((arr_25 [i_8 + 1]), (arr_27 [i_3] [17])))), (~9916879013052663361)))));
                        var_23 = ((max((arr_29 [i_7]), (arr_29 [i_7]))));
                        arr_32 [i_7] [i_7] [i_8] = ((((min(7195832633620729247, 547585456))) ? (max(9916879013052663345, (((8529865060656888249 ? -1 : (arr_21 [6] [1])))))) : (arr_30 [i_6] [i_6] [i_8] [17] [i_6])));
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            arr_35 [i_9] = ((((((-422988349 || 219581669) < 1756807851878958656))) >> (((arr_30 [4] [i_3] [i_9] [i_3] [i_3]) - 1009301594392616663))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 22;i_11 += 1)
                {
                    {
                        arr_40 [5] [2] [5] [i_3] = 0;
                        var_24 = 547585456;
                    }
                }
            }
        }
    }
    var_25 = ((-(max(var_3, var_9))));
    #pragma endscop
}
