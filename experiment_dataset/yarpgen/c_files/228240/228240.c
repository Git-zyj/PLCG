/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((var_3 << (var_14 - 39))))) ? ((-(min(var_2, 12903344420957212114)))) : var_5));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_19 = (min((min((((arr_2 [i_0]) / (arr_2 [i_0]))), (arr_0 [i_0]))), ((((arr_1 [i_0 - 1] [i_0 - 3]) / (arr_1 [i_0 + 1] [i_0 - 1]))))));
        var_20 += 18322;
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        var_21 = max((((((arr_4 [i_1 - 2]) * (arr_6 [11]))) == (arr_4 [3]))), (arr_6 [i_1]));
        arr_7 [i_1] = (arr_5 [i_1] [4]);
    }

    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        var_22 = ((((min((((arr_8 [i_2 + 1] [i_2]) ? (arr_8 [i_2] [i_2]) : (arr_9 [i_2]))), (((1829833514934894947 == (arr_8 [i_2] [i_2]))))))) ? (arr_8 [i_2] [i_2]) : var_8));
        var_23 = ((~((((max(var_11, (arr_9 [i_2])))) ? -var_9 : 1829833514934894947))));
        var_24 = (((~1419014671269550335) < ((((((var_17 ? (arr_8 [i_2 + 4] [i_2]) : 0)) == ((-(arr_8 [6] [i_2])))))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] &= ((-((-(arr_8 [i_3] [1])))));
        var_25 = (max(var_25, (((((((arr_11 [i_3]) / (arr_11 [i_3])))) ? (max(((max(var_15, (arr_9 [i_3])))), (arr_11 [i_3]))) : (arr_11 [i_3]))))));
        var_26 = (max(var_26, ((((((((((arr_9 [3]) | (arr_10 [2] [1])))) ? (((arr_10 [i_3] [i_3]) ? (arr_11 [i_3]) : (arr_5 [16] [1]))) : (arr_6 [2])))) ? (65535 < -5469724878096226931) : (((!((max(var_1, -9061)))))))))));
        var_27 = (arr_3 [i_3]);
        var_28 = (12903344420957212114 == 1098846102);
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] [9] = (arr_11 [i_4]);

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_29 += (((-(((arr_15 [i_4] [i_4]) ? (arr_12 [i_5]) : -6206995152822273975)))));
            arr_20 [i_5] [i_4] = (((arr_11 [i_5]) ? ((((47212 && (arr_6 [i_4]))) ? 18322 : var_13)) : (((arr_8 [i_4] [2]) * (arr_4 [i_4])))));
        }
        arr_21 [i_4] = (min((arr_15 [i_4] [i_4]), (((arr_16 [i_4]) * (arr_19 [i_4] [i_4] [i_4])))));
        var_30 = (~663814219993697711);
    }
    #pragma endscop
}
