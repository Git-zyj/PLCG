/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211177
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) min((arr_3 [i_1 + 2]), (((/* implicit */unsigned char) arr_2 [i_0] [i_1 + 2] [i_0]))))) != (((((/* implicit */_Bool) arr_1 [i_1] [i_1 + 1])) ? (((/* implicit */int) arr_1 [i_1] [i_1 + 3])) : (((/* implicit */int) arr_1 [i_1] [i_1 - 1]))))));
                arr_5 [14U] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 9199768788493175777ULL))));
                var_13 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) (signed char)108)) << (((((/* implicit */int) arr_2 [i_1 + 3] [i_1 + 3] [i_1 + 3])) + (27))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-77))))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) var_1))))));
            }
        } 
    } 
    var_14 *= ((/* implicit */unsigned long long int) (~(((long long int) max((((/* implicit */unsigned long long int) var_8)), (var_10))))));
    var_15 = ((/* implicit */long long int) var_7);
}
