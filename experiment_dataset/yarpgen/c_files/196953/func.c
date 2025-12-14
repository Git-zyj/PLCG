/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196953
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0] [(_Bool)1])))) | (((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_8))))) & (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) & (4576626732128752535LL)))))));
        arr_3 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)(-32767 - 1))))))));
        arr_4 [10U] [i_0] = ((((/* implicit */int) ((short) ((var_13) / (((/* implicit */long long int) ((/* implicit */int) var_7))))))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))));
    }
    var_15 = ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((((/* implicit */int) (short)-32745)) / (((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) (short)-23610)));
}
