/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200831
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_11 += ((/* implicit */unsigned int) var_3);
        var_12 = ((/* implicit */short) min((min((3161951733U), (1146770929U))), (((/* implicit */unsigned int) ((_Bool) (signed char)-87)))));
        var_13 = ((/* implicit */unsigned int) 0ULL);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_14 |= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [(signed char)1])) - (((/* implicit */int) arr_2 [i_1]))))), (((((/* implicit */unsigned long long int) -1892597251)) + (var_10)))));
        var_15 = ((unsigned long long int) ((((/* implicit */unsigned int) var_1)) & (arr_4 [i_1] [i_1])));
        var_16 = ((/* implicit */unsigned char) ((unsigned long long int) 1133015559U));
    }
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_0), (((/* implicit */signed char) (!(((/* implicit */_Bool) 14ULL)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (min((((unsigned int) var_9)), (((/* implicit */unsigned int) (unsigned char)184)))))))));
}
