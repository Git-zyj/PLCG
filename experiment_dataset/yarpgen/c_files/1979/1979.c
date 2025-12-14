/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((!((min((((172 ? 4606 : -1640804078))), (min(var_2, 432345564227567616)))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 = ((((min((((arr_1 [i_0]) & 16515)), ((0 ? 1765670774 : (arr_1 [i_0])))))) ? (max(((18014398509481983999 ? (arr_1 [i_0]) : 18446744073709551594)), ((max((arr_1 [i_0]), 12352))))) : ((min(((1152921504590069760 ? (arr_1 [i_0]) : (arr_0 [i_0]))), 131)))));
        var_12 = (((((max((arr_0 [i_0]), (arr_0 [i_0]))))) ^ (min((arr_1 [i_0]), (arr_1 [i_0])))));
        var_13 = ((((min(((max(17038, 53189))), (arr_1 [i_0])))) ? ((((((max(32754, 4294967287))) || 16508)))) : ((((((arr_1 [i_0]) ? 9 : 1))) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_14 = (((arr_2 [i_1] [i_2]) ? (((-6 ? 48 : ((25015 ? 63 : 53183))))) : 4086591958));
            arr_7 [i_1] [i_1] = ((16494 ? 10 : 31466));
            var_15 = max((((!((((arr_5 [i_1]) ? (arr_5 [i_2]) : 510)))))), 1718739719);
        }
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            var_16 = (((((192 ? 2576227576 : 112))) ? (((arr_3 [i_3 - 1]) - (arr_3 [i_3 + 1]))) : (min((arr_3 [i_3 - 1]), (arr_3 [i_3 - 1])))));
            arr_10 [i_1] [i_3] = ((((((arr_3 [i_1]) ? (~-1787093660) : (arr_2 [i_3 + 1] [i_3 + 1])))) ? (arr_9 [i_3] [i_3 + 1] [i_3 + 1]) : ((((min(8, 655072470))) ? ((0 ? (arr_3 [i_1]) : 379396845)) : (arr_8 [i_3 + 1] [i_3 + 1])))));
        }
        arr_11 [i_1] = ((~(((max(-7443535863799349723, 190)) & ((((arr_3 [i_1]) | (arr_2 [i_1] [i_1]))))))));
        arr_12 [i_1] = ((!((min(42, (arr_6 [i_1]))))));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_17 = (max(((((arr_5 [i_4]) <= (arr_5 [i_4])))), 127));
        var_18 &= (min((((1718739719 || (arr_6 [i_4])))), (min((arr_6 [i_4]), (arr_13 [i_4] [i_4])))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] [i_5] = ((!(arr_16 [i_5])));

        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            var_19 *= ((~(arr_5 [i_5])));
            arr_21 [i_6] [i_6] [i_5] = 239;
        }
        arr_22 [i_5] = (arr_17 [i_5]);
        var_20 = (min(var_20, (((8 * (arr_6 [i_5]))))));
        var_21 = (min(var_21, ((((arr_2 [i_5] [i_5]) - (arr_2 [i_5] [i_5]))))));
    }
    var_22 = var_9;
    #pragma endscop
}
