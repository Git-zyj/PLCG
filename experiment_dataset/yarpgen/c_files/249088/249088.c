/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((((((~(arr_2 [i_0] [i_0]))) | 8182838651591324550))) ? (arr_1 [8]) : ((-((4021289609 ? 127 : 1))))));
        var_10 = (min(var_10, 127));
        arr_4 [11] = ((~(arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (min((min(102, 13144311791381090492)), (((max((arr_1 [9]), (arr_1 [i_1])))))));
        arr_9 [5] [5] = ((((1 * (arr_5 [i_1] [i_1])))) ? (((((~(arr_0 [2])))) ^ (max(-5975816062140787314, 8756652921286540946)))) : (arr_7 [i_1]));
        var_11 = (max(var_11, ((max((((114 ? 5 : 113))), ((((min((arr_0 [i_1]), (arr_5 [i_1] [11])))) ? (119 ^ -118) : (arr_7 [i_1]))))))));
    }
    var_12 = ((!((max(((max(var_8, 162))), var_7)))));
    var_13 &= (max((((1 / var_7) * (var_4 + 187))), (min((~23), -7270341582169569408))));
    #pragma endscop
}
