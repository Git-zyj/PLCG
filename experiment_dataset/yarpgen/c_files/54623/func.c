/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54623
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (min((((/* implicit */unsigned long long int) min(((unsigned char)135), (arr_0 [i_0])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(short)6] [2ULL]))) & (33554431ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 33554440ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)135))) : (5780700431685059453LL))))));
        var_17 += ((/* implicit */short) (~(((((/* implicit */int) arr_1 [i_0])) >> (((4165797165U) - (4165797159U)))))));
    }
    var_18 = ((/* implicit */unsigned long long int) var_2);
}
