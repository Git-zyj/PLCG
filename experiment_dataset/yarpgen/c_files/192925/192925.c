/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    var_17 = (~var_1);

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_18 -= ((+((-var_14 ? (35167 == 1617868721670713232) : (arr_0 [i_0] [i_0])))));
        arr_3 [i_0] = var_9;
        var_19 ^= (((((((1617868721670713209 ? 1259398061 : var_10)) << (((max(var_14, var_4)) - 18446744073709551529))))) || var_11));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_20 = var_9;
        var_21 = (max(var_21, (((((((arr_4 [2]) ^ var_5))) ? ((-(arr_4 [2]))) : ((max((arr_4 [6]), (arr_4 [8])))))))));
    }
    var_22 = (var_15 ? (!var_11) : (~-460488753));
    #pragma endscop
}
