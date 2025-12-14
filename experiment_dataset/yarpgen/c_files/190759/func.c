/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190759
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_20 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-32))))) ? (367487368U) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (arr_5 [i_0]))))))) ^ (((/* implicit */unsigned int) arr_2 [i_0]))));
                arr_6 [i_1] [i_1] = min(((unsigned char)31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)60)) || (((/* implicit */_Bool) (unsigned short)6))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((long long int) var_6));
}
