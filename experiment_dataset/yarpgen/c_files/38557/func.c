/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38557
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned short) min((max((var_1), (((/* implicit */long long int) var_7)))), (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)2047)) << (((var_1) + (518072165034440422LL)))))), (min((-8986367017262647748LL), (((/* implicit */long long int) (unsigned char)44))))))));
                arr_4 [i_0] = ((/* implicit */int) min((min((arr_3 [i_1 - 4]), (((/* implicit */unsigned long long int) arr_2 [i_1 + 1] [i_1] [i_1])))), (((/* implicit */unsigned long long int) min((arr_2 [i_1 - 3] [i_0] [5U]), (((/* implicit */int) var_7)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) (~(var_0)));
    var_13 *= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) << (((((/* implicit */int) (unsigned short)54141)) - (54135)))));
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_1))));
}
