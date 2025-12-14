/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24984
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
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) var_3))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned short) var_11);
                var_16 = ((/* implicit */_Bool) (unsigned short)65508);
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) (unsigned char)255)))), (((((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) & (((/* implicit */int) (unsigned char)0))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) max((481616321), (((/* implicit */int) var_3))))) : (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((((/* implicit */_Bool) var_13)) ? (3867617402U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) <= (((/* implicit */int) var_7)))))))))));
                var_18 = ((/* implicit */unsigned long long int) max((max((1454957044U), (((/* implicit */unsigned int) (unsigned char)17)))), (((/* implicit */unsigned int) ((((((/* implicit */int) var_12)) > (((/* implicit */int) var_3)))) ? (max((var_10), (((/* implicit */int) (unsigned char)250)))) : (((/* implicit */int) var_2)))))));
            }
        } 
    } 
    var_19 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)2903)) ? (-3959041180833924757LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))))) - (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)65535)), (var_10))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (max((((/* implicit */long long int) max((-688271079), (((/* implicit */int) var_7))))), (var_9))));
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((((/* implicit */int) var_1)), (((((/* implicit */int) min((var_3), (((/* implicit */short) var_12))))) | (((/* implicit */int) var_7)))))))));
}
