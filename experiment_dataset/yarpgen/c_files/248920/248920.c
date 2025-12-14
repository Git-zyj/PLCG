/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    {
                        var_12 = max((((-4 + 2147483647) >> (9223372036854775793 - 9223372036854775791))), (min(var_6, (arr_10 [i_3 + 2] [i_1] [i_1] [16] [i_1] [i_3]))));
                        var_13 = (max(var_13, (arr_9 [i_1] [i_3 - 2] [i_1])));
                        var_14 = (max(var_14, (--44)));
                    }
                }
            }
            var_15 = (440749126 ? 3307047083 : 99);
            var_16 = (max(var_16, ((((~-440749122) ? ((min((arr_6 [16] [i_1]), (arr_6 [8] [i_1])))) : (((((min(284169704, -2147483632)) + 2147483647)) >> ((((~(arr_10 [i_0] [i_0] [i_0] [i_0] [i_1] [0]))) - 2037059753)))))))));
            var_17 *= min(118, (((!((min(-440749128, (arr_1 [i_1] [i_0]))))))));
            var_18 = (((max((arr_4 [2] [i_0] [14]), (!var_0))) != ((((((arr_1 [i_1] [i_0]) ? 1944049759319156219 : (arr_1 [i_1] [i_1])))) ? (max((arr_5 [i_0] [i_0]), (arr_8 [i_1] [i_0] [i_1]))) : ((min((arr_6 [i_0] [i_1]), (arr_0 [i_0] [i_0]))))))));
        }
        arr_11 [i_0] [i_0] = (((((!(((-32743 ? 1984247426 : (arr_6 [i_0] [i_0]))))))) >> (((min((((var_6 ? -284169733 : (arr_6 [i_0] [i_0])))), 2403147869267504605)) - 2403147869267504583))));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_19 = (max(var_19, -440749124));
        var_20 = (max(var_20, (arr_6 [14] [14])));
    }
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    var_21 |= (arr_1 [i_7] [i_6]);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_22 -= var_6;
                                var_23 ^= min((((-(max(-2147483630, 1612749165))))), (arr_9 [i_9] [2] [2]));
                                var_24 -= -74545407;
                                var_25 = (max(var_25, (((!(((max((arr_18 [i_5] [12]), (arr_18 [i_7] [4]))))))))));
                            }
                        }
                    }
                    var_26 = (max(var_26, (arr_13 [i_5] [i_5])));
                }
            }
        }

        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            var_27 = (min(var_27, ((min((max((arr_27 [i_10] [i_5] [i_5] [i_5] [12]), 18446744073709551615)), (arr_2 [i_5 + 1]))))));
            var_28 -= (arr_0 [12] [i_10 - 1]);
            arr_31 [i_5] = ((-(arr_14 [i_5 + 1])));
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 13;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        {
                            arr_41 [3] [7] [3] [i_5] &= (min((min((arr_8 [i_5 + 1] [i_11] [i_10 - 1]), 3974759489834103709)), (min(((4575657221408423936 | (arr_1 [3] [3]))), (~3720305093053353096)))));
                            var_29 = (min(var_29, ((min(((((max(759720060, 50014)) >= (((max(-32722, var_3))))))), ((min(1985078319, 1000208799))))))));
                            var_30 = (max(var_30, ((56119 ? var_6 : (44 >= 1)))));
                        }
                    }
                }
            }
        }
        arr_42 [i_5] [i_5] |= var_3;
        arr_43 [i_5] |= (+(min(((max((arr_32 [i_5] [i_5 + 1]), 32754))), (min(-2147483632, -45)))));
        var_31 = (min(var_31, (arr_4 [i_5] [4] [i_5 + 2])));
    }
    var_32 &= (max((min(-82, (min(43726, 39)))), 65532));
    #pragma endscop
}
