/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215372
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */int) var_3);
                    arr_9 [i_0] [i_1] [i_1] [i_2] = min((min((((/* implicit */long long int) ((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))), (((((/* implicit */_Bool) 4069262233281729516LL)) ? (4069262233281729513LL) : (((/* implicit */long long int) 4026531266U)))))), (((/* implicit */long long int) var_1)));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (0ULL) : (((/* implicit */unsigned long long int) -646529856))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (4026531246U) : (1651490662U)))) ? (((/* implicit */int) min((var_6), (((/* implicit */signed char) var_0))))) : (((/* implicit */int) min((var_11), (((/* implicit */unsigned short) (signed char)45))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 242016150U)) != (18446744073709551615ULL)))))))));
}
