/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32110
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
    var_12 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)252))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) (short)24691))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35548))) : (-3982968599148752026LL)))), (((unsigned long long int) var_0))));
                var_13 *= max(((!(((/* implicit */_Bool) 128999636U)))), (((((/* implicit */long long int) ((/* implicit */int) max((var_11), ((unsigned char)65))))) >= (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (9223372036854775807LL))))));
                var_14 = ((/* implicit */unsigned char) ((max((var_1), (((/* implicit */unsigned long long int) 4294967285U)))) << (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))) - (203)))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) var_3);
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_7);
}
