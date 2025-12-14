/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 ^= ((~(arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 &= ((!((((((var_9 ? -478538199 : var_11))) ? (arr_1 [i_0]) : ((0 ? (arr_5 [i_0] [i_1] [i_1 - 4] [14]) : (arr_2 [i_2]))))))));
                    var_14 = (((((478538199 ? (((var_1 ? var_5 : (arr_3 [i_0] [i_1] [i_2])))) : ((var_3 ? (arr_4 [13] [i_2] [i_2]) : 4610560118520545280))))) ? ((((arr_0 [i_0] [i_0]) ? var_0 : (arr_4 [i_0] [i_1] [i_1])))) : var_10));
                    var_15 = (arr_0 [13] [i_1]);
                    var_16 = (max(var_16, ((((((((min((arr_2 [7]), (arr_2 [i_0])))) ? (~var_11) : 478538199))) ? (((arr_5 [i_0] [i_1] [i_0] [i_1]) ? (arr_3 [i_0] [i_1] [i_1]) : (((478538199 ? var_7 : (arr_1 [i_2])))))) : 1724528156)))));
                    var_17 ^= (((((478538173 ? ((0 ? (arr_0 [1] [i_1 + 1]) : -12263)) : (arr_4 [i_2] [i_1 - 4] [i_0])))) ? (((18446744073709551615 ? 4294967293 : 2147483647))) : ((~(((arr_5 [i_0] [i_1] [i_0] [i_1]) ? 0 : 0))))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_18 &= (max((min((arr_0 [i_0] [i_3]), var_0)), (((var_9 ? (arr_5 [i_0] [6] [i_0] [10]) : ((var_6 ? (arr_3 [i_0] [i_0] [i_3]) : var_9)))))));
            var_19 = ((((((((0 ? var_6 : (arr_1 [i_3])))) ? ((var_1 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_3]))) : -0))) ? (~var_3) : (((var_6 ? (arr_4 [8] [i_3] [i_0]) : 12262)))));
            var_20 &= var_5;
            var_21 = ((((((((1 ? -29768 : (arr_6 [i_0] [i_0])))) ? (arr_3 [i_3] [1] [1]) : (((var_8 ? (arr_1 [i_3]) : (arr_2 [11]))))))) ? ((var_10 ? ((((arr_6 [i_0] [9]) ? (arr_2 [i_0]) : (arr_1 [i_3])))) : -454994962)) : (arr_1 [3])));
        }
        var_22 ^= (max(var_6, var_7));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_23 = var_4;
        var_24 = (((((-14152 ? -var_7 : var_3))) ? (((((var_6 ? var_4 : var_9))) ? 30963 : var_2)) : (~var_1)));
    }
    for (int i_5 = 3; i_5 < 23;i_5 += 1)
    {
        var_25 = (max(var_25, ((((((-1 ? (((arr_10 [2]) ? var_3 : var_11)) : (max((arr_10 [i_5]), var_11))))) ? ((((max(12262, var_10))) ? (((arr_10 [1]) ? 0 : 0)) : (!var_0))) : ((var_4 ? ((((arr_11 [i_5 - 3] [i_5 - 2]) ? (arr_10 [i_5 - 3]) : var_7))) : (((arr_11 [i_5 - 2] [i_5]) ? var_3 : 4294967291)))))))));
        arr_13 [i_5] [i_5] = ((((((arr_11 [i_5 - 2] [i_5 - 2]) ? (arr_11 [23] [i_5 + 1]) : (arr_11 [i_5] [i_5 + 2])))) ? ((max((arr_11 [i_5] [i_5 + 2]), var_1))) : ((-(arr_11 [i_5 + 2] [i_5 - 2])))));
    }
    for (int i_6 = 2; i_6 < 9;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 7;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 8;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                arr_31 [i_6] [i_6] [i_9 + 1] [i_9 + 1] &= (((-478538199 ? -1 : (arr_16 [i_8 + 1] [i_8 + 1]))));
                                var_26 = (((max((!4352), -18295))) ? (((((var_6 ? (arr_28 [i_7]) : -1))) ? (((arr_5 [i_6] [i_7] [i_6] [i_8]) ? var_2 : (arr_30 [i_6 - 1] [i_9] [i_10]))) : (((var_4 ? var_9 : var_1))))) : var_9);
                                var_27 ^= var_10;
                                var_28 = ((((((arr_30 [i_6] [i_6] [i_8 - 1]) ? (((var_9 ? (arr_12 [i_9]) : 65525))) : var_2))) ? ((((max(var_2, 0))) ? (((arr_12 [i_6]) ? (arr_26 [i_10] [i_7] [i_9] [i_8 + 1] [i_7] [5]) : var_6)) : var_11)) : (((((var_8 ? 39322861 : (arr_8 [i_8])))) ? ((var_8 ? (arr_22 [i_9 - 1] [i_8] [i_6]) : var_11)) : ((14251 ? -25810 : 13971906557150865857))))));
                            }
                        }
                    }
                    arr_32 [i_6] [i_7] [i_6] [i_7] &= 0;
                    arr_33 [i_7] [i_7 + 1] [i_7 + 1] = min((arr_0 [i_6 - 2] [i_6 - 2]), 2597);
                }
            }
        }
        var_29 = (max(var_29, (arr_10 [i_6])));
        var_30 = (max(var_30, (arr_5 [i_6] [i_6] [i_6] [i_6])));
    }
    var_31 = var_4;
    var_32 ^= (((((var_11 ? var_9 : var_8)))) ? (((((var_1 ? var_0 : var_11))) ? var_2 : (((var_9 ? var_9 : var_10))))) : (((var_9 ? var_10 : var_0))));
    #pragma endscop
}
