/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222225
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
    var_13 += ((/* implicit */int) (_Bool)1);
    var_14 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_1 [i_0 + 1])), (max((((arr_1 [i_0 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (0U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) > (var_3)))))))))));
        var_16 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) var_6)), (536868864ULL))), (((/* implicit */unsigned long long int) var_11))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)50959)) ? (((((/* implicit */_Bool) 11)) ? (var_5) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-114))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_1 [i_0 + 1])), ((short)-4096)))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_4 [i_1] [i_1]) : ((+(((/* implicit */int) (signed char)6)))))))));
        var_18 = ((/* implicit */signed char) var_11);
    }
    var_19 -= ((/* implicit */unsigned long long int) (signed char)-2);
}
