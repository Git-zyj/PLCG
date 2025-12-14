/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38227
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
    var_18 = 2526950684U;
    var_19 = 465740353U;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((350132374U), (var_11)))) ? (var_14) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) % (arr_1 [i_0])))))) & (min((((((/* implicit */_Bool) arr_0 [i_0])) ? (3397227415571486766ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0])))), (((/* implicit */unsigned long long int) ((short) (short)32767)))))));
        arr_3 [i_0] = ((((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))) & (((arr_1 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) ((3944834922U) <= (4294967295U))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) max((arr_0 [i_0]), (arr_0 [i_0]))));
    }
}
