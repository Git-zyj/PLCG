/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (4021951161 ? var_10 : (((((15997585981434418634 ? 1576220678 : 3385655108))) ? (min(var_12, var_15)) : var_10)));
    var_18 = (3141218790 * 6062868324759019754);
    var_19 = (((((3289392784 ? 4144892960 : 857883907))) ? (((((3385655108 ? 18296480324312872517 : 3437083389))) ? 857883923 : ((var_9 ? 3141218790 : var_16)))) : (((((3 ? 253464060 : var_11))) ? var_6 : 2877390159))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 ^= (((((((((arr_2 [i_0]) ? (arr_2 [i_0]) : 4660180397522803170))) ? 3437083388 : ((7295213812421402889 ? 3221225472 : 1576220684))))) ? (((arr_0 [i_0]) | (((arr_0 [i_0]) ^ 12383875748950531862)))) : ((((max(3437083388, (arr_1 [i_0])))) ? ((4095 ? 3437083397 : (arr_2 [i_0]))) : (((arr_2 [i_0]) ? 3793147101 : (arr_2 [i_0])))))));
        arr_3 [i_0] = (arr_1 [i_0]);
        var_21 = (((max((((arr_0 [i_0]) & 0)), ((min(439417969, 2718746624)))))) ? (((arr_2 [i_0]) ? ((17293822569102704640 ? (arr_1 [i_0]) : 12)) : (max(3437083384, 16190241452269026384)))) : (arr_1 [i_0]));
    }
    #pragma endscop
}
