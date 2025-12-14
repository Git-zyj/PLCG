/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_10));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (min(((~(max(37548, (arr_0 [i_0] [i_0]))))), ((min(1043109506, (arr_1 [i_0]))))));
        var_14 = arr_1 [i_0];
        var_15 = (max((min(((min(-5, var_1))), (~var_5))), ((((arr_0 [i_0] [i_0]) >= (max(8005566502980857701, 10441177570728693894)))))));
        var_16 = ((((min(((((arr_1 [i_0]) / 759194430))), (max((arr_0 [i_0] [i_0]), var_1))))) ? (((-1289275289 < (~1256143697)))) : (min(var_7, (!1)))));
    }
    var_17 ^= (min(((((min(36, 2372163906066742337))) ? (max(var_4, 10441177570728693897)) : var_11)), ((((10441177570728693894 ? 0 : 49))))));
    #pragma endscop
}
