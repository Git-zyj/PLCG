/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 16;i_4 += 1)
                            {
                                var_16 = ((((~(arr_1 [i_0 + 1])))) || (((6450 | (4808 * 0)))));
                                arr_14 [i_1] [i_1] [i_1 - 2] [i_1] [16] = ((((min((!6449), (max(6439, (arr_3 [i_1])))))) || ((min((min(-8, 15)), (~var_1))))));
                                var_17 *= ((max((-13 >= -6422), (8269 > -86128163821224027))));
                                var_18 ^= ((((max(1, -6445))) || (!15)));
                            }
                            for (int i_5 = 1; i_5 < 16;i_5 += 1)
                            {
                                var_19 *= ((((6441 && (arr_3 [i_0 - 1]))) || var_1));
                                var_20 = (min((min((((arr_3 [i_3]) % (arr_1 [i_3]))), 0)), (arr_1 [i_3 + 1])));
                                var_21 = 7;
                                arr_18 [i_0] [i_0] [i_0 - 1] [i_1] [i_0 - 1] = (((max(((((arr_12 [i_0] [i_1 - 1] [i_1] [i_1 - 1] [i_3]) > 0))), var_15))) ? ((((((arr_4 [i_0] [i_1] [i_5 + 1]) >> var_8))) ? (12 | 45659) : ((0 / (arr_3 [i_0]))))) : -6449);
                                var_22 = (+-21);
                            }
                            for (int i_6 = 0; i_6 < 17;i_6 += 1)
                            {
                                var_23 += ((((!(var_10 ^ 6438))) ? (var_15 > 1) : (((min(var_15, -16)) * ((min(6429, var_8)))))));
                                var_24 = var_0;
                                var_25 = ((!(((19 - (arr_1 [i_3 - 2]))))));
                                var_26 = (min(-23, (((min(var_13, 3829204120)) * 0))));
                            }
                            arr_21 [i_0] [i_0 - 1] [i_1] [i_0] = var_5;
                            var_27 = (-13972 & 23);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_28 = ((((~(arr_17 [i_0 - 1] [i_1 + 1] [i_7] [i_8] [i_1] [i_1 - 1]))) % (max((arr_5 [5] [i_8]), ((1 ? 8 : 114))))));
                            arr_30 [i_7] [i_1 + 1] [i_7] [16] |= (min(((max((-6444 | -51), ((min(0, var_14)))))), (max(45659, (max(19862, var_0))))));
                            var_29 = (arr_13 [i_0 + 2] [i_1 - 1] [i_7] [i_8] [i_1] [i_8] [i_8]);
                            var_30 &= var_1;
                        }
                    }
                }
            }
        }
    }
    var_31 = var_15;
    var_32 = (min(((var_10 ? ((min(var_15, var_7))) : var_1)), ((min(2, 65533)))));
    var_33 = (min((max(20445, 1)), 1));
    var_34 = (min(var_34, ((min(var_8, ((var_12 || ((max(18, 1))))))))));
    #pragma endscop
}
