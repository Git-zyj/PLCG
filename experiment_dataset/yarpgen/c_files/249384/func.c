/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249384
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */int) arr_5 [i_2] [i_1] [i_0]);
                    var_11 += ((arr_0 [i_2] [i_2]) <= (((/* implicit */long long int) ((((/* implicit */_Bool) -6658151859592384829LL)) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) (short)14712))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */short) min((((((_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_3))))) : (max((274877906928LL), (((/* implicit */long long int) var_1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)237))))) ? ((-(274877906946LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)181)))))));
    var_13 ^= ((/* implicit */signed char) var_6);
    var_14 -= ((/* implicit */short) (+(max((((/* implicit */long long int) max((((/* implicit */short) var_3)), (var_9)))), ((+(274877906922LL)))))));
}
