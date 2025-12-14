/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47160
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
    var_18 = ((/* implicit */short) var_15);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_3 [(unsigned char)2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0])))) ? (((((arr_2 [i_0]) >> (((var_5) - (2513310485527291266LL))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)47854)) <= (((/* implicit */int) (signed char)90))))))));
        arr_4 [i_0] [(_Bool)0] = ((/* implicit */short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_0)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-97)) : (((/* implicit */int) (_Bool)1))))))) ? (((int) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) arr_0 [i_0])) + (21687)))))) : ((~(((((/* implicit */_Bool) arr_2 [i_0])) ? (var_11) : (((/* implicit */int) (signed char)97))))))));
    }
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
}
