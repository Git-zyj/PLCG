/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52908
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
    var_12 = ((/* implicit */unsigned short) max((min((min((((/* implicit */long long int) var_0)), (-1558235796492556516LL))), (340381889860511054LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)5))))) : (((/* implicit */int) var_8)))))));
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1558235796492556515LL)) ? (1558235796492556515LL) : (5422238256851821221LL)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) var_11)))))));
    var_14 = ((/* implicit */_Bool) (~(((max((1558235796492556515LL), (((/* implicit */long long int) 3560049525U)))) ^ (((/* implicit */long long int) ((/* implicit */int) ((var_6) <= (((/* implicit */long long int) ((/* implicit */int) var_0)))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) arr_5 [i_0] [i_1]);
                arr_7 [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [22]))));
                var_15 = ((unsigned int) (_Bool)1);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_6);
}
