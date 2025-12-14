/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229751
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
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_14 = ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) ((signed char) min((((/* implicit */long long int) var_7)), (-1443429159347978608LL))))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) (signed char)98))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : ((~(var_11)))));
    }
    var_16 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-2264))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) min(((unsigned short)3336), (((/* implicit */unsigned short) (signed char)-102)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((1073741823), (1073741808))))))) : (-1073741826)));
}
