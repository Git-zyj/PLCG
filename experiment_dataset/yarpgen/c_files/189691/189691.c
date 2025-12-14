/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((1 ? (min((!63154), (255 - 5554))) : 4954));
    var_18 = ((var_7 || ((((((var_11 - 55581) + 9223372036854775807)) << ((((0 ? 0 : 152)) - 152)))))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = (min((((86 >= 4294967289) ^ var_2)), (((min((arr_1 [i_0] [i_0]), (arr_0 [i_0])))))));
        arr_5 [i_0] [i_0] = ((var_2 + (((min((arr_0 [3]), (max(112, 152))))))));

        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            var_19 = (min(var_19, (162 * 169)));
            arr_8 [i_0] [i_0] = (((((var_4 | var_3) | (arr_6 [i_0 - 1] [i_1 + 4] [6]))) << (var_15 - 32646)));
        }
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            var_20 = (44 / var_7);
            var_21 = ((~83) ? ((((!(arr_2 [i_0] [i_0]))))) : (((!(arr_3 [i_2] [3])))));
            arr_11 [i_2] [i_2] [i_0] = (arr_10 [i_0]);
        }
    }
    #pragma endscop
}
