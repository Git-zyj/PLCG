/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((max(-581588947, var_5)) + (((max(var_4, var_0))))))) ? (min(87, -1)) : (!var_10)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_15 = -69;

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                var_16 |= ((~(~-69)));
                var_17 *= (((((arr_1 [i_0]) >> (((arr_1 [i_2]) - 78)))) & (((arr_1 [i_1]) / 68))));
            }
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                var_18 = 2947510254172827904;
                var_19 = (arr_4 [i_1]);
                var_20 = (min((max((arr_7 [i_1] [i_3 - 1] [i_3] [i_0]), ((-(arr_2 [i_1] [i_3]))))), (((min(2097151, 557193805)) >> var_2))));
            }
            var_21 = (max(var_21, ((max(((~(((arr_6 [i_0] [0]) ? -15344 : 3183456365)))), (((76 - ((min((arr_5 [i_1]), 1)))))))))));
        }
        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            var_22 -= (arr_6 [i_0] [0]);
            var_23 += ((~((1326505887 / (arr_7 [i_4 - 2] [i_4] [i_4 + 2] [10])))));
            var_24 = var_8;
            var_25 = (arr_6 [i_4 - 2] [i_4]);
        }
        var_26 = (max((min((arr_1 [i_0]), (arr_2 [i_0] [i_0]))), 69));
    }
    #pragma endscop
}
