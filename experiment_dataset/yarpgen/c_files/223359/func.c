/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223359
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
    var_17 = var_16;
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((unsigned short) (_Bool)0))) == (((/* implicit */int) (_Bool)1))))) ^ (((((/* implicit */int) (short)23559)) * (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1)))))))))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)23559)) || (((/* implicit */_Bool) max(((~(2ULL))), (((/* implicit */unsigned long long int) max((var_6), (var_4)))))))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_14)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_21 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (min((8245327720838614094ULL), (((/* implicit */unsigned long long int) var_16)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max(((short)32767), (((/* implicit */short) (signed char)0))))))))) : (min((((((/* implicit */_Bool) arr_0 [i_1] [i_1 - 1])) ? (arr_0 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 8245327720838614094ULL)))))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_5 [i_1] [i_1 + 1] [i_1] [i_0]))))))) : (((/* implicit */int) (short)-32767))));
                }
            } 
        } 
    } 
}
