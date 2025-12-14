/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248253
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), ((~(var_10)))))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) max((var_9), (var_6))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_13 &= ((/* implicit */signed char) ((((unsigned int) 2454033710U)) | (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (+(((/* implicit */int) max((var_2), (arr_0 [(unsigned short)8])))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) ((int) var_4));
    var_16 |= ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) 67108856U))))), (((((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_4))))) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))))));
    var_17 = ((/* implicit */short) max((((/* implicit */unsigned int) var_0)), (((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_0))))))))));
}
