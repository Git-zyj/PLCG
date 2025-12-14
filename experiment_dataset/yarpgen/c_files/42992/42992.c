/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = ((((-(arr_3 [i_1])))) ? (((arr_0 [i_1]) ? (((arr_5 [i_0] [i_1] [i_1] [4]) ? (arr_4 [i_0] [i_0]) : (arr_3 [i_2]))) : (arr_3 [i_0]))) : (arr_5 [i_0] [12] [i_0] [4]));
                    var_19 = (arr_0 [i_2]);
                    var_20 = (arr_6 [i_2]);
                }
            }
        }
        var_21 = (((((((arr_0 [i_0]) ? (arr_4 [i_0] [i_0]) : (arr_0 [i_0])))) ? (((min((arr_3 [13]), (arr_3 [i_0]))))) : (arr_2 [i_0] [i_0]))));

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_22 = ((!(arr_9 [i_3] [i_3] [i_3])));
            var_23 ^= (((arr_5 [i_0] [14] [i_3] [i_3]) ? (((arr_6 [i_0]) ? (arr_2 [4] [4]) : (arr_5 [i_0] [i_0] [i_0] [i_0]))) : (arr_3 [i_3])));

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_24 = (arr_2 [i_0] [i_3]);
                var_25 = (arr_2 [14] [i_3]);
                var_26 = (max((min(((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_8 [i_0] [i_0])))), ((17792790985650306638 ? 3 : 18446744073709551615)))), (((~(arr_2 [i_3] [i_4]))))));
                var_27 = (((((min((arr_0 [i_3]), (arr_2 [i_4] [i_0]))))) ? (arr_11 [i_4] [i_3] [i_0]) : (arr_3 [i_3])));
                arr_12 [i_0] [i_3] [i_4] = (arr_1 [i_0]);
            }
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                var_28 -= (arr_2 [i_0] [i_3]);
                var_29 = (((!(arr_8 [i_0] [i_3]))));
            }
        }
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_30 = (max(var_30, ((((((((((arr_0 [i_6]) ? (arr_1 [i_6]) : (arr_7 [i_6])))) ? (((arr_10 [i_6] [i_6]) ? (arr_1 [i_6]) : (arr_3 [i_6]))) : (arr_7 [i_6])))) ? (((8191 ? 52 : 204))) : (((!(arr_14 [i_6] [4] [i_6] [10])))))))));
        var_31 = (((arr_14 [i_6] [i_6] [i_6] [i_6]) ? ((((arr_0 [i_6]) ? (arr_8 [i_6] [i_6]) : (arr_13 [i_6] [i_6])))) : (arr_15 [i_6] [i_6] [i_6])));
    }
    for (int i_7 = 0; i_7 < 0;i_7 += 1)
    {

        for (int i_8 = 2; i_8 < 9;i_8 += 1) /* same iter space */
        {
            var_32 &= ((202099728 ? 3349205727424838296 : 4196));
            var_33 ^= (arr_18 [i_8] [i_7]);
            var_34 = 3;
        }
        for (int i_9 = 2; i_9 < 9;i_9 += 1) /* same iter space */
        {
            var_35 = ((68719476735 << (204 - 171)));
            var_36 = ((((((((203 ? 0 : 0))) ? ((55273 ? 4205726604 : -6481553418486537800)) : (arr_25 [i_7 + 1])))) ? ((89240692 ? 1 : (arr_19 [i_7 + 1]))) : (arr_22 [i_7])));
        }
        var_37 = (arr_25 [i_7 + 1]);
        arr_26 [9] = (max((arr_16 [i_7]), ((((((arr_15 [i_7] [i_7] [i_7]) ? (arr_19 [i_7]) : (arr_25 [i_7])))) ? (arr_19 [i_7 + 1]) : (arr_8 [i_7] [i_7])))));
        var_38 = (arr_16 [i_7]);
    }
    var_39 += var_14;
    #pragma endscop
}
