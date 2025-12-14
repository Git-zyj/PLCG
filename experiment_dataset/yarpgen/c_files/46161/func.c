/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46161
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = (unsigned char)6;
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) ((unsigned int) 10957117U))) ? (var_11) : (arr_0 [(short)9] [i_0]))) : ((((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (var_7) : (max((1942109326U), (var_4)))))));
                var_14 = max((((unsigned int) arr_2 [i_1] [i_0])), (min((3725999361U), (((/* implicit */unsigned int) arr_2 [i_0 + 1] [i_0 - 1])))));
                var_15 *= ((/* implicit */unsigned char) ((long long int) ((unsigned int) var_0)));
                var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) max((2352857970U), (var_6)))) || (((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 2]))))) != (((/* implicit */int) arr_4 [(_Bool)1] [i_0 + 1]))));
            }
        } 
    } 
    var_17 = var_10;
}
