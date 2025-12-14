/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51409
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) | (((int) 13477849984638174207ULL))))) >= (((4968894089071377396ULL) - (8149935122841234617ULL))));
        var_13 ^= ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_1))) | (-7090686428196588585LL))) | (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0])), (arr_1 [i_0])))))));
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (unsigned char)255))));
    }
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) (short)-32763)) ? (var_10) : (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned int) var_0))))))))));
}
