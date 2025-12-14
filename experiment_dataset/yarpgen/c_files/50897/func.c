/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50897
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
    var_20 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (short)-11816))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)32))))) ^ (((((/* implicit */_Bool) 8790606615027530132ULL)) ? (107587468) : (-1)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))) : (((long long int) var_16))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) -27)) * (min((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) / (-473282150)))), (((((/* implicit */unsigned int) arr_2 [i_0 + 1])) - (var_10)))))));
        arr_4 [i_0] = (~(((/* implicit */int) ((_Bool) (unsigned short)45295))));
    }
}
