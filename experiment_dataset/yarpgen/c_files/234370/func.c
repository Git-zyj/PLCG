/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234370
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
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? ((((~(4424845459757108764LL))) | (((/* implicit */long long int) (~(268435456U)))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 - 3])) ^ (((/* implicit */int) arr_1 [i_0 - 4])))))));
        arr_4 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) (!((((_Bool)1) && (((/* implicit */_Bool) -597492793)))))));
        var_19 = ((/* implicit */long long int) ((unsigned short) (_Bool)1));
    }
    var_20 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) % (var_7)));
    var_21 = ((/* implicit */int) ((min((((/* implicit */int) var_3)), ((~(((/* implicit */int) (unsigned short)49152)))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)247)) - (((/* implicit */int) (unsigned short)16650))))))))));
}
