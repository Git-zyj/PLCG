/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((~((var_0 ? var_2 : var_2))))) ? (((((var_0 ? 63 : var_6))) ? (~var_5) : (~var_0))) : (((~((var_1 ? 51 : var_3)))))));
    var_14 &= ((((!(((65450 ? var_6 : 108))))) ? (!9151468506566500717) : (((!(((9223372036854775789 ? var_5 : 251658240))))))));
    var_15 = ((!((!(!1)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = ((!((((~1) ? ((var_4 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))) : ((1 ? 53 : (arr_1 [i_0]))))))));
        var_17 = (min(var_17, (((((((((-(arr_0 [i_0] [i_0])))) ? (((arr_0 [i_0] [i_0]) ? 34457 : (arr_1 [i_0]))) : ((var_4 ? (arr_1 [i_0]) : 1))))) ? ((((((var_5 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))) ? ((var_0 ? (arr_1 [i_0]) : var_5)) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))))) : ((~(((arr_0 [i_0] [i_0]) ? -3721659317310786841 : 3744342736408922969)))))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] = ((((((((var_7 ? (arr_3 [i_1]) : var_9))) ? (((arr_3 [i_1]) ? (arr_4 [i_1] [i_1]) : var_10)) : ((4294967295 ? var_0 : (arr_2 [i_1])))))) ? (((((var_8 ? 232 : 2569220423))) ? ((8756674736116352152 ? var_7 : var_11)) : ((var_6 ? var_11 : (arr_4 [i_1] [16]))))) : ((~(!1779251763857375908)))));
        arr_6 [i_1] [i_1] = (((((var_11 ? ((-(arr_4 [i_1] [i_1]))) : (~var_5)))) ? ((((((4253750081 ? (arr_2 [i_1]) : 7734371989504421982))) ? ((-54 ? 40 : (arr_4 [i_1] [i_1]))) : ((232 ? var_4 : var_2))))) : ((~(((arr_3 [i_1]) ? 9151468506566500720 : (arr_4 [i_1] [i_1])))))));
    }
    var_18 = ((~(((((var_10 ? 61 : var_8))) ? (((var_7 ? var_9 : var_11))) : ((var_8 ? var_5 : var_1))))));
    #pragma endscop
}
