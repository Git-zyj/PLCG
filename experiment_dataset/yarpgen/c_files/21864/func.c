/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21864
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
    for (long long int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */int) (((+(((unsigned long long int) (short)(-32767 - 1))))) ^ (((/* implicit */unsigned long long int) min((arr_0 [i_0]), (((/* implicit */long long int) max(((short)127), (((/* implicit */short) (signed char)-103))))))))));
                var_16 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (+((+(15U))))))));
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((max((arr_3 [i_0] [i_0] [i_0]), (36028797018963967LL))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (signed char)16)))))))) ? (-36028797018963965LL) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)255)), (min((arr_2 [i_1]), (((/* implicit */unsigned int) arr_1 [i_0])))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (!(var_0))))));
}
