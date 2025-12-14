/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3027
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
    var_10 = ((/* implicit */unsigned short) var_2);
    var_11 &= ((/* implicit */unsigned short) (-(0ULL)));
    var_12 = (~(var_2));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
        arr_5 [i_0] = ((/* implicit */_Bool) max((((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) (((+(6601003555645475474LL))) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [(unsigned short)0] [(unsigned short)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)53200)) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))));
        arr_9 [8LL] [0LL] = ((/* implicit */unsigned int) (+(var_1)));
        arr_10 [i_1] = ((/* implicit */unsigned short) (~(-1933617880721418724LL)));
    }
}
