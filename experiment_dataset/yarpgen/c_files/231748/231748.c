/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_17 = (min(((min((min(-1, 80)), 80))), ((-(min(14849213717200120348, (arr_1 [i_0])))))));
        arr_3 [i_0] = var_9;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            var_18 = (((((((var_13 ? 4294967295 : -81))) ? var_6 : (3597530356509431284 % 4294967295))) == 16383));
            var_19 = ((8 ? (arr_5 [4]) : 1337590056));
            var_20 -= ((((((arr_2 [i_2] [i_1 - 1]) * 18446744073709551615))) ? var_16 : ((0 * (((-99 ? -90 : 80)))))));
        }
        arr_10 [i_1 - 1] [i_1 - 1] &= var_0;
        arr_11 [i_1] [i_1] &= 14282;
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            var_21 = (((min(((117 ? 97 : -48)), (arr_6 [i_3 - 1] [i_4 + 1]))) / (min(var_8, ((((arr_4 [7]) >= 56611)))))));
            arr_16 [i_3] [i_3] [4] = 4032;
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_22 = (min(var_22, ((min((~-1), (((var_6 + 9223372036854775807) >> (((arr_9 [i_5] [i_3 - 1]) - 50675)))))))));
            var_23 += 89;
            var_24 = ((((min((arr_4 [i_5]), var_8))) ? ((min(-80, (min((arr_4 [i_3]), 68))))) : (((!((var_8 < (arr_1 [i_3 - 1]))))))));
            arr_20 [i_3] = ((((min(-39, var_3))) ? ((~(((arr_2 [6] [i_5]) ? -8 : var_15)))) : 66));
        }
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            arr_23 [i_6] [i_3] [i_3] = (((~(arr_19 [i_3 - 1] [i_3 - 1]))) ^ 46600);
            var_25 = (arr_21 [i_3 - 1]);
            var_26 = min((arr_14 [i_6 + 2] [i_6 - 1]), ((((var_16 ^ -32765) ? 281 : (arr_1 [i_3])))));
            var_27 = (min(var_27, 255));
        }
        arr_24 [i_3 - 1] [3] = (min((min((arr_8 [i_3 - 1] [i_3 - 1]), 18919)), (min((arr_8 [i_3 - 1] [i_3 - 1]), (arr_4 [i_3 - 1])))));
        var_28 = (min(var_28, (((!0) ? (min(3, -15245)) : ((((-var_15 >= (arr_18 [i_3])))))))));
    }
    var_29 = (min(32767, 46618));
    var_30 = ((~(((!((min(65271, 80))))))));
    var_31 = var_4;
    #pragma endscop
}
