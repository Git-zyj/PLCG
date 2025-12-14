/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_15 = (var_13 || -32752);
        var_16 -= (~((-3314848415371767875 ? -53 : (arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_17 = (1 > 15);
            arr_8 [i_1] [i_2] = ((max(var_10, -32752)) < (arr_2 [i_1]));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_11 [i_3] = min((arr_0 [1]), (((((~(arr_2 [2]))) >= (~-46)))));
            var_18 = (((max((arr_3 [i_1]), (-32752 + var_10))) / ((((arr_4 [2]) ? (arr_10 [i_3]) : var_4)))));
            var_19 = (min(((((~var_14) ^ (max(1555785868, 1))))), (max((724783295 / 9223372036854775807), (~var_10)))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_20 = (((((max(var_11, var_9)))) >> ((((1 ? 8160 : (arr_9 [i_4] [i_3] [i_5]))) - 8135))));
                            var_21 = (min(7862715029575840139, ((min(var_8, (arr_12 [i_4] [i_4] [i_4] [i_4]))))));
                            var_22 = (min(var_22, ((min((((arr_6 [i_3]) / -1555785896)), (((!(arr_13 [5] [5] [i_5] [i_6])))))))));
                            var_23 = ((~((~(arr_16 [i_1] [i_3] [i_1] [i_1] [i_6])))));
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            var_24 = min((arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]), var_3);
            var_25 ^= ((var_0 & (((((((arr_1 [i_7] [i_1]) || var_2))) > (~-48))))));
            arr_20 [i_1] [i_7] [4] = (arr_17 [i_1] [i_7] [i_1] [i_1] [i_7]);
        }
        arr_21 [i_1] |= 3144;
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        arr_26 [i_8] [i_8] = (min(var_0, -8155));
        arr_27 [7] = var_6;
        arr_28 [i_8] [i_8] = (min((((63 - var_4) ? (((arr_25 [i_8] [i_8]) ? 32765 : var_6)) : ((max(34596, 2391757702750056806))))), ((((((8168 ? var_13 : -587640092))) % (arr_24 [i_8] [i_8]))))));
        var_26 = (((((~(arr_24 [i_8] [i_8])))) ? (min((var_8 >= var_1), (((arr_23 [2] [i_8]) * var_10)))) : (((1 ? (~-3145) : (max((arr_24 [i_8] [3]), var_9)))))));
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 24;i_13 += 1)
                        {
                            {
                                var_27 = (248 <= 21847);
                                var_28 -= (((((var_1 >= (arr_39 [i_13 + 1] [i_12] [0] [i_10] [i_9])))) - ((var_1 ? (arr_39 [i_13 - 2] [i_12] [22] [i_10] [i_9]) : var_12))));
                                var_29 = (min(var_29, (((-19 ? (max(var_13, (arr_33 [1]))) : ((var_3 & (min((arr_29 [4]), var_9)))))))));
                                arr_44 [i_9] [i_9] [i_10] [i_11] [i_9] [i_13] = (arr_39 [i_9] [i_10] [i_9] [i_12] [i_9]);
                            }
                        }
                    }
                    var_30 = (96 || 1);
                }
            }
        }
    }
    var_31 = var_6;
    #pragma endscop
}
