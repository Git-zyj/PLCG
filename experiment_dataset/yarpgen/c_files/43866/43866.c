/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [0] = ((-6027952522046564052 ? 0 : 203));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] = (arr_5 [i_0] [i_0]);
            var_11 ^= var_9;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_12 = (((arr_4 [i_0] [i_0]) ? ((-6519166925258005986 ? 6027952522046564051 : var_9)) : ((((arr_6 [i_0] [i_0] [i_0]) | 52)))));

            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                arr_16 [i_0] [i_2] [i_0] = -41;
                var_13 = ((203 ? 60112 : 6027952522046564060));
            }
            for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
            {
                var_14 ^= 1133329342;
                var_15 = (((arr_9 [i_0] [i_2] [i_0]) ? (arr_15 [i_0]) : 1));
                arr_19 [i_0] = -14;
            }
            for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
            {
                var_16 ^= (+-9223372036854775807);
                arr_22 [i_0] [i_0] [i_0] = (-((var_2 ? -736702136 : 244)));
                var_17 = var_5;
            }

            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_18 = -999884843;
                arr_26 [i_0] = ((!(arr_15 [i_0])));
            }
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                var_19 = ((var_3 ? 24 : (arr_9 [i_0] [i_0] [i_7])));
                arr_30 [i_0] [1] [i_0] = (((-6027952522046564060 ? -88 : 65528)));
                var_20 = ((5446 >> (60112 - 60111)));
                var_21 = ((arr_4 [i_0] [i_2]) ? (((arr_27 [i_0] [i_2] [i_7] [i_0]) ? (arr_23 [i_0] [i_2] [i_7] [i_0]) : 203)) : var_7);
            }
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            var_22 ^= (((arr_0 [14]) ? (arr_0 [8]) : (arr_0 [6])));
            arr_33 [i_0] [i_0] = (60103 & 16320);
        }
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        var_23 = (!(!var_9));
        var_24 ^= -2;
        var_25 = (arr_35 [i_9]);
    }
    var_26 ^= var_5;
    #pragma endscop
}
