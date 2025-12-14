/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((min((~32), var_8)) + 2147483647)) >> ((((var_1 ? ((4294967295 ? 1142309162 : 1)) : (~15))) - 1142309160))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = 10952;
                arr_5 [i_0] = ((~((3763996534 ? ((~(arr_1 [i_0]))) : var_4))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                var_11 |= ((((min((((arr_6 [i_2]) ? 18446744073709551615 : var_2)), ((((arr_7 [i_3] [i_2]) + 68)))))) ? ((13 ? (arr_6 [i_2]) : (max(98, var_9)))) : ((30027 - (min(107, 18446744073709551615))))));
                arr_10 [1] [i_3] [i_2] = (25506 < 65503);
                arr_11 [i_2] [i_3] [i_3] = ((max((arr_6 [i_2]), (min(14200724355934331093, 0)))));
                var_12 = 1077597957322584373;
                var_13 = (arr_6 [i_3]);
            }
        }
    }
    var_14 = (min(var_9, (((var_4 ? (~-2190556748161448637) : 2147483647)))));
    var_15 = var_3;
    #pragma endscop
}
