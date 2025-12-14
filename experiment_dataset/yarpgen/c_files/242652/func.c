/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242652
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_12 [i_2] [i_1] [i_2] &= ((/* implicit */short) ((3828042625304766488LL) == (((/* implicit */long long int) ((-2004100484) / (((/* implicit */int) arr_10 [i_0 - 1] [i_0] [i_2 - 1] [i_0])))))));
                    var_18 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_17)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
    var_20 = ((/* implicit */long long int) (((((_Bool)1) || (((/* implicit */_Bool) 2732687933U)))) && (((/* implicit */_Bool) min((var_8), (((((/* implicit */_Bool) (short)-8840)) ? (((/* implicit */int) var_4)) : (2147483647))))))));
    var_21 = ((/* implicit */unsigned int) min((((long long int) ((((/* implicit */_Bool) 18446744073709551604ULL)) || (((/* implicit */_Bool) var_8))))), (((/* implicit */long long int) max((max((((/* implicit */unsigned int) var_9)), (var_6))), (((/* implicit */unsigned int) var_5)))))));
}
