/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48361
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_6) : (max(((-(5328044114852823959LL))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)36117)))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) 9223372036854775799LL)) && (((/* implicit */_Bool) 5328044114852823959LL)))) ? ((-(1228123757))) : (((((/* implicit */_Bool) max((4649473453696810080ULL), (((/* implicit */unsigned long long int) (signed char)126))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)9752)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (unsigned short)29418))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) arr_0 [i_0]))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    }
    for (long long int i_1 = 1; i_1 < 23; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) (unsigned short)10);
        var_12 = ((int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((((/* implicit */_Bool) (unsigned short)6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55783))) : (-1LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)0)) : (1228123757))))));
        arr_9 [i_1] = var_5;
    }
    var_13 = ((/* implicit */unsigned long long int) var_7);
}
