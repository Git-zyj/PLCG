/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222135
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
    var_13 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))) : (max((((/* implicit */unsigned int) var_1)), (var_5)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) 1072693248U)) ? (((/* implicit */unsigned int) 31)) : (1072693248U)));
        arr_4 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) ? ((~(((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_0])), (arr_0 [i_0]))))))));
    }
}
