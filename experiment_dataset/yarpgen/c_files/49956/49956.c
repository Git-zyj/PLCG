/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((min(var_9, var_7)))) ? (max(((var_6 >> (-1074937554 + 1074937581))), (var_5 && var_9))) : ((-((max(103, var_11)))))));

    for (int i_0 = 4; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_13 *= (min(32767, 4294967295));
        var_14 *= (((((~(max((arr_0 [i_0]), (arr_1 [i_0])))))) || (((0 >> (153 - 124))))));
    }
    for (int i_1 = 4; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_15 = ((((min(var_2, (arr_1 [i_1])))) ? (((86 ? 152 : 9079))) : 1794541297));
        var_16 += (min((!var_4), (min(247, 13370425640544629290))));
    }
    for (int i_2 = 4; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_17 += ((!((((arr_4 [i_2]) ^ (min((arr_5 [i_2]), -1933454291)))))));

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_18 = ((~(((((arr_2 [i_2 + 1]) ? (arr_8 [i_3] [i_3]) : 0)) - (((min(1, 1))))))));
            var_19 ^= arr_4 [i_2 - 3];
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_12 [3] [i_2] = ((-(102 / 7253461856871015500)));
            var_20 = (min(var_20, ((min((((min((arr_7 [i_4] [i_2 + 2]), 262143)))), -9076)))));
        }
    }
    var_21 = (((var_10 && 115) ? (max(var_3, (801900225 & var_2))) : ((min(0, var_4)))));
    #pragma endscop
}
