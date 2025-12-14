/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_7 >= 242);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [1] = 9223372036854775807;

        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            arr_6 [24] [i_1] [i_1] = (((((max(var_3, 1)))) ? (arr_3 [i_1 - 2] [i_1]) : (min(var_7, (arr_4 [i_1])))));
            var_12 = min(-268435456, 1);
            var_13 = (((((+(((-1 + 2147483647) << (((arr_3 [i_1] [11]) - 279366215))))))) ? 0 : (arr_3 [i_0] [i_1])));
            var_14 = (min(var_14, -81));
        }
        arr_7 [i_0] = (((((var_6 % (max(451989936, (arr_0 [i_0])))))) ? (1 & 71) : ((1 ? 573993440 : 1))));
        arr_8 [0] [i_0] = min(-14, ((+(min((arr_3 [19] [i_0]), var_4)))));
    }
    var_15 = (((4294967295 ? ((max(46, -1285))) : -var_0)));
    var_16 = (min(((var_6 ? var_1 : (var_10 >= 1))), -var_0));
    var_17 = (((var_3 ? (5134701361732088021 + var_3) : 0)) > (((var_10 * (min(109, var_8))))));
    #pragma endscop
}
