/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((-54 < ((-122 ? var_4 : 9223369837831520256)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_13 = ((max(0, ((~(arr_0 [i_0]))))));
        var_14 = (((((2864474371355764742 ? (arr_0 [i_0]) : 747969460)) * (arr_1 [7]))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_15 = ((!((((arr_2 [i_1] [1]) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_1] [i_1]))))));
        arr_6 [i_1] = (((~36) ? (-7367324198956282149 != 264) : ((((((arr_5 [i_1]) & 513526078))) ? (((arr_5 [i_1]) ? -6689 : (arr_4 [i_1]))) : ((1 & (arr_4 [i_1])))))));
        var_16 ^= (((((5736218884744282059 >= (arr_0 [i_1])) ? (arr_0 [i_1]) : ((max(9682, (arr_2 [i_1] [i_1]))))))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_17 = (((((((!(arr_3 [i_2]))))) / (1226915434973598003 & -2545077731019309088))));
        arr_9 [i_2] [7] = (6288656263574261944 ? -1 : 1);
        var_18 = (((arr_1 [i_2]) ? (((-113 ? ((8 & (arr_2 [i_2] [i_2]))) : ((~(arr_1 [1])))))) : (((-2842154797580620471 & (arr_1 [i_2]))))));
        var_19 = ((-((+(((arr_1 [i_2]) ? 7590 : 624))))));
        var_20 = (arr_3 [i_2]);
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_21 ^= 15582269702353786889;
        arr_12 [i_3] = (((min((arr_10 [i_3]), 44788))));

        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            var_22 = (max(var_22, (+-908123079)));
            var_23 = 5620;
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_18 [7] = ((max(26, ((10 ? (arr_1 [i_3]) : 14)))));
            var_24 = ((~((((arr_3 [i_5]) - 2564060553)))));
            var_25 = ((((max(((~(arr_1 [i_3]))), ((~(arr_10 [i_3])))))) ? ((max((arr_3 [i_3]), -1073741824))) : (((arr_14 [11] [i_3]) ? (5835170452868168670 != 1) : (arr_0 [i_5])))));
        }
    }
    var_26 = (((50 << ((((var_3 ? -34 : 10145017455951416622) - 18446744073709551581))))));
    var_27 = ((!((!(32764 >= 30)))));
    #pragma endscop
}
