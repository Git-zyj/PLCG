/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min(((12566 ? 0 : 9409609384424723047)), (((1 ? 0 : 75)))))) ? var_15 : (((((((-29647 + 2147483647) >> (55 - 28)))) ? (((1251398409 ? 1 : -848891879))) : (min(4294967295, 2682)))))));
    var_20 = ((((((!(((41348 >> (-4551 + 4551)))))))) - ((((min(0, 206))) ? var_13 : -8650857066226026791))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_21 ^= 60;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_22 = (max(425484700884724817, -59));
                    var_23 = ((((min(-155846256, ((max(-106, 21442)))))) ? (((((159 == 0) || (!var_12))))) : (((-5747546973595382269 | 2054379675) ? 33 : (var_1 - 16)))));
                }
            }
        }
        arr_10 [i_0] [i_0] = (((-2147483647 - 1) ? ((((2147483647 ? 92 : 32766)))) : (min((1369340461358367987 | 18446744073709551615), (((0 ? 53 : 222)))))));
        arr_11 [i_0] = -99;
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = var_1;
        arr_15 [i_3] = (181 ? ((((14645632441286796440 == (min(18446744073709551615, 2220059459)))))) : (((2220059473 ? 80 : 4294967295))));
        arr_16 [i_3] = -812858091;
    }
    #pragma endscop
}
