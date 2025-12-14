/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194505
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)232)))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) ^ (var_4)))) : (((((var_7) + (9223372036854775807LL))) >> (((var_1) - (947204951U))))))))));
        arr_4 [i_0] [2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [3ULL])) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (unsigned char)23)))))));
        var_14 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)11301))))) ? (arr_3 [i_0]) : (arr_1 [i_0] [(unsigned short)9])));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
    }
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((((/* implicit */int) (short)32767)) & (((/* implicit */int) var_9))))))) % (var_4)));
    var_16 += ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */int) var_9))))), (max((var_12), (var_1))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (max((((/* implicit */unsigned int) var_9)), (var_1)))))));
}
