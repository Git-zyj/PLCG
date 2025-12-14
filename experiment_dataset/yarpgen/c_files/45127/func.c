/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45127
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_18 = (+(((/* implicit */int) (unsigned short)32768)));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) max((-2055437673), ((-2147483647 - 1)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */_Bool) ((signed char) (~((~(-2147483630))))));
        arr_5 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) 10U)), (8317144327224434812LL)));
    }
    for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        var_20 += ((/* implicit */unsigned int) ((unsigned short) max((arr_6 [i_2]), (arr_6 [i_2]))));
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (unsigned short)15360)) ? (((/* implicit */int) (signed char)(-127 - 1))) : ((+(((/* implicit */int) (_Bool)1)))))));
        arr_9 [i_2] = ((/* implicit */signed char) var_4);
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (~(((((((/* implicit */long long int) var_8)) + (8128LL))) + (((/* implicit */long long int) arr_6 [i_2])))))))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_12);
    }
    var_22 = ((/* implicit */short) var_5);
    var_23 = (-(var_8));
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)66))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_8)) : (((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (9223372036854775807LL)))))));
}
