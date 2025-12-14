/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203014
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((6133678018709538403ULL) | (((/* implicit */unsigned long long int) 1023LL))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)3))))) : (max((((/* implicit */long long int) 959383421U)), (var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (min((6133678018709538403ULL), (((/* implicit */unsigned long long int) var_10))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_18 ^= ((/* implicit */int) -1023LL);
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 12313066055000013212ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min(((_Bool)0), (arr_3 [i_1]))))));
        var_20 = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_0 [i_1] [i_1]))))));
    }
    var_21 = ((/* implicit */_Bool) min((((/* implicit */int) var_8)), (max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)26))))), (((((/* implicit */int) var_5)) + (((/* implicit */int) var_11))))))));
    var_22 = ((/* implicit */unsigned short) var_6);
}
