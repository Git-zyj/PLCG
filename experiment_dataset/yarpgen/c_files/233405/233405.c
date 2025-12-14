/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_20 = ((-(var_11 * var_4)));
            arr_6 [i_1] [i_1] [i_1] = ((((min(((var_7 ? -1477826318 : var_9)), 8786518735178844175))) <= (1 / 6426077239758506835)));
            var_21 = (min(var_21, (arr_0 [i_1])));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_11 [i_0] [i_0] = ((1 >> ((1 ? 1 : 121))));

            for (int i_3 = 4; i_3 < 9;i_3 += 1)
            {
                var_22 = var_1;
                var_23 &= (((((arr_7 [i_3 - 4] [i_3] [i_2]) + (((!(arr_14 [3] [i_2] [3])))))) >= (((var_13 ^ var_13) | (((arr_7 [i_0] [i_0] [8]) ^ (arr_5 [i_0])))))));
                var_24 *= (((((var_9 ? (arr_2 [3] [3] [3]) : (!var_17)))) ? (0 - 1) : (min((~1), (166 == -7483)))));
            }
            var_25 = (max((((~(arr_4 [i_2] [i_2] [7])))), var_0));
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_26 = ((((((((62 ? 218 : (arr_2 [i_4] [0] [i_4])))) ? (var_9 >= 144) : var_0))) ? ((((var_3 ? var_17 : 1)) << (((min(var_15, (arr_17 [i_0] [i_4]))) + 5438734654359730364)))) : (((((!(arr_1 [i_4]))) ? ((1 ? 104 : 55)) : ((var_16 ? var_14 : var_3)))))));
            var_27 = (((((~((var_14 ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : var_18))))) ? (((var_17 >= 0) + (max(1, 6426077239758506841)))) : (((arr_10 [i_0] [i_4]) ? var_17 : (arr_12 [1] [1] [1])))));
        }
        var_28 = ((((+(((arr_3 [i_0]) ? 19344 : var_13)))) * 192));

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            arr_21 [i_0] |= (((1 >= 1) ? var_18 : -26844));
            var_29 = ((!(((arr_8 [i_0] [i_5] [i_5]) >= 149))));
            var_30 = ((((((~102) | ((1 ? (arr_16 [i_0] [i_0]) : var_1))))) ? ((~(arr_17 [i_0] [i_5]))) : (var_14 & 1)));
            var_31 |= (((~172) + (((arr_20 [i_0] [i_0] [i_0]) + 1))));
            arr_22 [5] = 18446744073709551591;
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_26 [0] = ((((((arr_10 [i_0] [i_6]) - 53))) >= ((~(arr_20 [6] [i_6] [i_0])))));
            var_32 = (~((0 ? (42 & var_1) : ((max(var_13, (arr_1 [i_0])))))));
            var_33 = (min(var_33, (((~((~(arr_1 [i_6]))))))));
        }
        arr_27 [i_0] = (!202);
    }
    var_34 = var_1;
    var_35 = (min(var_35, ((max(((((max(var_16, var_7))) ? var_11 : (((var_10 ? -6430708878906793326 : 185))))), var_10)))));
    #pragma endscop
}
