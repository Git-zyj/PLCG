/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35772
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_14)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_5))));
                arr_4 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) -1590045437085951982LL)) ? (-1590045437085951972LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32126)))));
                var_18 = ((/* implicit */long long int) 4160749568U);
            }
        } 
    } 
    var_19 &= ((/* implicit */short) 757618123);
}
