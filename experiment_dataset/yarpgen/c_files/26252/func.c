/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26252
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) var_6);
        arr_2 [i_0] = ((/* implicit */unsigned int) -9036918977331174206LL);
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] &= ((/* implicit */long long int) arr_0 [(short)14]);
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) (+(arr_4 [i_1])))) ? (var_3) : ((-(var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)510)))));
    }
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((_Bool) (signed char)93)))));
}
