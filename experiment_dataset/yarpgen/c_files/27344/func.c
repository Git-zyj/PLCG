/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27344
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) max((((((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_0])), (var_6)))) & (((/* implicit */int) ((_Bool) (short)(-32767 - 1)))))), (((((/* implicit */_Bool) min((-1178660619), (((/* implicit */int) (short)-32765))))) ? (((/* implicit */int) (short)32762)) : ((~(arr_1 [i_0])))))));
        var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 1])) == ((+(((/* implicit */int) (short)(-32767 - 1))))))))));
    }
    for (short i_1 = 1; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) -1531972543)), (906814821U))), (((/* implicit */unsigned int) ((unsigned char) 9963780615375672160ULL)))))) ? (((/* implicit */unsigned int) (+(arr_4 [(short)4] [i_1 + 1])))) : ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_9)))) : (((3388152474U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)32749)))))))));
        arr_5 [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max(((short)-5411), (((/* implicit */short) (signed char)-106))))) ? (((/* implicit */int) max(((unsigned char)205), (((/* implicit */unsigned char) (signed char)-38))))) : (((/* implicit */int) ((signed char) (unsigned short)44460))))), (arr_1 [1])));
    }
    var_18 = ((/* implicit */long long int) var_3);
}
