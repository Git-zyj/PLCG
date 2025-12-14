/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199853
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
    for (short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) arr_0 [i_0 - 1])));
        arr_3 [(signed char)7] [(signed char)7] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((-2040058910) + (2147483647))) >> (((2040058910) - (2040058902)))))) && (((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)252)), ((short)32230)))))))));
        arr_4 [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_1 [i_0 - 2])), (arr_0 [i_0 + 1])))) ? (2040058932) : (((((/* implicit */int) ((_Bool) var_10))) << (((((/* implicit */int) (short)-32249)) + (32269)))))));
        arr_5 [i_0 - 1] = ((/* implicit */_Bool) (+(min((((/* implicit */int) (!(((/* implicit */_Bool) 1702520606))))), (min((-2040058932), (((/* implicit */int) (short)32241))))))));
    }
    var_19 ^= ((/* implicit */long long int) 3615270058U);
}
