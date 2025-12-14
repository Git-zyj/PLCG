/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194534
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
    var_14 = ((/* implicit */int) max(((!(((/* implicit */_Bool) max((var_9), (var_8)))))), ((!(((/* implicit */_Bool) ((short) (short)15522)))))));
    var_15 ^= ((((/* implicit */unsigned long long int) -783559198)) >= (12760952645293469551ULL));
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-8692)) / (((/* implicit */int) var_10)))))))), ((unsigned char)146))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((var_11) == (((/* implicit */int) (unsigned char)183)));
        var_18 ^= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) 8924164894554189923LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [10ULL]))) : (-8924164894554189923LL))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        arr_4 [6ULL] [i_1] &= ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) (short)14859)));
        var_19 *= ((/* implicit */_Bool) ((((/* implicit */long long int) (+(min((var_11), (((/* implicit */int) var_13))))))) + (((((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)191), (((/* implicit */unsigned char) arr_2 [2] [4])))))) + (max((-1734293397492561956LL), (((/* implicit */long long int) 1873579889))))))));
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) min(((short)32757), (((/* implicit */short) arr_0 [i_1]))))))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((((((/* implicit */int) var_10)) == (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_1])))));
    }
}
