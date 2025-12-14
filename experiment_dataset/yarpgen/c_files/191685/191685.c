/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((!-var_5), var_12));
    var_14 -= (17592186044416 & 1);
    var_15 = -1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (min((((!(((~(arr_1 [i_0]))))))), ((((min((arr_1 [0]), (arr_0 [7] [7])))) ? (((arr_1 [i_0]) ? 41 : (arr_1 [i_0]))) : (arr_0 [i_0] [i_0])))));
        var_17 |= (max((((arr_1 [i_0]) ? (((!(arr_1 [i_0])))) : ((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))), (((arr_1 [i_0]) % (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_18 |= (((min((arr_1 [i_1]), (((arr_1 [i_1]) ? (arr_5 [i_1] [i_2]) : (arr_6 [1])))))) ? ((-((34 ? 53 : 4294967295)))) : 17);
            var_19 = 124;
            var_20 = (min(var_20, (min((((((19 ? (arr_5 [i_2] [4]) : (arr_7 [i_1] [1] [i_1])))) ? (arr_6 [i_1]) : ((min((arr_2 [3]), (arr_0 [i_1] [i_1])))))), (arr_0 [i_1] [i_2])))));
            var_21 = (max(-6144282167779451752, (((arr_7 [i_1] [i_2] [i_1]) ? (arr_5 [i_1] [i_2]) : (arr_7 [i_1] [i_1] [i_1])))));
        }
        for (int i_3 = 4; i_3 < 9;i_3 += 1)
        {
            var_22 ^= (max((((((32161 ? (arr_8 [i_3] [i_1]) : 1))) ? (arr_3 [i_3] [i_3 - 2]) : (((arr_0 [i_1] [i_1]) - (arr_9 [i_1]))))), ((min((((!(arr_9 [i_1])))), ((-(arr_1 [i_3]))))))));
            var_23 = ((!((min((arr_5 [i_3 + 4] [i_3 + 1]), ((((arr_2 [i_1]) ? (arr_1 [i_1]) : (arr_1 [i_1])))))))));
            var_24 = (max(var_24, ((max((max((arr_6 [i_1]), (arr_6 [i_3 + 2]))), (((!(arr_6 [i_1])))))))));
        }
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            var_25 = (((((~(((arr_11 [2] [i_1]) & 2345221304450356084))))) ? ((((max((arr_2 [i_4]), (arr_4 [i_1])))) ? (~-6634416219028392511) : (arr_1 [i_1]))) : ((((~39428) ? (arr_8 [i_1] [i_4]) : ((~(arr_2 [1]))))))));
            var_26 = ((7239734316637346744 ? (((min((arr_7 [i_4 + 1] [i_4 + 1] [i_1]), (arr_4 [i_4]))))) : ((9167596998965980507 ? -47 : -6144282167779451735))));
        }
        var_27 = (min(var_27, (((-(min((arr_2 [8]), (((arr_11 [2] [i_1]) ? 18056986618495694434 : 87)))))))));
    }
    #pragma endscop
}
