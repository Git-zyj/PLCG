/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232096
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_11))))), (((((/* implicit */_Bool) var_16)) ? (262140U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) || (((/* implicit */_Bool) var_9))));
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)40406)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)40388)) > (((/* implicit */int) var_13))))) : (((/* implicit */int) ((unsigned short) var_13))))) % (((/* implicit */int) min((var_5), ((unsigned char)230)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_8);
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) 8796092989440LL)))) ? (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0]))) : (((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */unsigned long long int) var_7)) <= (arr_0 [(signed char)6]))), ((!(((/* implicit */_Bool) 1102440277))))))))));
    }
}
