/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223657
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
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 21U))));
    var_15 = ((/* implicit */unsigned short) min((var_7), (((/* implicit */long long int) (+(min((((/* implicit */unsigned int) var_5)), (var_11))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_16 &= ((/* implicit */unsigned short) 21U);
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */int) ((((/* implicit */_Bool) (signed char)86)) && (((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_1 + 1]))))) * (((/* implicit */int) (unsigned char)10))))));
                }
            } 
        } 
    } 
}
