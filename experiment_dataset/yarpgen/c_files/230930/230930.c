/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    var_14 = var_6;
    var_15 = 0;

    for (int i_0 = 3; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_16 = (max(131068, (arr_0 [i_0])));
        arr_2 [i_0] = (((((0 ? ((((!(arr_1 [i_0 - 3]))))) : ((-(arr_0 [i_0])))))) ? (((((-1 ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (!15872) : (((arr_1 [i_0 + 3]) ? 65534 : (arr_0 [i_0 + 3]))))) : (min(((min(1, 1))), (max((arr_0 [i_0]), 1))))));
        var_17 = (min(((-(arr_0 [i_0 + 1]))), (arr_0 [i_0 + 1])));
        var_18 *= ((~(1 && 1)));
        var_19 = ((((max((arr_0 [i_0]), ((254 ? 18446744073709551603 : (arr_0 [8])))))) ? (((((((65525 ? 9223372036854775807 : 1))) && ((max(9223372036854775788, 562949953413120))))))) : ((((max((arr_1 [i_0]), (arr_0 [i_0])))) ? (arr_0 [i_0 + 2]) : (((min((arr_1 [i_0]), (arr_1 [9])))))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_20 = (((arr_4 [i_1 - 1]) ? (!1) : ((65532 ? -1 : 15872))));
        var_21 ^= (arr_0 [i_1 + 3]);
        var_22 = ((~(arr_1 [i_1 - 1])));
    }
    for (int i_2 = 3; i_2 < 12;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            var_23 = (max(((~(arr_9 [i_3 + 1] [i_3 + 1]))), ((((((arr_7 [i_2 - 1] [i_2 - 1]) <= (arr_3 [5]))) ? (arr_1 [i_2 - 3]) : (arr_6 [i_2 + 3]))))));
            var_24 = (min((((-(arr_3 [i_3])))), (max((((24576 ? (arr_4 [i_3]) : (arr_4 [11])))), (arr_5 [i_3 + 1] [i_3 + 1])))));
            var_25 += (max(((!(arr_5 [i_2] [i_3 + 1]))), ((!((((arr_5 [i_2] [4]) ? (arr_9 [i_2] [i_2]) : 1)))))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_26 = (max(((-9223372036854775788 ? (arr_10 [i_4]) : 12)), (arr_19 [i_2] [i_3] [i_3 - 2] [i_4] [i_4] [5] [i_6])));
                            var_27 = -2;
                        }
                    }
                }
            }
        }
        var_28 = max((arr_9 [i_2] [i_2]), (((~(((arr_5 [i_2 + 2] [7]) ? 127 : (arr_6 [i_2])))))));
    }
    #pragma endscop
}
