/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((((((max(18446744073709551605, var_3)) ? (!4294967273) : (var_5 >= var_2))))))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_21 *= ((~((var_19 ? (max((arr_0 [1]), var_7)) : (((arr_1 [i_0]) ? (arr_0 [i_0]) : 31))))));
        var_22 = (arr_1 [9]);

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_4 [i_0] = (arr_0 [i_0 - 2]);
            arr_5 [i_0] = (max(4294967273, 23));
            var_23 = (((((arr_1 [i_0]) ? (((arr_1 [i_0]) / (arr_3 [i_0] [21] [i_1]))) : (max(3871637133097089178, (arr_1 [8]))))) | (4035925302 > 89)));
            var_24 = ((((((arr_1 [i_0 - 2]) % (arr_1 [i_0 + 1])))) ? (arr_3 [3] [i_1] [i_1]) : (max((166 <= 1), ((187 / (arr_1 [i_0])))))));
        }
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            var_25 = ((((min(1, 0))) ? ((22 ? var_9 : var_15)) : var_2));
            var_26 = (max(var_26, ((((!(arr_6 [i_2])))))));
            var_27 = (max(var_27, (((min(((-5835 ? var_3 : 5834)), 0)) > ((((((arr_6 [i_0]) * 0)) | (((arr_6 [20]) * 0)))))))));
        }
    }
    #pragma endscop
}
