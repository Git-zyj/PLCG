/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47610
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
    var_13 = ((((_Bool) ((unsigned short) var_7))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (var_5)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) (short)7936)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_2)));
    var_14 = ((/* implicit */unsigned short) min(((((+(((/* implicit */int) var_11)))) + (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */int) var_1);
            var_15 = ((/* implicit */_Bool) (unsigned char)242);
        }
        arr_5 [i_0] = var_3;
    }
}
