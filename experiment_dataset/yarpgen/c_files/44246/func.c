/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44246
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
    for (short i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned char) (~(var_1)));
            var_18 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_1 - 3] [i_1 + 1]))));
            var_19 = ((/* implicit */unsigned long long int) arr_3 [i_1]);
        }
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) max((arr_3 [i_0]), (arr_0 [i_0] [i_0])))), (arr_5 [(unsigned short)11]))))));
    }
    var_21 = ((/* implicit */int) min((((/* implicit */long long int) 4250730614U)), (6963574992062434658LL)));
    var_22 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_16))))) & (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_4))), (((/* implicit */unsigned long long int) var_9))))));
    var_23 = ((/* implicit */unsigned short) var_9);
}
