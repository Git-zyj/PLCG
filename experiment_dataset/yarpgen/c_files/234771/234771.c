/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(7119423862354103629, -8167540955874611178));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = 59;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] = ((~65472) ? (min(32749, 232597863)) : 23842);
                    var_19 &= 13985;
                    var_20 = ((((min((((arr_8 [i_0] [i_1]) / (arr_1 [i_1] [i_1]))), (((~(-127 - 1))))))) ? (arr_4 [i_0] [i_1] [i_2]) : ((((((arr_5 [i_2] [i_1] [i_0]) ? (arr_5 [i_0] [0] [i_2]) : (arr_6 [i_1] [2] [i_2] [4])))) ? (((arr_8 [i_0] [i_0]) ? var_2 : 109)) : ((((arr_5 [i_0] [1] [i_2]) || 11437)))))));
                    arr_11 [i_0] [1] [i_0] = (arr_1 [i_1] [i_0]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_21 = (max(19, 1));
        var_22 += (max((max((arr_3 [i_3]), (arr_3 [i_3]))), (max((arr_3 [i_3]), (arr_3 [i_3])))));
        arr_15 [i_3] = (min((max((arr_0 [i_3] [i_3]), (max((arr_7 [i_3] [i_3]), (arr_9 [i_3]))))), var_15));
        var_23 *= ((((min(32767, (arr_8 [i_3] [i_3])))) ? (max((arr_8 [i_3] [i_3]), (arr_8 [i_3] [i_3]))) : ((187 ? (-9223372036854775807 - 1) : 32756))));
    }
    var_24 = ((1 ? ((((max(11426, 1610065845))))) : 3226285324792412495));
    #pragma endscop
}
