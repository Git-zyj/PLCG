/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_3, (max(((var_2 ? var_8 : var_5)), (~var_1)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [1] = ((-13337 | (arr_1 [i_0])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [5] = (((arr_6 [i_0] [i_0] [i_1]) ? (arr_2 [i_0] [i_1]) : (arr_6 [i_0] [i_0] [i_1])));
            var_17 = (!36387);
        }
    }
    var_18 = (var_10 ? (78 && 8098565108216582387) : var_7);

    /* vectorizable */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        var_19 = ((-13340 ? 13336 : -var_12));

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                var_20 = (arr_8 [10]);
                var_21 = var_15;
            }
            var_22 = ((-(arr_10 [i_2])));
        }

        for (int i_5 = 3; i_5 < 12;i_5 += 1)
        {
            arr_20 [i_2] [i_5] = (((((arr_14 [i_2 - 1] [i_2 - 1] [i_5]) + 2147483647)) >> (-13334 + 13354)));
            var_23 = var_9;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        var_24 = ((arr_21 [i_5 + 1]) ? (arr_21 [i_5 + 1]) : (arr_21 [i_5 + 1]));
                        var_25 = (max(var_25, ((var_6 ? (((arr_14 [i_5] [i_6] [i_5]) & (arr_13 [i_2] [i_2] [i_2]))) : ((((arr_9 [i_7]) ? var_1 : 65535)))))));
                        var_26 = (((arr_10 [i_2 + 1]) ? 78 : (arr_10 [i_2 + 3])));
                    }
                }
            }
        }
        for (int i_8 = 2; i_8 < 13;i_8 += 1)
        {
            arr_30 [i_2] [i_2] [i_8] = -13337;
            arr_31 [i_2] = ((((((arr_19 [1] [i_8 - 1] [5]) ? (arr_16 [i_2]) : -13360))) ? (arr_17 [5] [i_2 + 4]) : (arr_22 [i_8 - 2] [i_2] [i_2 + 1])));
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            arr_35 [i_2] = ((-((~(arr_28 [i_9] [i_9] [i_2])))));
            var_27 ^= ((var_12 & (~95)));
        }
        arr_36 [i_2] [i_2] = (70367670435840 / -9282);
        var_28 ^= (((arr_15 [i_2 + 4]) ? (arr_29 [i_2 + 2] [i_2 + 2] [i_2 + 1]) : ((((((arr_15 [i_2]) + 2147483647)) << (var_1 - 1470))))));
    }
    #pragma endscop
}
