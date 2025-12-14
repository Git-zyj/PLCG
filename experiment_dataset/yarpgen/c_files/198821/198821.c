/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (5824 ? 13586635778659345547 : 4710);
    var_13 &= (((-1575529055 <= var_4) && ((min((max((-32767 - 1), var_8)), (15497685341275225883 && var_11))))));

    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_14 &= 127;

        for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_15 = (((((((arr_5 [i_0]) < (arr_2 [i_0]))) || (arr_1 [i_0]))) ? (min((9223372036854775807 ^ 60834), (((var_3 | (arr_2 [i_0])))))) : (((-(arr_0 [i_0 + 2]))))));
            var_16 ^= (arr_2 [i_0 + 1]);
            var_17 = (max((max(((((arr_1 [i_0]) > (arr_4 [i_0] [i_0])))), var_11)), ((((arr_0 [i_0 + 2]) != 60814)))));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_18 = ((4294967295 ? 4710 : 1372965338900742302));
                var_19 |= (max(((~(arr_6 [i_0 - 2] [i_0 + 2] [i_1]))), (((1 < (-2147483647 - 1))))));
                arr_9 [i_2] [i_1] [i_2] [i_2] = ((!((((arr_2 [i_0 + 2]) << (((arr_2 [i_1]) - 1468951439)))))));
            }
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            var_20 |= ((~((((!(arr_6 [i_0] [i_0 + 2] [i_3]))) ? (arr_8 [i_3] [i_0] [i_3] [i_3]) : ((max(102, 2)))))));
            arr_12 [i_0 + 1] = (-(((min((arr_1 [i_0 - 1]), var_11)) / 207)));
        }
        var_21 = (max(var_21, ((((((((arr_0 [i_0]) != (arr_3 [i_0]))) ? (var_2 && var_10) : (~17741))) <= (arr_6 [i_0] [i_0] [4]))))));
    }
    for (int i_4 = 3; i_4 < 18;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] [i_4] = ((-((((arr_7 [10] [i_4 - 3] [i_4] [10]) >= (arr_7 [2] [i_4 + 1] [i_4 - 3] [2]))))));
        var_22 = (min(197, 9223372036854775807));
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    arr_22 [i_4] [i_4 + 1] [i_5] [i_6] = (max(((((arr_14 [i_4 + 2] [i_4 + 1]) * (arr_14 [i_4 + 2] [i_4 + 1])))), (((arr_14 [i_4 + 2] [i_4 + 1]) ? 22 : (arr_14 [i_4 + 2] [i_4 + 1])))));
                    arr_23 [i_4] = (((arr_2 [i_4 - 3]) ? 150 : 4294967295));
                }
            }
        }
        var_23 &= (17600 >= (min(var_2, ((127 ? (arr_21 [i_4] [i_4 + 2] [i_4] [i_4]) : 60814)))));
    }
    for (int i_7 = 3; i_7 < 18;i_7 += 1) /* same iter space */
    {
        var_24 += ((((max((arr_4 [i_7 - 3] [i_7 + 2]), ((((arr_2 [i_7]) < 4294967295)))))) ? ((min((var_5 > 48), (arr_21 [i_7] [i_7] [i_7] [i_7 - 3])))) : (min((73 + var_9), ((min(1, 70)))))));
        var_25 = ((!(arr_20 [i_7 - 2] [i_7] [i_7])));
        var_26 = 127;
        arr_28 [i_7] = 199;
        var_27 -= (((~-10) <= (((!(arr_5 [i_7]))))));
    }
    var_28 ^= -52;
    #pragma endscop
}
