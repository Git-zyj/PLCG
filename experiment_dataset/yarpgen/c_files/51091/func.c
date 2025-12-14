/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51091
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
    var_19 = ((/* implicit */signed char) var_13);
    var_20 |= ((/* implicit */unsigned short) ((_Bool) var_15));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) != ((~(-1019375912)))));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((10797779808552441663ULL) << (((/* implicit */int) var_14))))))))));
    }
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)127))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 1140273410U)))) : (((((/* implicit */_Bool) 10U)) ? (3053867557U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60092)))))))) ? ((~(2952093633U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
}
