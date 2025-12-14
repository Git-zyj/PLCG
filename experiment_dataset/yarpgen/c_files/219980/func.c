/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219980
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
    for (signed char i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) (unsigned char)42);
        arr_2 [(signed char)10] [i_0] |= (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (unsigned char)214)), (var_0))), (((/* implicit */unsigned int) arr_0 [i_0 - 1]))))));
    }
    var_21 = ((/* implicit */short) ((((_Bool) ((((/* implicit */_Bool) (unsigned char)54)) || (((/* implicit */_Bool) (unsigned char)214))))) || (((/* implicit */_Bool) var_18))));
    var_22 += max(((short)-12052), (((/* implicit */short) (unsigned char)70)));
}
