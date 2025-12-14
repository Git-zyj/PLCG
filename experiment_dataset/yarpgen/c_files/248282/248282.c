/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, -var_15));
    var_18 = var_0;
    var_19 = (~var_12);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((min((((arr_4 [i_1] [i_1]) ? 4294666691 : 94)), (30720 & 31))));

                for (int i_2 = 4; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    var_20 = (arr_1 [i_2]);
                    arr_9 [i_1] = (arr_3 [i_0] [5]);
                    var_21 = ((-(((arr_2 [i_2 - 4] [i_2 - 4]) ? ((251 ? (arr_3 [i_1] [6]) : -23139)) : (((arr_4 [i_1] [i_1]) ? (arr_0 [4]) : (arr_1 [1])))))));
                    arr_10 [i_0] [i_1] [i_1] [i_0] = (((((~(arr_0 [i_2])))) ? ((((!(arr_0 [i_0 - 1]))))) : ((-(((arr_5 [i_0] [i_1]) << (-23139 + 23154)))))));
                }
                /* vectorizable */
                for (int i_3 = 4; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    var_22 |= var_2;
                    var_23 |= 30720;
                }
                for (int i_4 = 4; i_4 < 11;i_4 += 1) /* same iter space */
                {
                    var_24 = (min((arr_11 [i_0] [i_0 + 2] [i_4 - 1]), (((~(arr_7 [i_4 - 1] [7] [i_4 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_20 [i_1] [i_1] [i_4 - 1] [i_5] [i_6] = (min((((((max(30858, 2259087653351245005))) ? 161 : -1823691785))), 1542042256));
                                var_25 ^= (arr_1 [i_5]);
                                var_26 |= (~-0);
                            }
                        }
                    }
                }
                var_27 -= ((((89 == (arr_2 [i_0 + 1] [6])))) >= ((min((arr_7 [i_0] [1] [i_1]), ((var_8 <= (arr_12 [i_1])))))));
            }
        }
    }
    var_28 = ((-var_14 / (min(var_11, var_7))));
    #pragma endscop
}
