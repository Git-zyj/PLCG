/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39272
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
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((16590001922178943116ULL) >> (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)64))))) ? (min((18428729675200069632ULL), (1858825809266186875ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-41)), ((unsigned char)222))))))) : (((((/* implicit */_Bool) (signed char)73)) ? (((1858825809266186882ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((18014398509481983ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32754)))))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((18428729675200069632ULL), (((/* implicit */unsigned long long int) (short)-32754))))) || (((((/* implicit */int) (signed char)(-127 - 1))) < (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)54849)))))))));
            }
        } 
    } 
    var_19 = var_17;
}
