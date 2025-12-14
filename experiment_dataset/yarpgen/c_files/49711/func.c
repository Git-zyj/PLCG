/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49711
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        arr_3 [22U] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned short)65376)) ? (((/* implicit */int) (signed char)-121)) : (8388096))), (((/* implicit */int) ((unsigned short) (unsigned short)160)))));
        arr_4 [(signed char)20] [21U] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned short) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (var_5) : (((/* implicit */int) (unsigned short)160)))) : (((/* implicit */int) arr_2 [i_0 + 1])))));
    }
    var_10 = ((/* implicit */signed char) ((((/* implicit */unsigned int) var_2)) != (var_6)));
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (signed char)126)) ? (-8388111) : (((/* implicit */int) (signed char)-103)))) : ((~(((/* implicit */int) max(((unsigned short)8898), (((/* implicit */unsigned short) (signed char)-55)))))))));
}
