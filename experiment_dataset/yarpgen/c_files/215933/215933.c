/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = ((116 << (120 - 107)));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
            {
                var_11 = ((((-73 ? 55 : (!4))) == (min(124, -5))));

                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = (~-127);
                    var_12 = (min(var_12, -104));
                    arr_15 [i_0] [i_0] [i_2] [i_3] = 104;
                    var_13 = (min(var_13, ((((~-65) ? (arr_11 [i_0] [8] [i_2] [i_0] [i_2]) : ((~((((arr_4 [i_1] [i_3]) > var_6))))))))));
                }
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
            {
                var_14 = -26;
                var_15 -= ((~(arr_16 [i_0] [i_1] [i_1] [i_4])));
            }
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                var_16 ^= arr_17 [i_0] [i_0] [i_0] [i_5];
                var_17 = (max(var_17, (((((max((~-36), (((arr_8 [0] [i_1] [i_5] [0]) ? (arr_12 [i_0]) : 103))))) ? ((min(36, 25))) : var_2)))));
                var_18 = ((-25 ? ((max(25, (arr_10 [i_0] [i_1] [i_1] [16])))) : -47));
                var_19 = arr_13 [i_0] [i_0];
            }
            arr_20 [i_0] = (((max(var_2, (arr_13 [i_0] [i_0])))));
            arr_21 [i_0] [i_0] [i_0] = ((-25 ? -127 : 108));

            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {
                var_20 = (min(var_20, (~-88)));
                var_21 = (min(var_21, 110));
                var_22 += ((28 ? 104 : -29));
            }
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                arr_26 [i_0] [i_0] = max((!var_8), (arr_13 [i_0] [i_0]));
                arr_27 [i_0] [i_1] = var_3;
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                arr_30 [i_0] [i_1] = 118;
                arr_31 [i_0] = ((-97 ? 3 : ((126 ? (arr_1 [1]) : -47))));
            }
        }
    }
    var_23 ^= var_6;
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            {
                var_24 = (min(var_24, ((((((arr_25 [i_10] [i_9] [i_9] [i_9]) ? 28 : (arr_25 [i_9] [10] [i_10] [i_10]))) != (-72 * 70))))));
                arr_36 [i_9] [i_9] = 127;
                var_25 &= 56;
            }
        }
    }
    var_26 = var_3;
    #pragma endscop
}
