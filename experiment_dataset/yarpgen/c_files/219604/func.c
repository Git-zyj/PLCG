/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219604
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
    var_10 += ((((/* implicit */_Bool) 18446744073709551615ULL)) ? ((((_Bool)0) ? (-7789743802184309938LL) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) var_1))));
    var_11 = ((/* implicit */unsigned short) (~(11661584865207385112ULL)));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)44))) | (8803738345858557419LL)))) ? ((-(((arr_0 [i_0]) & (arr_0 [i_0 - 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) min((((/* implicit */short) (signed char)34)), (arr_2 [9] [5LL] [i_0 - 4])))), (var_9)))))));
                var_13 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) 18446744073709551604ULL)) ? (10192956767988666751ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (4294967282U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44835))) : (((unsigned int) arr_2 [(unsigned short)4] [(unsigned short)4] [(unsigned short)6])))))));
            }
        } 
    } 
}
