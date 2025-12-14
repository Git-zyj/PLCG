/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((--4294967295), ((~(27 - var_16)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_21 -= (min(((~(((arr_2 [i_0] [i_0]) ? 27 : -27858)))), (((((-(arr_1 [i_0] [i_0]))) < ((0 ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));
        var_22 = ((((var_15 || (((53 ? -1148052065705237027 : -1000757715))))) && ((((~48) ? (((-1111811801 + 2147483647) << (((arr_1 [i_0] [i_0]) - 70)))) : 1084752750)))));
        var_23 = 41;
        var_24 = ((!(arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_25 = ((((((var_16 * 5727) ? ((min(4294967250, (arr_3 [i_1])))) : var_2))) ? ((((((arr_1 [i_1] [i_1]) | 171))) * ((-1084752751 ? 53 : 4)))) : (arr_1 [i_1] [i_1])));
        var_26 = ((-7457622902331922604 ? (((1084752750 ? (arr_4 [i_1]) : 59808))) : 18446744073709551615));
        var_27 = (min(((var_13 ? ((1084752750 ? 14 : 1084752751)) : (((((arr_0 [i_1]) <= (arr_1 [i_1] [i_1]))))))), ((((arr_2 [i_1] [8]) ? (arr_1 [i_1] [i_1]) : (~1084752750))))));
        var_28 -= var_15;
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_29 = 65515;
        var_30 = (max(var_30, ((max((min((arr_0 [i_2]), ((1084752750 << (13393 - 13393))))), ((((min(355887450, 14)) < ((((arr_1 [i_2] [i_2]) - 65486)))))))))));
        var_31 = 1;
    }
    var_32 -= ((!((min((var_12 & 2571333275), 260396901)))));
    #pragma endscop
}
