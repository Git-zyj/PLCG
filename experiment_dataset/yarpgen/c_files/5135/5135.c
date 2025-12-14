/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
                {
                    var_13 &= 0;
                    arr_9 [i_0] [i_2] [i_2] = (arr_5 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_14 *= -4329805658160530503;
                                var_15 = (17042430230528 ? ((-(arr_0 [i_1]))) : 1);
                                var_16 -= ((((-117253532 ? -2263310006352463980 : 0)) == (arr_7 [i_0] [i_3 + 1] [i_3] [i_3 - 1])));
                                arr_16 [i_2] [i_1] [i_1] = var_3;
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                {
                    var_17 = (min(var_17, ((((((1 ? ((((var_10 && (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [1]))))) : 4329805658160530502))) ? (-117253563 / 18) : (arr_2 [i_5]))))));
                    arr_19 [i_0] [i_0] = (arr_13 [i_0] [i_1] [i_1] [i_1] [i_5]);
                }
                var_18 = ((-4329805658160530491 ? (arr_14 [1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : ((32584 ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_14 [18] [i_1] [i_1] [i_0] [i_0] [i_0] [i_0])))));
                arr_20 [i_1] [i_0] = (min(((3462992732 - (((25589 << (4329805658160530491 - 4329805658160530491)))))), (((((min(12426475532558803434, 59368))) && 8)))));
            }
        }
    }
    var_19 += 534380072789039962;

    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_20 += -50376;
        var_21 = (max(var_21, (arr_14 [i_6] [i_6] [19] [i_6] [20] [19] [i_6])));
        var_22 += ((-(((36 != (-127 - 1))))));
    }
    #pragma endscop
}
