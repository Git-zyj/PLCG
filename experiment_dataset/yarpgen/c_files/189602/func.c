/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189602
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((unsigned long long int) (_Bool)1)), (min((((/* implicit */unsigned long long int) (unsigned short)224)), (2832312819593507660ULL)))))) ? (((min((((/* implicit */int) (unsigned short)65535)), (647073451))) | (((/* implicit */int) min(((unsigned short)65535), (arr_1 [i_1])))))) : (((((/* implicit */int) arr_1 [i_1])) * (((/* implicit */int) arr_1 [i_0])))))))));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((unsigned long long int) 2147483647))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) 16120391382280006160ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3548235135U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_1])) : (-152176514))))))) : (arr_0 [i_1] [i_0])));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) + (6ULL)))) ? (min((0ULL), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) == ((+(((/* implicit */int) var_13)))))) ? (((long long int) var_6)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (~(var_10))))))));
}
