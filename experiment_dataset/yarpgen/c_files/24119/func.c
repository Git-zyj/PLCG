/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24119
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_10 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) + (arr_1 [i_0])))) || (((/* implicit */_Bool) ((6227622095963224974ULL) + (((/* implicit */unsigned long long int) 845853868239673561LL)))))));
        arr_2 [4] = ((arr_1 [i_0 + 2]) % (arr_1 [i_0 + 2]));
    }
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((var_5) ^ (((/* implicit */int) ((((/* implicit */int) var_0)) < (var_8)))))) / (min((((var_5) & (var_5))), (((var_9) | (var_5))))))))));
}
