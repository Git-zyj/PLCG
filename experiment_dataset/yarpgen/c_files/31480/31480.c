/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (((((192 ? var_14 : (arr_1 [i_1 - 2])))) ? (((((arr_1 [i_1 - 2]) <= 23)))) : ((var_8 ? 4745651945450133835 : (arr_1 [i_1 + 2])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_19, ((((((arr_4 [i_2] [i_1] [i_0]) | var_5))) ? ((((((arr_8 [0] [i_1 - 1] [i_2] [i_3] [i_3]) ? var_1 : 76))) ? ((var_4 & (arr_6 [i_0] [i_1 - 2] [i_2]))) : (153 == 25653))) : ((((((arr_0 [i_0]) ? (arr_8 [7] [17] [5] [5] [7]) : var_0)) | (arr_5 [i_1 + 2] [i_1 + 1]))))))));
                            var_20 ^= ((((((0 ? 0 : 0)) & ((var_9 ? 0 : var_8))))) ? (255 ^ 9203907545252076591) : ((((61528 && var_0) ? (arr_3 [i_0] [i_2] [i_0]) : ((var_12 ? -1 : (arr_8 [i_0] [i_1 + 1] [i_1 + 1] [i_2] [i_1 + 1])))))));
                            var_21 = (max(var_21, ((((((32767 ? 112 : 6))) ? (((((var_15 ? var_8 : (arr_2 [i_0] [i_0])))) ? ((-7081509785573619988 ? 1 : 25547966368909045)) : (((222 ? 13043 : var_8))))) : ((((((arr_10 [18]) >= 17123)) ? var_9 : (((var_5 ? var_10 : var_1)))))))))));
                            arr_11 [i_0] [19] [i_1] [i_2] [i_3] [i_3] = (((((((((arr_4 [i_0] [i_0] [i_0]) + (arr_9 [i_0] [11])))) ? (((-5121 ? 8191 : (arr_10 [i_1])))) : (((arr_9 [i_1] [i_2]) - 34359736320))))) > ((-14 ? 1304194159538186648 : 9242836528457475005))));
                        }
                    }
                }
            }
        }
    }
    var_22 = var_2;
    #pragma endscop
}
