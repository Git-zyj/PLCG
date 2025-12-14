/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_0));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_18 = (min(((max(1, 1))), (min(1020, 1))));
        var_19 -= (!var_4);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    {
                        var_20 = ((!(arr_6 [i_1])));
                        arr_12 [i_1] [i_1] [i_1] [15] = (((arr_10 [i_1] [i_1] [i_3] [i_4 - 1] [18] [i_3]) >= (arr_10 [1] [i_2] [i_1] [i_4 - 1] [i_3] [4])));
                        var_21 = ((((min((arr_5 [i_1]), var_15))) >= (min((((arr_9 [i_1] [i_1] [8]) ? (arr_0 [i_1]) : (arr_5 [i_1]))), (((!(arr_1 [i_1] [i_1]))))))));
                    }
                }
            }
        }
        var_22 *= (min((4294967286 && 43), (35 > 96)));
    }
    for (int i_5 = 3; i_5 < 15;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                {
                    arr_23 [i_5] [i_6 + 1] [i_6 + 1] = (!1);
                    arr_24 [i_5] [8] [i_5] [13] = (((var_2 ? (arr_21 [i_5 - 3]) : (arr_21 [i_5 - 2]))));
                }
            }
        }
        var_23 = (arr_16 [i_5 - 3] [i_5]);
        var_24 = 65440;
    }
    for (int i_8 = 1; i_8 < 20;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 18;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    {
                        var_25 ^= 29370;
                        var_26 = var_1;
                        arr_35 [i_8] = (arr_9 [i_8] [i_9] [3]);
                    }
                }
            }
        }
        arr_36 [i_8] = (((arr_6 [i_8]) || (arr_4 [i_8] [i_8])));
    }
    var_27 = ((min(var_6, var_3)));
    #pragma endscop
}
