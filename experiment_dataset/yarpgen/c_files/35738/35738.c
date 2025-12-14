/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 |= min(((var_5 + (arr_1 [i_0]))), (arr_1 [i_0]));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_17 = (min(var_17, ((((((min((arr_5 [i_0] [i_0] [i_0]), 44)))) / (arr_1 [i_1]))))));
            var_18 |= (max(220, (((arr_0 [3] [i_1]) ? (arr_5 [i_0] [i_0] [i_1]) : (~44)))));
        }
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            var_19 = (110325124 != 22161);
            var_20 = (max(var_20, (~32750)));

            for (int i_3 = 2; i_3 < 24;i_3 += 1)
            {
                var_21 += ((((!(!var_8))) ? (((((var_9 ? var_10 : (arr_7 [i_2] [i_3 - 1])))) ? var_15 : (5 || 4184642171))) : ((((!(arr_9 [i_0] [i_0] [2] [i_0]))) ? (var_5 || var_13) : (8191 && 1230792345)))));
                var_22 = (~3769185346388790129);
            }
            var_23 *= ((((var_10 & (arr_8 [i_2 - 1] [i_2 + 3]))) & (((((arr_8 [i_2 + 2] [i_2 - 1]) + 2147483647)) << (1230792330 - 1230792330)))));
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_24 = 101;
            var_25 = (arr_7 [i_0] [i_0]);
        }
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_26 = (((44 ? (max(var_6, 18014398509481983)) : var_12)));
        var_27 |= (((((((var_7 + 2147483647) << (127 - 127))))) * -70));
    }
    var_28 = (max(var_28, var_9));
    var_29 ^= ((~((((100 ? var_13 : var_13)) ^ (((var_4 ? -1462488891 : 65535)))))));
    #pragma endscop
}
