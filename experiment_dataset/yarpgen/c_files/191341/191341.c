/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((-1389233852 ? 18446744073709551615 : 1978729930))) ? var_1 : (((~0) | (var_4 + var_10)))));
    var_15 = (min(var_5, ((213 < (min(249, 1395578142))))));
    var_16 = var_3;
    var_17 = var_12;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [4] [i_0] = 18446744073709551613;
        arr_3 [i_0] = (((((((((arr_1 [i_0]) > var_0))) <= (((arr_0 [i_0] [i_0]) ? var_7 : (arr_1 [i_0])))))) > (arr_1 [i_0])));
        var_18 = ((-(arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_19 += ((+((((arr_1 [i_1]) && (((45 ? (arr_5 [i_1] [i_1]) : (arr_1 [8])))))))));
        var_20 = (+((min((arr_1 [i_1]), (arr_1 [i_1])))));
        arr_6 [i_1] = ((-((1616075052 ? ((46 ? 255 : (arr_5 [i_1] [i_1]))) : ((-(arr_0 [10] [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            arr_11 [6] = (((arr_7 [i_2]) << (((((arr_8 [1]) ? (arr_8 [i_3]) : (arr_9 [i_3]))) >> (min(13, 2472189585))))));
            var_21 = ((((min((arr_1 [i_3 - 1]), (arr_1 [i_3 + 3])))) - (arr_7 [6])));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_14 [i_4] = ((((((arr_1 [i_2]) ? (arr_1 [i_4]) : (arr_1 [i_2])))) ^ ((7838515780361366589 ? var_6 : (arr_1 [i_4])))));
            var_22 &= -var_12;

            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {

                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    arr_19 [i_5] [i_5] &= 7;
                    arr_20 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = (arr_8 [i_2]);
                    arr_21 [i_2] [i_4] [i_4] [6] = (((min(((33554424 ? var_4 : 65)), (((2147483647 ? 2147483647 : (arr_18 [i_4] [i_4])))))) + (2023294047 > 31595)));
                }
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    var_23 = (min(var_23, -44));
                    var_24 = ((((max(var_8, (11148 | 1)))) ? (arr_15 [i_2] [9] [i_2] [2]) : (((!32767) ? ((18446744073709551610 ? 65535 : (arr_23 [i_4] [i_4] [i_4] [i_7] [i_7] [i_4]))) : (arr_23 [i_2] [i_2] [i_4] [3] [3] [i_7 - 1])))));
                    arr_24 [i_2] [i_2] = 0;
                    var_25 = (max(var_25, ((max((arr_22 [i_2] [i_4] [1] [i_7]), ((-((~(arr_8 [i_7 + 1]))))))))));
                }
                arr_25 [5] [i_4] [i_5] [i_5] = 146;
                arr_26 [10] = 15;
            }
        }
        var_26 += (-(var_3 / 32767));
        var_27 += ((-(arr_1 [i_2])));
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        var_28 = ((((((arr_27 [i_8] [i_8]) | 0))) && ((((((arr_29 [i_8]) ? (arr_30 [i_8] [i_8]) : 4161968999412622701)) >> (((arr_29 [i_8]) - 8023407612768916607)))))));
        arr_31 [i_8] = -15404;
        arr_32 [10] = ((((!(arr_29 [2]))) ? 6 : (((max(0, 24870))))));
        var_29 = (arr_29 [i_8]);
    }
    #pragma endscop
}
