/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195469
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
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (~((-2147483647 - 1))))), (min((((/* implicit */long long int) var_3)), (var_2))))))));
                    var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) 2147483647)), (32768U)));
                }
            } 
        } 
    } 
    var_15 *= ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)15)), ((-2147483647 - 1))));
}
