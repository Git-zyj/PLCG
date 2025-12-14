/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 4294967277;

    for (int i_0 = 1; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((-(arr_1 [i_0 - 1] [i_0 - 1])));
        arr_3 [i_0] [i_0] = (((min((min(var_6, var_4)), ((845478987 ? 3449488320 : 4294967282))))) ? (max(3449488309, (arr_1 [11] [i_0]))) : (((arr_0 [i_0] [23]) ? -739226883 : var_0)));
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [23] = ((min((max(38435464, 1014696726)), 4294901760)) | ((~(arr_5 [i_1 + 1] [i_1 + 1]))));
        var_11 &= arr_1 [i_1 + 1] [i_1];
    }
    for (int i_2 = 1; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_12 ^= 2;
        arr_9 [i_2] [i_2] = ((min(var_9, (((arr_1 [i_2] [i_2]) ? 845478987 : var_9)))) << (var_0 - 3460002954));
        var_13 = (((-(arr_1 [i_2] [i_2 - 1]))) - ((var_9 - (min(var_7, 3688207490)))));
    }
    var_14 = var_3;
    var_15 = (~((var_0 ? (4294901760 | 4294967284) : 3731288748)));
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    arr_18 [i_3] [i_4] [i_5] [i_5] = var_2;
                    var_16 = ((arr_16 [i_3] [i_3] [i_3] [i_3]) ? (arr_13 [i_3] [i_4]) : ((-var_9 ? 4294967278 : (max((arr_7 [i_3]), var_9)))));
                }
            }
        }
    }
    #pragma endscop
}
