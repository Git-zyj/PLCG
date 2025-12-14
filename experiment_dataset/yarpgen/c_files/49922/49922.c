/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_13 % var_4);
    var_17 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 ^= (!(var_13 ^ 1));
        arr_2 [i_0] [i_0] = ((1 & (arr_1 [i_0])));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_19 = ((342013526 ? ((max(((1 != (arr_5 [i_1]))), (!0)))) : ((((((arr_3 [i_1]) == 1))) * (arr_5 [i_1])))));
        arr_7 [i_1] = (((!(arr_3 [i_1 - 2]))) ? (((!7) ? ((-(arr_6 [i_1]))) : 1)) : 225460468);

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_20 = (min(var_20, ((((8907567094440161049 ? (((var_4 / (arr_9 [i_1] [i_2] [i_2])))) : ((12730489 ? 13431822149809353600 : (arr_4 [i_2]))))) > (((min(-25587, (!1)))))))));
            var_21 = ((!((max(((max((arr_3 [i_2]), var_3))), (min(var_15, var_11)))))));
            arr_11 [i_2] &= (((1 - (var_12 - var_1))));
            arr_12 [i_1] [i_2] [i_2] = (min(-1903750981, var_14));
        }
        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            arr_16 [i_1] = (((arr_14 [i_1]) ? (max((arr_10 [i_1]), (min(1, var_4)))) : (((-2179623565492535060 ? (4901348852302514829 >= var_1) : 1)))));
            var_22 = (~((520192 ? var_15 : 13776)));
        }
    }
    for (int i_4 = 1; i_4 < 23;i_4 += 1)
    {
        var_23 = (min(var_23, ((-(max((((var_14 % (-2147483647 - 1)))), (min(1, 18446744073709551608))))))));

        for (int i_5 = 2; i_5 < 22;i_5 += 1)
        {
            arr_22 [i_4] [i_5] = var_8;
            var_24 = ((!-3) <= ((((min(var_8, (arr_18 [i_4]))) <= (arr_21 [i_4] [i_4] [i_5])))));
            var_25 = (((((4785 ? var_4 : 1))) ? (((55966 ? 2147483635 : (arr_18 [8])))) : 9559));
            var_26 *= ((!(((~(var_13 || 7627538340463707595))))));
        }
    }
    var_27 = var_3;
    #pragma endscop
}
