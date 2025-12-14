/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206141
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_13 = ((((/* implicit */_Bool) -1561880586)) ? (((((/* implicit */_Bool) -1815673268)) ? (-1958432097) : (-1958432097))) : (-1815673264));
    var_14 &= ((-135931629) / (max(((-(-1815673264))), (var_12))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = (-(arr_2 [i_0] [i_0]));
        var_15 = ((/* implicit */int) (((+((~(var_6))))) <= (((var_5) + ((~(arr_0 [i_0] [i_0])))))));
        var_16 = ((/* implicit */int) ((1815673268) >= (((/* implicit */int) ((((1815673256) << (((arr_0 [i_0] [i_0]) - (800368636))))) != (var_5))))));
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 19)) ? (arr_1 [i_1]) : (var_4))) >> (((-1632733824) + (1632733852))))))));
        var_18 = (~(((((/* implicit */_Bool) 1958432076)) ? (1815673264) : (345414943))));
        var_19 ^= ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) -434261009))))), (min((var_5), (-1815673286)))))) ? (((1191671458) >> (((135931629) - (135931600))))) : (var_12));
        arr_6 [i_1] [i_1] = var_6;
    }
    var_20 = ((/* implicit */int) (((-(((var_9) - (var_12))))) <= (((/* implicit */int) (((+(var_0))) < (((((/* implicit */_Bool) var_0)) ? (var_8) : (var_7))))))));
}
