/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((-8941561264064558107 || var_1), var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_13 *= ((max(51223, var_1)));
                    arr_9 [i_0] [i_0] [i_0] = var_11;
                }
                var_14 = (min(var_14, (((-((~(5876975881490848105 >= var_9))))))));
            }
        }
    }
    var_15 = var_6;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_22 [i_6] [i_4] [i_5] [i_4] |= 16092266127252406766;
                                var_16 = (((((min(-2106565066, var_9) + 2147483647)) >> (!var_0))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_17 -= ((~(max((var_4 - var_2), (var_2 + 16597815704150551158)))));
                                var_18 = (min((((min(1848928369559000457, var_11)) * 0)), (((var_11 / 1) * 2354477946457144838))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
