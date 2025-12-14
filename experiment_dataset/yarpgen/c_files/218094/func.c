/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218094
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
    var_18 &= ((/* implicit */_Bool) (+(min(((~(((/* implicit */int) var_14)))), (((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */int) (unsigned char)77)) : (-1)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((((/* implicit */int) var_14)) * (((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? (0) : (((/* implicit */int) arr_1 [i_0])))))) == ((-(((/* implicit */int) arr_0 [i_0 - 1] [12]))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_4)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) min((arr_1 [i_0 + 1]), (arr_0 [i_0 + 1] [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned char) var_16)))))))) : (min((min((((/* implicit */int) var_16)), (var_0))), (((/* implicit */int) min((var_2), ((unsigned char)102))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) var_17)) ^ (((/* implicit */int) arr_0 [i_0 + 2] [i_0 - 2])))) ^ (((/* implicit */int) max((arr_0 [i_0 + 2] [i_0 - 4]), (arr_0 [i_0 - 2] [i_0 - 1]))))));
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0] [i_0 - 3])), (max((((((/* implicit */_Bool) 4611686018423193600ULL)) ? (var_5) : (((/* implicit */int) arr_0 [i_0 - 3] [4])))), (((((/* implicit */int) var_12)) % (((/* implicit */int) arr_0 [(signed char)13] [i_0])))))))))));
    }
}
