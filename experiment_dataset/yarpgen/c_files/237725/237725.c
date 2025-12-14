/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_16 = (max(var_16, (((-((max(((0 || (arr_2 [i_0]))), (!var_10)))))))));
        var_17 ^= ((+(((arr_1 [i_0]) | var_14))));
        arr_3 [i_0] &= (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_18 = (max(var_18, (((-((((((!(arr_2 [i_1]))))) ^ ((~(arr_4 [i_1]))))))))));

        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            var_19 = (max(var_19, ((((((((((!(arr_8 [i_1])))) != (arr_8 [9]))))) ^ (-371787850 / 8787503087616))))));
            arr_10 [1] [10] = -288230376118157312;
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_20 = (min(var_20, (((-(max((arr_7 [i_3] [i_1]), (((arr_12 [i_1]) | var_15)))))))));
            var_21 = (min(var_21, -32005));
        }
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_22 -= ((-(arr_17 [i_4] [i_4] [i_5])));
            var_23 = (arr_6 [i_4]);
            var_24 = (max(var_24, ((((arr_4 [i_5]) ^ (arr_13 [i_4] [i_4]))))));
            arr_18 [i_5] [i_5] = ((-(((!((((arr_1 [i_5]) ^ (arr_17 [i_4] [7] [i_4])))))))));
            var_25 -= ((-(min((arr_12 [i_4]), (-32005 ^ 32005)))));
        }
        var_26 = (max(var_26, ((((((47332 ^ (arr_9 [i_4])))) ^ (((arr_6 [i_4]) ? (arr_6 [i_4]) : (arr_6 [i_4]))))))));
    }
    var_27 = var_1;
    #pragma endscop
}
