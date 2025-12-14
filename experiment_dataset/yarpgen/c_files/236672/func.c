/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236672
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
    var_15 |= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)3583)) > (((/* implicit */int) (unsigned char)216))))), (var_10)));
    var_16 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_3))) << (((max((((((/* implicit */_Bool) var_6)) ? (var_14) : (((/* implicit */unsigned long long int) var_1)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) : (var_14))))) - (12387253419077458198ULL)))));
                    var_18 -= ((/* implicit */unsigned char) max(((-(-1200758457351981902LL))), (((/* implicit */long long int) var_1))));
                }
            } 
        } 
    } 
}
