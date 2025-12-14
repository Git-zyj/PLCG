/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43987
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
    var_16 = ((/* implicit */signed char) min((max((min((((/* implicit */long long int) var_0)), (var_3))), (((/* implicit */long long int) max((3460344926U), (((/* implicit */unsigned int) (signed char)-1))))))), (min((((/* implicit */long long int) min(((short)2029), (((/* implicit */short) (_Bool)0))))), (min((var_13), (var_15)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) 834622370U);
        arr_4 [i_0] = ((/* implicit */_Bool) 2000754194U);
        arr_5 [i_0] = (_Bool)1;
    }
    var_17 -= ((/* implicit */_Bool) max((min((min((((/* implicit */long long int) var_7)), (var_3))), (((/* implicit */long long int) min((((/* implicit */short) (_Bool)0)), (var_14)))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) min(((signed char)84), (((/* implicit */signed char) var_2))))), (min((834622362U), (((/* implicit */unsigned int) var_8)))))))));
    var_18 -= max((min((max((var_15), (((/* implicit */long long int) 834622370U)))), (((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), (var_14)))))), (max((max((var_3), (((/* implicit */long long int) (_Bool)0)))), (max((var_3), (((/* implicit */long long int) var_14)))))));
}
