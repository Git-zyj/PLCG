/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((max(2142342534, var_6)))) / (((((var_2 ? var_10 : var_1))) ? ((var_0 ? var_4 : 936944673)) : 936944654))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 = (((((((((arr_3 [i_0]) ? 3731847816 : 17592181850112))) ? ((-235162617460597916 ? (arr_3 [3]) : 13325075397569848171)) : (arr_2 [i_0])))) ? (13325075397569848160 / 114688) : (((((2302144006 + (arr_0 [i_0] [i_0]))) | (max((arr_1 [i_0]), (arr_0 [i_0] [i_0]))))))));
        var_22 = (-((((max(188, (arr_2 [i_0])))) ? ((((arr_3 [7]) ? (arr_2 [i_0]) : (arr_0 [i_0] [i_0])))) : ((60 ? 868741668099448433 : 43728)))));
    }
    var_23 = ((((min((var_16 & var_6), (7240324721964619757 != var_9)))) || ((((47781 ? var_6 : var_13))))));
    var_24 &= ((((((var_9 ? var_4 : var_0))) / ((var_12 ? var_4 : 1346864167875759571)))));
    var_25 = (((max((((var_18 ? var_8 : var_0))), ((var_3 ? var_18 : var_3)))) % (min((218 & 5121668676139703455), (((var_14 ? var_1 : var_18)))))));
    #pragma endscop
}
