/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247133
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
    var_14 = (-(((((/* implicit */int) (_Bool)1)) ^ (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            arr_6 [i_1] = ((/* implicit */_Bool) ((signed char) (((!(((/* implicit */_Bool) 3184054419U)))) ? (min((arr_5 [i_0 + 4] [i_0]), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)165))))));
            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)16)))))))));
        }
        var_16 = ((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) + ((-(((/* implicit */int) var_1)))))) * (((/* implicit */int) ((arr_5 [i_0 - 4] [i_0 + 3]) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_1 [i_0 + 2]))))))))));
    }
}
