/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206982
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16102))) % (-7616996732650573600LL)));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0])) % (((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_1])) != (arr_4 [i_0] [i_1])))) - (((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_0])))))));
                var_11 = ((/* implicit */unsigned char) -7616996732650573600LL);
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) << (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((signed char) var_9))) : ((-(((/* implicit */int) var_8)))))), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_9)))))));
    var_13 -= var_0;
    var_14 -= var_3;
}
