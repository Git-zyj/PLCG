/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = 2276467760583271259;
                arr_5 [i_0] = (((arr_2 [i_0 + 1]) ? (((arr_0 [i_0] [i_1 + 1]) & (arr_4 [i_0 + 1] [i_1 + 1]))) : (arr_2 [i_0 + 1])));
            }
        }
    }
    var_15 = -21968;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                {
                    var_16 ^= (!var_4);
                    var_17 = 15301408454575162516;

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        arr_18 [i_4] [i_3 - 2] [i_5] = (((((arr_15 [i_4]) ? 8921301425706516130 : var_3)) >= (var_9 - 5982425934003931402)));
                        var_18 = (max(var_18, (~0)));

                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            var_19 = (2147483647 << (((((arr_16 [i_6 - 2] [2] [i_4 - 1] [i_5]) + 842030966)) - 27)));
                            var_20 *= ((-(arr_16 [i_6 + 2] [i_6 + 2] [i_4] [i_4 - 1])));
                            var_21 = ((((((-127 - 1) ? var_9 : -628959969617276879))) ? -4029185672530483186 : ((((77 && (arr_14 [i_6] [i_5] [i_3 + 1] [i_2])))))));
                            var_22 += (arr_12 [i_6] [i_3 - 1] [i_3 - 2] [i_3 - 2]);
                        }
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        var_23 = (min(var_23, var_7));

                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            var_24 = (((((arr_22 [i_4] [i_4]) + 9223372036854775807)) << (((~var_7) - 1998411616))));
                            arr_26 [i_2] [i_4] [i_4] [i_7] = -70368744177664;
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            var_25 = (arr_9 [i_3 + 1] [i_4 + 1]);
                            var_26 |= ((((8725770307796098593 ? (arr_15 [i_7]) : 255)) != ((1298324387 ? 2 : (arr_8 [i_2] [17])))));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_27 = -106;
                            arr_32 [3] [i_3 + 1] [i_4] [i_7] [i_10] = (((arr_22 [i_2] [i_4]) - ((((arr_15 [i_4]) ? (-127 - 1) : (arr_30 [i_3] [i_3] [i_2]))))));
                        }
                        for (int i_11 = 4; i_11 < 21;i_11 += 1)
                        {
                            var_28 *= -1;
                            arr_36 [i_2] [5] [i_4] [i_4] [i_11 - 4] = var_5;
                            var_29 = (((((arr_10 [i_3] [i_4] [i_11]) + 2147483647)) << (((-4029185672530483186 + 4029185672530483188) - 2))));
                        }
                    }
                    for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                    {
                        arr_39 [i_2] [i_3] [i_4] [i_4] = 3678677;
                        var_30 = (((arr_19 [i_3 - 2] [i_4 - 1]) ? 8725770307796098583 : var_2));
                    }
                    var_31 |= (((arr_19 [i_3 + 1] [i_4 - 1]) * 104));
                }
            }
        }
        var_32 += ((9720973765913453033 ? 117 : -2143660267));
        arr_40 [i_2] = (((arr_12 [14] [i_2] [i_2] [i_2]) ? (((241 << (-6124883 + 6124890)))) : (arr_15 [20])));
    }
    #pragma endscop
}
