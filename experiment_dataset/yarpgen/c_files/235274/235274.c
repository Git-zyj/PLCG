/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1751259082;
    var_11 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (max(var_4, var_5));

                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    var_13 = var_7;
                    var_14 = (((28 / 1751259092) ? 16985655547984634794 : (arr_6 [i_0] [i_1] [i_0 - 1])));
                    arr_8 [i_0 - 1] [i_0] [i_2] [1] = ((255 ? (max(254, 112545118473518150)) : (((((arr_6 [i_0] [i_0 - 1] [i_0 - 1]) > (arr_6 [i_0] [i_0 - 1] [i_2])))))));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_15 = var_0;
                        var_16 = var_8;
                    }

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_17 = (max(var_17, (max((((-((max(var_4, 47)))))), 12612415995636672043))));
                        var_18 = (((arr_14 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1]) ? (arr_14 [i_0] [i_0] [i_3] [i_3] [i_5]) : (max(var_9, var_5))));

                        for (int i_6 = 4; i_6 < 15;i_6 += 1)
                        {
                            arr_20 [i_0 - 1] [13] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((var_3 - 9955902311987301213) ? (max(12612415995636672043, var_8)) : var_3))) ? 1751259085 : (max((max(1, 2543708213)), (28 >= 0)))));
                            var_19 = 0;
                            var_20 = (min(var_20, 251));
                            var_21 = max(((((max(58, (arr_7 [i_0])))) ? (var_9 | 43) : 15)), var_1);
                        }
                    }

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        arr_23 [i_0] [i_0] [i_0] [i_0] = ((max(2543708213, (arr_10 [i_0 - 1]))));
                        var_22 = ((((max(var_5, var_4))) ? ((((max(71, (arr_15 [i_0] [i_0] [i_0 - 1])))) ? (((1 ? 198 : 255))) : (arr_0 [i_3] [i_7]))) : ((max(1, var_6)))));
                        var_23 = (max((((-2147483647 - 1) ? (arr_0 [i_0 - 1] [i_0 - 1]) : 3)), 0));
                        arr_24 [i_7] [i_3] [i_0] [i_0] [i_0 - 1] [i_0] = (max(((48826 ? 62 : (arr_13 [i_0]))), ((var_2 ? (arr_13 [i_0]) : var_4))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_24 ^= 76;
                                var_25 = (min(var_25, 0));
                            }
                        }
                    }
                    var_26 = (max(((62 ? var_6 : (arr_12 [i_0] [i_0]))), 97526721));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                {
                    var_27 = -870989382;
                    arr_34 [i_0] [i_0] = 0;
                }
            }
        }
    }
    #pragma endscop
}
