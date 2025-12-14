/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 ^= var_6;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [11] = min(((max((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1])))), (min(var_5, 25238)));
        arr_3 [i_0] = (max(25238, (-32767 - 1)));
    }

    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_16 = (max(var_16, ((min((((((min(-25238, 182456))) != 1290683579))), 144)))));
            var_17 = 25235;
        }
        var_18 = (min(var_18, ((min(11603531771441629580, var_7)))));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_19 [i_3] [i_5] [i_3] [1] = var_4;
                        var_19 = ((((!(arr_4 [10]))) ? (min((arr_15 [i_3] [1] [1]), (((!(arr_6 [i_3])))))) : (arr_4 [6])));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_25 [i_3] [i_3] [0] [0] [i_5] = 2097642816;
                                var_20 ^= 11603531771441629580;
                            }
                        }
                    }
                    var_21 = var_3;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 12;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            {
                                arr_38 [9] [9] [1] [9] [10] = (-(((arr_7 [i_12] [i_12 - 1] [i_12 - 1]) ? (arr_7 [i_12] [i_12 - 1] [i_12 - 1]) : (arr_7 [i_12] [i_12 - 1] [i_12 - 1]))));
                                var_22 = (min(var_22, (arr_24 [8] [8] [i_10] [12] [8] [10] [1])));
                                var_23 = ((!((((arr_16 [i_3] [1] [i_3] [6] [2]) | (((min(var_13, 144)))))))));
                                var_24 = 652484407;
                                var_25 = (min(var_25, var_3));
                            }
                        }
                    }
                    var_26 ^= (arr_7 [i_10 + 2] [i_10 + 2] [i_10 + 2]);
                }
            }
        }
    }
    #pragma endscop
}
