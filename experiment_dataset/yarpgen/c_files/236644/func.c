/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236644
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
    var_16 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))));
    var_17 = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) var_3)), (var_7))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_12), (((/* implicit */short) var_2))))) ? ((~(((/* implicit */int) (unsigned char)23)))) : ((~(((/* implicit */int) var_6)))))))));
    var_18 = ((/* implicit */signed char) var_6);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned short) var_4)))))))))) ^ (((unsigned long long int) var_9))));
        var_20 |= ((/* implicit */unsigned int) var_12);
        var_21 = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_1 [i_0])))) - (((/* implicit */int) var_5))));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) max((((/* implicit */unsigned char) var_15)), (var_5))))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((min((9223372036854775790LL), (((/* implicit */long long int) (unsigned char)58)))) >> (((((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) var_12)) : (arr_2 [i_1] [i_1]))) - (5838)))));
    }
    for (signed char i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) max((((/* implicit */int) min(((unsigned char)223), ((unsigned char)152)))), (min((((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (var_13) : (((/* implicit */int) var_2)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)192))))))))))));
        arr_9 [i_2] [i_2] = (+((+(((/* implicit */int) arr_8 [i_2])))));
    }
}
