/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248068
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] = (unsigned char)53;
                arr_6 [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)4393)))), (min((((/* implicit */int) (_Bool)0)), ((~(((/* implicit */int) (signed char)127))))))));
                var_11 = ((/* implicit */long long int) (signed char)127);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) (_Bool)1);
}
