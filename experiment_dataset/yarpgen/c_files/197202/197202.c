/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((min(((min(var_8, 1903388304))), ((var_14 >> (var_5 - 16481292354223793323))))), ((((((var_5 ? (-9223372036854775807 - 1) : 108))) ? (max(var_9, var_13)) : -2)))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_16 *= ((((min((~65535), (((arr_2 [i_0]) ? var_1 : (arr_4 [1] [i_1] [i_1])))))) ? (((arr_4 [14] [i_1] [i_1]) - (arr_1 [i_1] [11]))) : ((min(var_10, 0)))));
            var_17 = arr_5 [i_0] [16];
            arr_6 [i_0] [i_1] [i_0] = (-7684986254387560509 - ((min(var_7, (((327624345 && (arr_1 [i_0] [i_0]))))))));
        }
        var_18 = ((((((arr_0 [1]) < 0)) ? ((max((arr_2 [i_0]), -2))) : (((arr_0 [i_0]) ? -1903388305 : 1)))) == ((((arr_2 [i_0 + 2]) < var_10))));
        arr_7 [0] |= (arr_0 [i_0]);
    }
    var_19 ^= (((((268435455 >> ((((45461 << (var_7 - 3620919302))) - 5818992))))) ? var_4 : ((min(var_12, var_0)))));
    var_20 = ((((min(var_1, (max(var_11, var_2))))) ? (max((((var_11 ? 1 : var_10))), (max(var_9, 3304286644)))) : var_6));
    #pragma endscop
}
