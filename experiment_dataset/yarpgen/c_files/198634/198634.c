/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((((-18919 ? var_12 : var_15))) ? (min(8751902547300187942, 12512910719887259715)) : (-9197500668575341787 | 10743198310304946268)))) ? var_8 : 8751902547300187942));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (((var_3 ? 128 : (((max(1, var_11)))))) * (var_10 >= 65163239));
        var_18 = ((!(((var_3 ? var_12 : (arr_1 [i_0 + 1] [i_0 + 1]))))));
        var_19 *= 8751902547300187928;
        arr_4 [i_0] [i_0] = ((arr_0 [7] [i_0]) ? ((((max(var_14, (arr_2 [i_0])))) ? (max(12512910719887259709, 4229804057)) : -12)) : (((-((((arr_1 [i_0] [i_0 + 1]) >= (arr_1 [i_0 - 1] [i_0 + 1]))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_7 [i_0] = ((!(4229804050 < var_9)));
            var_20 = -1216922258;
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_21 = 10743198310304946266;
            var_22 = (min(var_22, ((max(12512910719887259726, (((-2147483647 - 1) ? (((arr_11 [i_2] [i_0] [i_0 - 1]) ? var_14 : 1775715360700887222)) : -629146617)))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_23 = ((37 ? 5105 : (arr_6 [i_0] [i_3] [i_0])));
            var_24 = ((~(var_3 >= 18446744073709551610)));
        }
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_16 [i_4] = (((176 == -1216922254) ? (((arr_10 [i_4]) - var_4)) : (min(var_4, (arr_12 [i_4] [i_4] [i_4])))));
        var_25 = (!229);
        arr_17 [i_4] = (((min((arr_5 [i_4] [i_4] [i_4]), (arr_9 [i_4] [i_4] [i_4])))) ? (((arr_1 [i_4] [i_4]) & (((arr_1 [i_4] [i_4]) ^ (arr_5 [i_4] [i_4] [i_4]))))) : ((max(-1595205262475919413, (arr_10 [i_4])))));
    }
    #pragma endscop
}
