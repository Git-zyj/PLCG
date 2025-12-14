/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (max((min(((var_7 ? var_6 : var_8)), (((var_10 ? var_2 : var_1))))), 102));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_0] |= (var_10 % 8472);
            var_12 ^= var_7;
            var_13 += ((((8472 ? 231 : 42063))) ? (arr_2 [i_0 - 3]) : -8471);
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_14 |= (min(((((min(231, var_0)) != (((var_2 ? (arr_0 [i_0] [i_2]) : (arr_1 [4] [i_2]))))))), 8469));
            arr_7 [i_0] [i_0] [i_0] = (arr_5 [i_2] [i_0]);
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_15 = (max(var_15, ((((((arr_8 [i_3] [10]) ? ((8464 ? 223 : (arr_9 [1]))) : (((arr_5 [i_0] [i_0]) ? (arr_1 [i_3] [i_3]) : -8482))))) ? ((((-9223372036854775807 - 1) ? ((var_8 ? 8466 : var_1)) : (var_3 != var_10)))) : (arr_0 [i_0] [i_0])))));
            var_16 = (((max(var_3, var_1))) ? var_4 : ((((!(arr_0 [i_0 - 2] [i_0 - 1]))))));
            var_17 = (((arr_9 [i_0 - 1]) ? 8472 : ((min((!var_8), var_7)))));
            var_18 = 25;
        }
        for (int i_4 = 4; i_4 < 12;i_4 += 1)
        {
            arr_15 [i_0] = ((~(((~var_1) ? ((((var_4 == (arr_2 [i_0]))))) : 2030900399))));
            var_19 &= ((((min((arr_10 [i_4] [i_0] [i_0]), var_9))) ? var_6 : ((((arr_1 [i_0 - 1] [i_4 - 1]) ? (arr_10 [i_0 - 2] [i_0] [i_0 - 2]) : 221)))));
        }
        var_20 = ((((((((arr_1 [i_0] [i_0]) ? 1 : 53)) | (arr_14 [i_0] [i_0] [i_0])))) ? 243 : (((arr_5 [i_0 - 3] [i_0 - 3]) ? ((223 ? 248 : -1073741824)) : 8466))));
        var_21 = (min(((var_1 ? (arr_8 [9] [9]) : (arr_6 [i_0] [i_0] [i_0]))), ((4294967295 ? 14766 : 1))));
    }
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        var_22 = (min(((15 ? 8460 : 242)), (arr_16 [i_5 - 1])));
        var_23 *= (arr_16 [16]);
    }
    var_24 += 221;

    for (int i_6 = 1; i_6 < 11;i_6 += 1)
    {
        arr_22 [i_6 + 1] [1] |= (max(var_6, (((118 ? (max(404738323, var_2)) : (!var_8))))));
        var_25 = 46593;

        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            var_26 = (min(((var_4 ? (arr_17 [i_6 + 1]) : (arr_17 [i_6 + 3]))), ((58513 | (arr_21 [i_7 + 1])))));
            var_27 &= ((~(~25)));
        }
        var_28 |= (max(var_6, ((((!var_10) ? var_9 : var_5)))));
        var_29 = ((!(((((var_2 || (arr_23 [i_6 - 1] [i_6 - 1] [i_6 - 1]))) ? 241 : ((var_1 ? 200 : var_6)))))));
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        arr_30 [i_8] = ((-(max((~var_2), 25))));
        var_30 = (max(var_30, ((max((arr_20 [i_8] [i_8]), (((!((max(9187343239835811840, 41468)))))))))));
    }
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        var_31 = ((((max(18446744073709551615, -7))) ? (arr_31 [i_9] [i_9]) : (((max(0, (arr_17 [i_9]))) ? -910815429 : (max(36028796985409536, var_2))))));
        var_32 += var_10;
        var_33 -= 8472;
    }
    #pragma endscop
}
