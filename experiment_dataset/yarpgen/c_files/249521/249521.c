/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_12 = (i_0 % 2 == zero) ? (((((((var_3 | (arr_3 [i_0] [i_1] [4]))) | (arr_0 [i_0]))) << (((((~66758903) ? ((var_4 >> (((arr_5 [i_0] [i_1] [i_0] [i_1]) - 7242760946172703674)))) : var_0)) - 1260012))))) : (((((((var_3 | (arr_3 [i_0] [i_1] [4]))) | (arr_0 [i_0]))) << (((((((~66758903) ? ((var_4 >> (((((arr_5 [i_0] [i_1] [i_0] [i_1]) - 7242760946172703674)) - 5846809333343720916)))) : var_0)) - 1260012)) - 4293726968)))));
                                var_13 = (min(var_13, (((((((min(var_10, 171))) ? (arr_9 [i_0] [i_1] [i_1] [16] [i_1] [i_3] [i_4]) : (max(4228208375, -2507254275998487243)))) > 39446)))));
                                arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_0] = -2507254275998487272;
                            }
                        }
                    }
                    var_14 &= (arr_7 [i_2] [1] [i_2] [i_2] [i_2]);
                }
            }
        }
    }
    var_15 = (min(var_5, ((((max(2147483644, 14450))) ? (min(var_3, 15287361767735188809)) : (((var_10 ? var_7 : 170)))))));
    var_16 &= (((18446744073709551615 ? 255 : var_5)));
    #pragma endscop
}
