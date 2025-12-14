/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42872
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
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((((/* implicit */_Bool) min((((/* implicit */int) var_2)), ((~(((/* implicit */int) var_7))))))) ? (5403531057109971403ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) ^ (((/* implicit */unsigned int) var_1))))) ? ((~(((/* implicit */int) (short)0)))) : (((/* implicit */int) var_7)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_12 ^= ((/* implicit */unsigned long long int) var_1);
        var_13 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)28137))))) | (arr_0 [(_Bool)1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) != (((/* implicit */int) var_5)))))) : (min((arr_0 [(_Bool)1]), (((/* implicit */long long int) arr_1 [i_0] [i_0]))))));
    }
    var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((unsigned long long int) -643618529)))));
}
