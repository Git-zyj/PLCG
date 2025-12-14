/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3966
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
    var_12 = var_9;
    var_13 = ((/* implicit */unsigned int) ((unsigned long long int) var_9));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-114)), (-2026939428)));
        arr_4 [i_0] = ((/* implicit */_Bool) (unsigned char)139);
        arr_5 [i_0] = ((/* implicit */unsigned short) (((+((-(6986258776317088209ULL))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-68))))) ? ((~(((/* implicit */int) arr_3 [i_0] [i_0])))) : (((/* implicit */int) var_8)))))));
    }
}
