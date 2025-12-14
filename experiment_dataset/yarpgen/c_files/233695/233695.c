/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((((193 ? 62 : -36028797018963968)) >> (var_0 - 53196)))) ? (max((((var_9 ? -36028797018963968 : var_4))), var_1)) : (!41)));
    var_11 = (((((var_4 ? var_4 : (min(var_7, 7836708710008114577))))) ? var_9 : (((((2539 ? 30 : 1))) ? var_9 : (max(var_7, var_1))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = (~(arr_0 [i_0] [i_0]));
        var_13 -= -75;
        var_14 = (max(var_14, ((1 > (((arr_1 [i_0]) ? -948363648404519834 : (arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_15 ^= 48;
        var_16 = (((arr_2 [i_1 - 1] [i_1 + 1]) ? 2465850500089285170 : (!1)));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        arr_8 [i_2] [i_2 + 2] = (((((41 ? 219 : (arr_5 [i_2])))) ? 214 : ((((arr_6 [i_2]) ? 163503325 : 34)))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                {
                    var_17 = ((!(!255)));
                    var_18 = ((-(((arr_13 [i_2 - 1] [i_3] [i_4]) % (arr_14 [i_2] [i_3] [i_3] [i_4])))));
                    arr_15 [i_3] [i_3] [i_4] = ((-(arr_7 [i_4 + 1])));
                    var_19 = ((191856295696644441 ? ((14468 ? 44 : 1)) : ((~(arr_10 [i_3])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    var_20 = (arr_13 [i_2 + 2] [14] [i_2 - 1]);
                    var_21 = (arr_9 [i_2 + 1] [i_6]);
                    var_22 &= (arr_9 [i_2 + 2] [i_6]);
                }
            }
        }
    }
    #pragma endscop
}
