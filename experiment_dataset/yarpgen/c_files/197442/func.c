/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197442
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
    var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (7263755693201114441ULL) : (((6399996485669323088ULL) ^ (var_12))))) | (((/* implicit */unsigned long long int) -707620133))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_15 = max((max((434419649), (((/* implicit */int) arr_0 [i_0 + 1])))), (((var_0) ? ((+(-1295255468))) : (max((33554400), (-110034965))))));
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            arr_5 [i_1] = ((((int) (~(arr_1 [i_0])))) + (arr_1 [i_0]));
            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) 14833761343759214191ULL))));
            arr_6 [i_1] [10] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((_Bool) arr_4 [8ULL] [4] [4])) ? ((~(-110034949))) : (((((/* implicit */_Bool) var_4)) ? (-434419647) : (12056843))))))));
        }
    }
}
