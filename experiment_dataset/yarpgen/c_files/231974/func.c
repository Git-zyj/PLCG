/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231974
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
    var_15 += ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) (signed char)123)) ^ ((~(((/* implicit */int) var_6)))))));
    var_16 -= ((/* implicit */unsigned int) ((long long int) min((((unsigned int) var_4)), (max((3210522709U), (1084444577U))))));
    var_17 = ((/* implicit */_Bool) (signed char)93);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */signed char) 1860507988);
                var_19 &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)46))) : (786726311702406625ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 134213632)) + (262143U))))));
                var_20 = ((/* implicit */signed char) ((((((/* implicit */int) max((var_8), ((signed char)-124)))) != (((((/* implicit */int) (signed char)-100)) + (((/* implicit */int) arr_3 [(signed char)1])))))) ? (((786726311702406625ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)110)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)0)), ((-9223372036854775807LL - 1LL))))) ? (max((((/* implicit */unsigned int) (signed char)127)), (3210522709U))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) arr_0 [i_1]))))))))));
            }
        } 
    } 
}
