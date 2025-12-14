/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200560
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
    var_15 = ((/* implicit */unsigned char) ((unsigned short) (unsigned short)1));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((min((((/* implicit */unsigned short) var_14)), (arr_3 [i_0]))), (var_7)))), (-7443895503177678163LL)));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) -7443895503177678167LL);
        var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) var_10)))))) ? (var_11) : (max((((/* implicit */long long int) (unsigned short)59003)), (arr_2 [0ULL])))));
    }
    var_17 &= ((/* implicit */unsigned int) var_0);
}
