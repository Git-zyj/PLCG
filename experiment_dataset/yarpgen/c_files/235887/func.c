/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235887
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
    var_19 ^= ((/* implicit */unsigned int) ((int) ((min((32767ULL), (((/* implicit */unsigned long long int) (unsigned char)182)))) & (((/* implicit */unsigned long long int) ((2424605973U) << (((1870361321U) - (1870361293U)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_20 |= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) > (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) arr_0 [(unsigned char)6])) : (2424605960U)))))) != (((/* implicit */int) ((((/* implicit */_Bool) min((4U), (((/* implicit */unsigned int) arr_0 [i_0]))))) || (((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((249858509) - (((/* implicit */int) arr_3 [i_0]))))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) var_18))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5089)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (3112908763313751848LL)))) ? (((((/* implicit */long long int) var_17)) / (-3112908763313751838LL))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
    }
}
