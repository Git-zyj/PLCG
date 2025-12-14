/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207108
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
    var_10 = ((/* implicit */long long int) max((((((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_4))))) * (((/* implicit */int) var_9)))), (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) var_7)))) <= (((/* implicit */int) max((var_2), (var_2)))))))));
    var_11 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (unsigned char)17))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)186)) ? (((/* implicit */int) (((~(((/* implicit */int) (unsigned short)2047)))) <= (((/* implicit */int) (unsigned char)202))))) : ((~(((/* implicit */int) (signed char)92))))));
                var_12 ^= ((/* implicit */long long int) arr_3 [(unsigned char)0] [(unsigned char)0]);
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */long long int) (signed char)87)), (min((max((-6128892865068967545LL), (((/* implicit */long long int) (unsigned char)49)))), (((/* implicit */long long int) arr_1 [i_1]))))));
            }
        } 
    } 
}
