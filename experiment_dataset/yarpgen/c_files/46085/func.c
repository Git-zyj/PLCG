/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46085
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
    var_18 = ((/* implicit */int) (signed char)-58);
    var_19 = ((/* implicit */signed char) ((int) var_17));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13917)) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_0 [i_1]))))) ? (((var_16) ^ (14308452090325499693ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_5 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0])))))))), (((/* implicit */unsigned long long int) var_8))));
                var_20 *= ((/* implicit */unsigned short) max((-6980050301122715836LL), (((/* implicit */long long int) (short)28002))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_8);
}
