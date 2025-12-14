/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24644
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
    for (int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)30))))), ((~(((/* implicit */int) (unsigned short)39552))))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned long long int) arr_1 [i_0])) | (((unsigned long long int) arr_2 [i_0] [i_1])))));
            }
        } 
    } 
    var_17 |= ((/* implicit */unsigned int) (((((~(((/* implicit */int) (signed char)-118)))) < (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3)))))) ? ((+(((/* implicit */int) ((signed char) var_2))))) : (((/* implicit */int) ((unsigned short) max((var_8), (((/* implicit */unsigned int) (unsigned short)65535))))))));
    var_18 = ((/* implicit */unsigned short) ((((unsigned long long int) var_0)) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
}
