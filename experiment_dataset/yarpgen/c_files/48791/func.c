/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48791
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) 4611685949707911168ULL))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) arr_1 [(unsigned char)5] [i_0])))), ((+(((/* implicit */int) (unsigned char)26))))));
        var_14 -= (unsigned char)0;
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_15 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_1]);
    }
    for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_16 ^= (!(((/* implicit */_Bool) arr_2 [(unsigned char)22] [(unsigned char)22])));
        var_17 = ((/* implicit */unsigned short) ((min((12443004786736472015ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)4] [(signed char)20])))));
    }
}
