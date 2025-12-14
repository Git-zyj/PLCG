/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26942
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
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) min((min((((/* implicit */unsigned long long int) arr_0 [i_0 + 2])), (((((/* implicit */_Bool) 2033953766183257222LL)) ? (((/* implicit */unsigned long long int) arr_1 [4LL] [(_Bool)1])) : (13356235246706522020ULL))))), (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) -1839285188)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) + (2147483647))) >> (((arr_1 [24LL] [24LL]) + (536459079)))))))))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_0 [(unsigned short)17])))), (max((589012336), (((/* implicit */int) min(((unsigned short)53252), (((/* implicit */unsigned short) var_0))))))))))));
    }
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_9))));
}
