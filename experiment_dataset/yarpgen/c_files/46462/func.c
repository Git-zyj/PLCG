/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46462
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
    var_14 += ((/* implicit */short) min((((/* implicit */long long int) var_5)), (max((var_4), (((/* implicit */long long int) var_9))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_15 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 + 1])) ? (((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 2])) : (var_13)))) ? ((~(((/* implicit */int) (short)9001)))) : (((/* implicit */int) ((unsigned short) var_3))));
                    var_16 = min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [10])) ? (arr_8 [i_0] [i_0 + 2] [i_0]) : (((/* implicit */int) arr_6 [i_0]))))), (((-5686775256166496274LL) | (-10LL))));
                }
            } 
        } 
    } 
    var_17 |= ((/* implicit */unsigned char) (-(15318592544744672057ULL)));
}
