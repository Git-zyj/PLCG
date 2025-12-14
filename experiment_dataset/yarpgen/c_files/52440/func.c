/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52440
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
    var_11 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((+(18446744073709551615ULL))) > (((unsigned long long int) 10825576363761054762ULL))))), ((~(max((9ULL), (((/* implicit */unsigned long long int) (unsigned short)60451))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_12 &= ((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)-36)))) ? (min((((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [(unsigned char)10])) & (18446744073709551607ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1699298045))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (17179607040ULL)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) : (max((((/* implicit */unsigned int) 6)), (2095055208U))))))));
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) min((arr_3 [(_Bool)1] [(_Bool)1]), (((/* implicit */unsigned short) var_10))))) || (((/* implicit */_Bool) ((0ULL) << (((10589942537795136794ULL) - (10589942537795136736ULL))))))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) (-(4194288LL)));
    var_15 = ((/* implicit */signed char) var_4);
    var_16 &= ((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (0ULL))), (((/* implicit */unsigned long long int) var_7)))))));
}
