/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= var_8;

    for (int i_0 = 3; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_12 = ((((-(arr_1 [i_0]))) == ((((arr_0 [i_0] [i_0 - 1]) ^ (((arr_0 [i_0] [i_0]) & (-127 - 1))))))));
        arr_2 [i_0] = -1;
        arr_3 [i_0] [i_0] = var_2;
        arr_4 [i_0] [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_13 ^= 14;

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_14 = var_1;
                        var_15 = ((((min((((!(arr_13 [i_1] [i_4])))), (arr_0 [i_1] [i_3])))) ? (arr_7 [i_1]) : (((!(((arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) != var_3)))))));
                        var_16 = (max(var_16, ((((min(var_10, (min((arr_9 [i_1]), (arr_5 [i_4]))))) % 1)))));
                    }
                    var_17 *= ((-(arr_10 [i_1] [18] [i_2])));
                }
            }
        }
        var_18 ^= ((((max((arr_12 [i_1] [i_1 - 3] [i_1 - 3] [i_1]), var_0))) < (arr_12 [i_1] [i_1] [i_1] [i_1])));
        var_19 = 20253;
        arr_16 [i_1] = (~(arr_12 [i_1 + 1] [i_1] [i_1] [i_1]));
    }
    for (int i_5 = 3; i_5 < 21;i_5 += 1) /* same iter space */
    {
        var_20 = var_10;
        var_21 = (max((min((arr_14 [i_5 + 1] [i_5] [i_5 - 1] [i_5 + 1] [i_5 - 2] [i_5 - 2]), 1)), (min(var_3, (arr_14 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 0;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 20;i_9 += 1)
                {
                    {
                        var_22 = (((((-(var_9 | 1307531264)))) ? 14 : (min(((max(62, (arr_21 [i_9])))), var_4))));
                        arr_29 [i_6] [i_7] [i_6] [i_6] = (min((min((((arr_25 [i_6] [i_6] [i_8]) ? var_3 : (arr_21 [i_7]))), (((-127 - 1) ? 1 : -2503046508348403435)))), (((2331657352 << ((((var_6 | (arr_20 [i_9]))) + 197251825)))))));
                    }
                }
            }
        }
        arr_30 [i_6] = ((-((min(var_6, var_4)))));
    }
    #pragma endscop
}
