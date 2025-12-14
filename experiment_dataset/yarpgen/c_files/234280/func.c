/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234280
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
    var_17 = ((/* implicit */_Bool) var_2);
    var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_16)), (((unsigned char) min((var_5), (((/* implicit */unsigned long long int) var_14)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (-671002091)));
                arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) (signed char)-78)))), (((/* implicit */int) var_1))))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_13))));
            }
        } 
    } 
}
