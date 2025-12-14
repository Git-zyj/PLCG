/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241375
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) var_8))));
            var_10 += ((/* implicit */unsigned short) (-(((/* implicit */int) arr_5 [i_0]))));
        }
        var_11 = ((/* implicit */short) ((unsigned short) arr_0 [i_0]));
    }
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */unsigned int) min(((unsigned short)22209), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_2])) && (((/* implicit */_Bool) arr_2 [i_2])))))));
        arr_12 [i_2] = ((/* implicit */unsigned int) min(((((!(((/* implicit */_Bool) 8969319423868131268ULL)))) ? (var_9) : (((/* implicit */unsigned long long int) 4376672708628692625LL)))), (((/* implicit */unsigned long long int) 2415650418U))));
    }
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (var_7) : (var_9))), (((/* implicit */unsigned long long int) var_0))))) ? ((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)75)))) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
}
