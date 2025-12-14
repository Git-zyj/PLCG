/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44998
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
    var_20 = ((/* implicit */signed char) var_6);
    var_21 = ((/* implicit */long long int) var_3);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_22 *= ((/* implicit */short) ((unsigned long long int) 2688733773241868793LL));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-59)) > (((/* implicit */int) (_Bool)1))));
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) ((unsigned short) 3583466029U)))));
                    var_25 = ((/* implicit */unsigned int) ((unsigned short) (short)15992));
                }
            } 
        } 
    } 
}
