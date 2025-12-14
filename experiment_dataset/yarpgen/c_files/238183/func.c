/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238183
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
    var_20 = max((((/* implicit */long long int) var_9)), ((-(-9223372036854775794LL))));
    var_21 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) <= (((/* implicit */int) (_Bool)1)))), ((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1] [i_1] [i_0])))))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) ((2ULL) > (max((18446744073709551614ULL), (((/* implicit */unsigned long long int) ((unsigned char) arr_2 [i_0])))))));
            }
        } 
    } 
}
