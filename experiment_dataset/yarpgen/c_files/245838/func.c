/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245838
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
    var_10 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_0)), (var_1)))) : (((var_4) + (((/* implicit */unsigned long long int) var_1))))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3482116263U)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) ((var_4) * (arr_0 [i_0 - 1] [i_0]))))) | (((((/* implicit */int) ((short) var_2))) - (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)9177)) : (((/* implicit */int) var_0))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (-(var_9)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_6);
    }
    for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1 + 1] = ((((/* implicit */_Bool) ((17677321777435548101ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9177)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2564406707U)) ? (((/* implicit */long long int) 1730560589U)) : (0LL)))) : (((2251799813685247ULL) + (((/* implicit */unsigned long long int) 1730560589U)))));
        arr_9 [i_1 + 1] [i_1] = var_7;
    }
}
