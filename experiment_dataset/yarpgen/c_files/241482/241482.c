/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_4 [0] [i_0] = (((((18446744073709551615 ? 65535 : 18641))) || ((((var_12 ? (arr_0 [i_0]) : -122))))));
        var_16 = (((((~(arr_3 [i_0 + 3])))) ? (arr_3 [i_0 + 1]) : ((((arr_3 [i_0 + 2]) <= (arr_3 [i_0 + 3]))))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_7 [i_1] [i_0 + 1] [i_0] &= min(((((((16297883841015690651 | (arr_0 [i_1])))) || (arr_3 [i_0 - 2])))), (max((max(5, 1)), -83)));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                arr_11 [i_0] = var_11;
                arr_12 [i_0] [2] [i_2] [i_1] = (arr_5 [i_2] [i_2] [i_2]);
                arr_13 [i_1] = (((arr_0 [i_0 + 2]) / var_6));
            }
            arr_14 [i_0] [i_0] [i_1] = (min(((((arr_6 [i_0 + 4] [i_0 + 4]) > (arr_6 [i_0 + 1] [i_0 + 4])))), ((((!(arr_1 [i_1]))) ? (((var_15 ? var_10 : -17522))) : (arr_0 [i_0])))));
            var_17 -= ((((((!var_3) ? (((arr_0 [8]) ? (arr_8 [1] [1] [i_0] [i_1]) : 67)) : ((min((arr_1 [i_1]), (arr_1 [i_1]))))))) ? (((53548 + (arr_6 [i_0] [i_0])))) : var_15));
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_18 = (max(var_18, (((40 ? (((~(arr_9 [i_0] [i_3] [i_0])))) : (((~75) ? (arr_8 [i_0 + 3] [i_0 + 1] [i_0 - 2] [i_0 - 1]) : (min(1373914998, (arr_18 [2] [i_0 + 3]))))))))));
            var_19 = ((!((min((((var_9 ? var_12 : 4294967294))), ((202076423 | (arr_8 [10] [i_0] [10] [i_3]))))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 11;i_5 += 1)
                {
                    {
                        var_20 = (-var_7 ? (arr_3 [i_4]) : ((-0 ? 4294967267 : 0)));
                        var_21 &= (min(0, ((((var_4 - var_0) ? (~-65151393) : ((-(arr_5 [i_0] [4] [3]))))))));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_22 = -var_2;
            arr_27 [i_0 + 2] [i_6] [i_6] = ((((17071035616589476728 ? (1 <= 4294967284) : (arr_1 [i_0 - 1]))) / -114));
        }
        var_23 = (((~(arr_23 [i_0 + 2] [7]))));
    }
    var_24 = (((((((((-127 - 1) ? 8785 : 4033340448))) ? 83 : 3040264426069304314))) ? ((min(((7670381269325221047 ? var_3 : var_0)), var_0))) : 3901338212));
    #pragma endscop
}
