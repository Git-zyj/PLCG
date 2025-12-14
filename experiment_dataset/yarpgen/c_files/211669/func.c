/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211669
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
    var_18 = ((/* implicit */int) ((unsigned short) ((int) min((1026197543), (((/* implicit */int) (_Bool)1))))));
    var_19 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */int) ((_Bool) (_Bool)1))))), (((/* implicit */int) ((_Bool) 2015175562U)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (_Bool)1);
        arr_3 [i_0] [i_0 + 1] = ((unsigned short) 680348550);
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) 680348550))) ^ (((((/* implicit */int) (unsigned short)10541)) >> (4U)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)5924)) <= (1773784332))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56886))) : (((unsigned int) (_Bool)0))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned short)54995))))) ? (4294967295U) : (0U)));
    }
}
