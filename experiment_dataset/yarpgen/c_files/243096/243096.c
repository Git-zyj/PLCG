/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        var_10 ^= 10222847293935532078;
        var_11 = ((((var_8 - (arr_2 [i_0 - 4]))) / (((8223896779774019537 ? 3320144334 : var_0)))));

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            var_12 = (((arr_1 [i_0] [i_1 + 1]) ? (((-(max(2147481600, 67108832))))) : (((max((arr_2 [i_0]), var_7)) & (var_5 != 120)))));
            arr_5 [i_0] [i_0] = ((max((((var_9 ? (arr_0 [i_0] [i_0]) : 3862336452))), 8223896779774019551)) & (((((var_3 != (arr_2 [i_1 - 2]))) ? (arr_3 [i_0 - 2] [i_0 - 2] [i_0 - 1]) : (max(var_5, 144))))));
            var_13 = ((var_8 / ((((arr_1 [i_0 + 1] [i_0]) * 4294967146)))));
        }
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 23;i_3 += 1)
            {
                var_14 = (min(var_14, (max(((var_5 / (-26207 & 144))), (arr_6 [i_0 - 1])))));
                var_15 = ((4294967159 ? var_8 : (((((max(120, 11240931695986379324))) ? (~4294967176) : ((((arr_2 [i_0]) ? var_4 : -897044925))))))));
                var_16 = (max((((arr_3 [i_3 - 3] [i_3 - 1] [i_3 + 1]) ? (1 & var_8) : ((58720256 ? 1015808 : 8223896779774019537)))), -1));
            }
            /* vectorizable */
            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                var_17 = arr_2 [i_0];

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_16 [1] [i_5] [22] [i_5] [i_0] = (10222847293935532078 ? (arr_1 [i_0 + 1] [i_2 + 1]) : var_8);
                    var_18 = (min(var_18, ((var_1 ? (arr_10 [i_0] [i_2] [i_4 - 1] [i_4 + 1]) : (arr_10 [i_0 + 1] [i_0 + 1] [i_4] [i_4 + 1])))));
                    var_19 += (897044906 & var_9);
                }
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    arr_20 [9] [i_2] = -897044917;
                    arr_21 [i_0] [i_0] [i_4] [i_6 + 3] = var_0;
                }
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    var_20 = var_9;
                    arr_24 [i_7] [i_7] [i_0] = (((arr_14 [i_2 + 1] [i_2]) ? -var_7 : var_2));
                }
                for (int i_8 = 1; i_8 < 23;i_8 += 1)
                {
                    arr_27 [3] [i_2] [i_8] [i_8] = ((arr_12 [i_8] [i_4 - 1] [8] [i_2]) | (arr_26 [i_2] [i_8] [i_8] [i_2]));
                    var_21 = (((728678059 ? 106 : 63)));
                }
                var_22 = -897044906;
                var_23 *= (-16 - var_0);
                var_24 = ((var_3 ? (arr_15 [i_4 + 1] [i_0] [i_0] [i_0 - 4]) : (((var_5 ? -11 : 1)))));
            }
            arr_28 [i_0] [i_0] [i_0] = var_0;
        }
        for (int i_9 = 1; i_9 < 23;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 20;i_11 += 1)
                {
                    {
                        var_25 = (max(((~((var_8 * (arr_37 [i_11]))))), ((((195 ? 1 : (arr_35 [i_11 - 1] [i_10 - 1] [i_9])))))));
                        var_26 ^= var_6;
                    }
                }
            }
            var_27 &= 33554431;
            arr_38 [i_9] [1] [i_0 + 1] = ((((max((arr_31 [i_9 + 1]), (max(1248984388, 7373))))) - ((1 ? 1 : -7355))));
        }
    }
    var_28 = (max(-1609057252, 3));
    #pragma endscop
}
