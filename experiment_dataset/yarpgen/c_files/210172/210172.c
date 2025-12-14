/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_13;
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 -= ((~((-((var_12 - (arr_0 [i_0] [i_1])))))));
                var_17 ^= (((~85) ? ((var_0 ? var_0 : (arr_0 [i_1] [i_1]))) : (arr_3 [i_0] [i_1])));
                var_18 = (min((min((arr_0 [i_0] [i_0]), (arr_0 [9] [i_0]))), (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));

                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        arr_9 [i_0] = (arr_7 [i_2 - 2] [i_2 + 1] [i_2] [i_2]);
                        var_19 *= (((((min(3, 33561)))) * (!31088)));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        var_20 = (!2008748735658278627);
                        var_21 ^= ((!((((~2892320151) ^ -1073741824)))));
                        var_22 = (((arr_2 [13] [13]) != (arr_13 [i_0] [4] [i_0] [i_4])));
                        var_23 *= (min((arr_11 [i_2 - 2] [i_2 - 1] [i_2 - 1]), (arr_6 [i_2 - 2] [i_2 - 2] [3])));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                    {
                        var_24 = (((arr_3 [i_5] [i_1]) & (arr_12 [13] [i_0] [i_0] [i_0])));
                        var_25 += (arr_14 [i_1]);
                    }
                    var_26 ^= (arr_15 [i_0] [i_1] [i_1] [i_2] [i_0] [i_0]);
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_27 += ((~(((arr_22 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 + 1]) + (arr_22 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 + 1])))));
                                var_28 = -323977881;
                            }
                        }
                    }
                    var_29 = (max(2008748735658278627, 5235271271612952142));
                }
                for (int i_9 = 3; i_9 < 13;i_9 += 1)
                {
                    var_30 = (min(var_30, ((min(((+((3 ? (arr_10 [i_1] [i_1] [i_1] [i_1]) : 34469)))), (((!(arr_22 [i_9 - 2] [i_9] [i_9 - 3] [i_9 - 2] [i_9])))))))));
                    var_31 &= (!118);
                }
            }
        }
    }
    var_32 -= ((((min(var_8, (var_9 + var_12)))) || var_6));
    #pragma endscop
}
