/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            arr_4 [i_0] = 1;

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                arr_7 [i_0] [i_0] [i_0] [i_2] = ((((((arr_6 [i_1] [i_1] [i_1 + 4]) ? (arr_6 [i_0] [i_0] [i_1 - 1]) : (arr_5 [i_1 - 2] [i_1 + 3] [i_1 - 2])))) ? (!140737488355327) : (((!(arr_5 [i_1 - 3] [i_1 + 2] [i_2]))))));
                arr_8 [i_0] = (min((arr_2 [i_1 - 1] [i_1 + 4] [i_1 - 3]), (arr_5 [i_1 - 1] [i_1 + 4] [i_1 - 3])));
                var_14 = (min((((arr_3 [i_1 + 3] [i_1 - 2] [i_1 + 4]) + var_10)), (arr_3 [i_1 - 3] [i_1] [i_1 + 3])));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_15 = (arr_10 [i_0] [i_0] [i_0] [3]);
                arr_11 [i_0] [i_0] [i_1] [i_3] = (arr_5 [i_1 - 2] [i_1 - 1] [i_1 + 3]);
            }
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_16 -= var_0;
            var_17 = (min(var_17, (((arr_3 [i_0] [i_0] [i_4]) == ((min(var_3, (arr_5 [i_0] [i_4] [i_4]))))))));
        }
        arr_14 [i_0] [i_0] = min(4, ((min((arr_6 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_0])))));
    }
    var_18 *= (((((-(!-9)))) || (-127 - 1)));
    var_19 += ((~((((var_10 ? 63146 : var_4)) - 1))));
    var_20 = (((((((-9 ? 8 : var_11))) ? (min(var_6, var_6)) : (var_5 >= 1))) < (min(((-23 ? 9 : 5820622543214056576)), var_13))));
    #pragma endscop
}
