/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36614
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
    var_19 = ((/* implicit */int) (unsigned short)20938);
    var_20 = var_9;
    var_21 = (+(((/* implicit */int) var_9)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_0])), (18446744073709551589ULL))))))), ((signed char)50)));
                var_22 -= ((/* implicit */unsigned int) (-(arr_4 [i_0])));
                var_23 |= ((/* implicit */int) min(((!(((/* implicit */_Bool) arr_5 [i_1])))), ((!(((/* implicit */_Bool) (signed char)56))))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) var_17);
}
