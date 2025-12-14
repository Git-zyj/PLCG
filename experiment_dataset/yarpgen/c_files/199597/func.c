/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199597
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
    for (signed char i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((arr_1 [i_0] [i_0 - 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))), (((((/* implicit */_Bool) 7217310415908219631ULL)) ? (33292288U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0 + 2] [i_0 - 3]) <= (arr_1 [i_0 - 2] [i_0]))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0 - 4])) : (-1668665142)))), (((arr_1 [i_0] [i_0]) + (arr_1 [i_0] [i_0])))))));
        var_13 = ((/* implicit */int) min((var_13), ((~(((((/* implicit */int) arr_0 [i_0 - 1])) ^ (((-1668665142) & (((/* implicit */int) (unsigned char)193))))))))));
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (~(min((((((/* implicit */unsigned int) ((/* implicit */int) (short)29332))) * (var_11))), (((/* implicit */unsigned int) (((_Bool)0) && (((/* implicit */_Bool) -2935328609715494192LL))))))))))));
        var_15 = arr_1 [i_0 - 2] [i_0 + 2];
    }
    var_16 = ((/* implicit */unsigned short) (_Bool)1);
}
