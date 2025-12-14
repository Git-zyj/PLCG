/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232833
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
    var_16 = (-(1417970304));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            var_17 ^= ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (~(-1417970305)))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (-1417970304))))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) (short)-1)) | (((/* implicit */int) (_Bool)1)))))));
            var_18 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 532676608)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_13))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 187306658)) ? (((/* implicit */int) var_1)) : (arr_0 [i_1])))))), (max(((!(((/* implicit */_Bool) (short)0)))), (((((/* implicit */_Bool) var_7)) && (arr_1 [i_0])))))));
        }
        arr_5 [(short)16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 432493444)) ? (((arr_0 [i_0]) | (var_5))) : (((/* implicit */int) arr_1 [i_0]))));
        arr_6 [i_0] = ((/* implicit */int) var_8);
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (-573604609) : (arr_2 [i_0] [i_0]))) != (((var_3) / (((/* implicit */int) var_7)))))))));
    }
    var_20 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) -1704673758)) && ((_Bool)1))) ? (((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) 2147483647)) ? (-573604607) : (515399357)))));
    var_21 = max((((/* implicit */int) (short)11366)), (-1417970304));
}
