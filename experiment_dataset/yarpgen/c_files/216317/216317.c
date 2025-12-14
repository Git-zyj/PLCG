/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= ((((max(var_12, (~var_2)))) ? ((var_10 ? var_13 : ((236 ? var_0 : 6)))) : ((((((18446744073709551607 ? -2140207739 : 13232290707804166179))) ? ((13232290707804166180 ? var_10 : 255)) : var_4)))));
    var_17 = var_13;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = (((((var_12 ? ((var_6 ? var_8 : (arr_0 [i_0]))) : (arr_2 [i_0] [i_0])))) ? ((3413 ? var_0 : var_2)) : (((((var_13 ? -97 : (arr_1 [i_0] [7])))) ? (((arr_1 [i_0] [i_0]) ? var_0 : (arr_3 [i_0]))) : (!var_1)))));
        var_19 = ((-((50 ? (((1913934177 ? -1308965947 : 42770940))) : 1913934172))));
        var_20 = (max(var_20, (((((max(var_2, 255))) ? (max(3184651838, 2381033119)) : ((var_10 ? 224 : 2147483647)))))));
        var_21 = (min((((((1205382160 ? 3471849277468026087 : 6))) ? (arr_1 [i_0] [i_0]) : ((var_7 ? var_15 : var_8)))), (((~-9) ? (min((arr_3 [i_0]), var_8)) : (((1913934171 ? 9 : 16396)))))));
        var_22 = ((+(((arr_2 [i_0] [i_0]) ? var_9 : (arr_0 [i_0])))));
    }
    #pragma endscop
}
