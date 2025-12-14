/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240393
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
    var_20 = ((/* implicit */signed char) ((unsigned long long int) min((((2147483647LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) var_5)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        var_21 = ((/* implicit */short) (((((~(((((/* implicit */_Bool) 3903205513947335827ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)77))) : (1192188772383224620LL))))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_2 [i_0])) - (11032)))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)185)) + (((/* implicit */int) (_Bool)0))));
        var_22 = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) arr_0 [i_0 - 3] [i_0 + 2])))), (((((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_0])), (var_6)))) && (((/* implicit */_Bool) ((unsigned long long int) (unsigned char)179)))))));
    }
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) -1192188772383224594LL)) || (((((/* implicit */_Bool) min((-1192188772383224582LL), (((/* implicit */long long int) (unsigned char)57))))) && (((/* implicit */_Bool) var_9))))));
}
