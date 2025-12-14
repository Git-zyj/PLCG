/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0 - 1] = -84;
                arr_8 [i_0] = -15788;
                var_20 ^= 12720;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                arr_13 [0] |= ((-(arr_4 [i_2] [i_2] [i_2])));
                var_21 = ((~(((((52 ? 1 : 88))) ? ((max(-79, -58))) : ((-12 ? (arr_4 [16] [i_2 - 1] [i_3]) : (-127 - 1)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_22 = (min(var_22, ((min(((-52 ^ (arr_21 [i_7] [i_7] [i_6 - 1] [21]))), (((!((max(18391, 3076568697)))))))))));
                            var_23 = (((((((arr_23 [0] [i_6] [i_6] [2]) % 46649)) > var_16)) && ((max(20198, (-6316973315276660983 && 1218398599))))));
                            var_24 = (max(var_24, ((((var_19 && var_9) | (max((~2684), (((!(arr_2 [i_4])))))))))));
                        }
                    }
                }
                var_25 = ((((min(4, 62907)))));
                arr_26 [i_4] [8] [5] = (((((((var_13 + 2147483647) >> (120 - 106)))) ? ((65535 ? 62849 : 121)) : ((8463260858394156090 ? 84 : (arr_3 [i_4]))))));
            }
        }
    }
    #pragma endscop
}
