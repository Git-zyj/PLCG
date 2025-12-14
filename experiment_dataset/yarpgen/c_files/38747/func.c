/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38747
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1369103635)) ? (9223371968135299072LL) : (((/* implicit */long long int) ((/* implicit */int) (short)1008)))));
    var_16 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */int) ((6610780427829124401LL) <= (((/* implicit */long long int) -2103752475))))), (((int) var_14)))) : ((+((-(var_11)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223371968135299084LL)) ? ((-(9223371968135299072LL))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_1]))))))))));
                var_18 &= ((/* implicit */unsigned long long int) (unsigned char)4);
            }
        } 
    } 
}
