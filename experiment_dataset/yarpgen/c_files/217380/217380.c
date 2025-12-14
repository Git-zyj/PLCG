/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -28480;
    var_19 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = (arr_4 [i_0] [6]);
                    var_20 -= (-var_10 * (((!(arr_2 [i_0] [i_1])))));
                    var_21 &= (((((arr_0 [i_0 + 1] [i_0 + 1]) <= ((((!(arr_3 [i_2] [i_1] [i_0]))))))) || ((((var_5 % (arr_5 [0])))))));
                }
            }
        }
    }
    var_22 = (min(var_22, var_13));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            {

                for (int i_5 = 3; i_5 < 20;i_5 += 1)
                {
                    var_23 = (max((arr_10 [6]), (min((arr_17 [i_5]), var_9))));
                    var_24 -= ((127674890 ? var_12 : (arr_14 [i_4 + 1] [i_4 + 1] [i_3])));
                    var_25 |= 17651538061251448568;
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 21;i_6 += 1)
                {
                    var_26 = (arr_14 [i_4 + 1] [i_6 + 1] [i_4]);
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_27 = (arr_11 [i_7] [i_6 - 2]);
                                var_28 = (arr_17 [i_8 - 1]);
                                arr_27 [i_4] = (!1);
                            }
                        }
                    }
                    var_29 = (arr_22 [i_3] [i_4] [21] [i_4] [7]);
                    arr_28 [1] [i_6] [i_6] [i_4] = 24;
                }
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_30 = (max(var_30, (((var_6 >> ((((-5670013996076574185 - (arr_17 [i_4]))) + 5670013998995690706)))))));
                            var_31 ^= -1;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
