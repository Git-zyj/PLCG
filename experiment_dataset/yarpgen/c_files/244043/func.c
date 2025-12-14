/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244043
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
    var_17 = ((/* implicit */unsigned int) var_14);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) ((_Bool) var_8));
        var_19 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_0 [i_0 + 1])))) << (((((int) ((signed char) var_11))) + (62)))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_20 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) var_16)) : (((((/* implicit */int) (unsigned char)51)) & (((/* implicit */int) var_8)))))) >= (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (arr_4 [(unsigned char)14] [(unsigned char)14]))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)196)) ? (-92575417) : (((-972583090) / (((/* implicit */int) (signed char)-84))))));
        var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -92575417)) ? (((/* implicit */unsigned long long int) 158991721U)) : (524578576335448922ULL)));
    }
    var_23 ^= ((/* implicit */long long int) var_4);
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_13)) & (((/* implicit */int) var_2))))), (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) ((961500332637670214ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37269)))))), (((unsigned char) (signed char)-102)))))) : ((-(max((((/* implicit */unsigned int) var_8)), (4135975582U)))))));
}
