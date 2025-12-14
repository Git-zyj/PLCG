/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32167
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                arr_8 [i_1] = ((/* implicit */unsigned int) ((((int) (signed char)70)) * (((/* implicit */int) ((arr_2 [i_1 - 1]) <= (arr_2 [i_1 + 1]))))));
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((0ULL) + (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(signed char)2]))))) : (((/* implicit */int) ((arr_2 [i_1]) != (arr_2 [i_1 + 1])))))))));
                arr_9 [i_1] = ((/* implicit */int) 2199543814U);
                var_19 = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) (unsigned short)2051))) <= (min((min((((/* implicit */int) (_Bool)1)), (arr_2 [i_0]))), (458694035)))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_6);
    var_21 = ((/* implicit */unsigned int) (-(((((/* implicit */int) var_7)) / (((/* implicit */int) ((_Bool) -6985521957152310878LL)))))));
}
