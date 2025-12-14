/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_10 = -var_2;
                    var_11 = 14252480859874095666;
                }
            }
        }
    }
    var_12 = 127;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            {

                /* vectorizable */
                for (int i_5 = 3; i_5 < 11;i_5 += 1)
                {
                    var_13 ^= 11172723326406962734;
                    var_14 ^= ((var_8 ? (arr_14 [i_4 + 1]) : (arr_14 [i_4 + 1])));
                    var_15 = (max(var_15, 43728));
                }
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    var_16 ^= ((var_1 / ((53923 - (arr_13 [i_6 + 1] [i_4 - 1] [i_4 - 1])))));
                    arr_21 [i_3] [i_3] [i_6] = (arr_20 [i_3] [i_3] [i_6 + 1]);
                    arr_22 [i_3] [i_4] [i_3] [i_3] = (((((!(arr_17 [i_3] [i_4] [i_4] [i_6 + 1])))) / var_9));
                    var_17 = (min(var_17, ((max((((!(arr_5 [i_6 + 1] [17] [i_6 + 1])))), (((arr_6 [i_4 + 1]) ? var_8 : (arr_6 [i_4 - 1]))))))));
                }
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    var_18 = ((((!(arr_0 [i_3]))) ? (!16831) : (((!(arr_10 [i_4 - 1]))))));
                    arr_25 [i_3] [i_4] = ((1 | (~var_1)));
                    var_19 = ((1357177167 ? 1 : (arr_17 [i_3] [i_4 + 1] [i_7] [5])));
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((((((!8432109103990346449) ? (arr_20 [i_9] [8] [i_4 - 1]) : (((var_7 / (arr_17 [i_9] [i_4 - 1] [i_4 - 1] [i_9])))))) / -4)))));
                                var_21 = (max(var_21, 2840615147));
                                var_22 = (i_3 % 2 == 0) ? ((((min(12482924734610020576, (arr_13 [i_4 + 1] [i_4 + 1] [i_4 + 1]))) & ((((-878608770 + 2147483647) << (((arr_17 [i_3] [i_3] [i_4 + 1] [i_4 - 1]) - 7619648059263744559)))))))) : ((((min(12482924734610020576, (arr_13 [i_4 + 1] [i_4 + 1] [i_4 + 1]))) & ((((-878608770 + 2147483647) << (((((((arr_17 [i_3] [i_3] [i_4 + 1] [i_4 - 1]) - 7619648059263744559)) + 5030061145725182333)) - 30))))))));
                                arr_34 [i_3] [i_4 - 1] [i_8] [i_9] [i_3] = 60130;
                                var_23 -= (-var_2 ^ var_0);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
