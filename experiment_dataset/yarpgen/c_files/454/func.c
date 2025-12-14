/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/454
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-73)), (arr_1 [i_0])));
        var_17 = ((/* implicit */unsigned short) ((unsigned int) (+(((/* implicit */int) arr_0 [i_0] [i_0])))));
        arr_2 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6336041021823629493LL)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) var_4))))));
        var_18 = max((((_Bool) (signed char)-5)), (max(((_Bool)0), ((_Bool)1))));
    }
    for (signed char i_1 = 4; i_1 < 19; i_1 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) (+(((arr_4 [i_1 - 2]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_4 [i_1 - 1]))))));
        var_20 = var_14;
    }
    var_21 = ((/* implicit */unsigned short) (_Bool)1);
}
