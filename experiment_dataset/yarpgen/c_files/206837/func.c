/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206837
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
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            {
                var_14 = (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_3 [i_1 + 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 3]))))));
                var_15 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)50)) <= (((/* implicit */int) (unsigned short)57344))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_1);
}
