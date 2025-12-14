/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_8 [i_0] = var_3;
                    arr_9 [i_0] [i_0] [i_2] [12] = var_1;
                    var_10 |= ((!((min(27641, 23529)))));
                    arr_10 [i_0] [i_1] [i_2] = ((((min((min(var_4, 27640)), (1 && var_1)))) ? (((arr_7 [i_0]) % ((var_3 ? var_7 : -27641)))) : 0));
                    var_11 = (((((arr_3 [i_0]) ? (arr_3 [i_0]) : var_0)) ^ (min((((arr_5 [i_1] [i_0]) ? (arr_5 [i_0] [i_1]) : var_5)), ((36680 << (((arr_4 [i_0] [4] [i_0] [i_0]) - 60750))))))));
                }
                for (int i_3 = 4; i_3 < 18;i_3 += 1)
                {
                    var_12 = ((((((arr_4 [i_0] [i_1] [i_0] [i_3 - 2]) ? var_1 : (~var_9)))) ? 0 : ((-((var_2 / (arr_12 [i_1] [i_3])))))));
                    var_13 = (min(var_13, var_5));
                    var_14 -= 7;
                    arr_14 [i_0] [15] [16] [15] = var_9;
                }

                for (int i_4 = 3; i_4 < 19;i_4 += 1) /* same iter space */
                {
                    arr_19 [i_0] [i_4] [i_4] = (arr_3 [i_1]);
                    var_15 = (max(-27641, 0));
                    var_16 = (min((((-23190 ? var_1 : 27640))), (min(var_3, (arr_5 [i_0] [i_1])))));
                }
                for (int i_5 = 3; i_5 < 19;i_5 += 1) /* same iter space */
                {
                    var_17 = min((((((1 ? (arr_12 [i_0] [i_0]) : 27649))) ? var_3 : ((((arr_16 [i_5]) / var_9))))), var_3);
                    var_18 = ((((min((arr_18 [i_5 - 3] [i_5 - 2] [i_5 - 3] [3]), (arr_13 [i_5 - 2] [i_5 - 2] [i_5 - 1])))) || 1));
                    arr_22 [i_0] [i_1] [i_5 - 1] [i_5] |= -8908;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_19 = var_8;
                                var_20 ^= (max((((arr_27 [i_5] [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_7 - 1]) ^ var_9)), ((((arr_27 [i_1] [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_7 - 1]) - 124)))));
                            }
                        }
                    }
                }
                var_21 -= -2383;
            }
        }
    }
    var_22 = var_3;
    #pragma endscop
}
