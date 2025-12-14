/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221925
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
    var_15 = ((/* implicit */long long int) var_6);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) var_12);
        arr_2 [i_0] = (unsigned short)10683;
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
        var_17 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54839))) : (arr_6 [i_1])))) ? (-225224900891541291LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    }
    for (signed char i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
    {
        var_18 &= ((/* implicit */unsigned char) ((signed char) 2575038058U));
        var_19 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) min((var_14), (var_2)))), (((11794023871994709693ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10705))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))));
    }
}
