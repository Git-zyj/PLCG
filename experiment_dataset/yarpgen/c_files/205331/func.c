/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205331
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
    var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_8)) ? (15821562813356823721ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)39547))) < (var_4))))))) : (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)222)))));
    var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)222)), (((short) 15821562813356823713ULL))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_0 [i_0])), (-9004013743694538913LL)))), (((arr_0 [i_0]) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) 1392693803))))))));
        arr_2 [(_Bool)1] [i_0] = ((/* implicit */unsigned char) ((max((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_3)))) == (((((/* implicit */_Bool) 536805376)) ? (((var_5) ? (2625181260352727894ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) (unsigned char)34))))))))));
        var_18 ^= ((/* implicit */signed char) var_14);
    }
}
