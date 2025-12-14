/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200805
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) max((arr_8 [i_2] [i_2] [i_2] [i_2 + 1]), (((/* implicit */unsigned char) var_8))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) 2057556921)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [(unsigned char)15] [i_1])))))))))));
                    var_11 = ((/* implicit */int) min((((/* implicit */long long int) ((short) arr_3 [i_2]))), (arr_9 [i_0] [14LL] [i_0])));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */int) var_3);
}
