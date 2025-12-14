/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32655
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
    for (short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))) && (((/* implicit */_Bool) var_4))));
        arr_3 [(unsigned char)7] |= ((/* implicit */short) ((_Bool) ((arr_1 [i_0] [i_0 + 1]) - (arr_1 [i_0] [i_0 - 1]))));
        arr_4 [i_0] [14] |= ((/* implicit */unsigned char) arr_1 [i_0] [i_0 + 1]);
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
    var_21 = (_Bool)1;
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_17)) ? (((unsigned int) ((((/* implicit */_Bool) 325117816330404664LL)) ? (var_2) : (((/* implicit */long long int) var_8))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) var_15)))))));
}
