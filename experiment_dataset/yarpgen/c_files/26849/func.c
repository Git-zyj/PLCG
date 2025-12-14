/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26849
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1 - 2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0]))))) >> (((((var_1) >> (((/* implicit */int) (_Bool)0)))) - (836092255U)))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_5))));
                var_10 = ((/* implicit */long long int) arr_5 [i_0] [i_0]);
                var_11 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) / (((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) arr_3 [(signed char)8] [i_1 + 2] [2U])) ? ((~(var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 2])))))));
            }
        } 
    } 
    var_12 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 3072009875U)) ? (1880939674) : (1439969909)));
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)48)) / (((/* implicit */int) (unsigned char)141))))) ? ((-(var_9))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))) >> (((((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */long long int) var_4)))) - (7689231527967413928LL)))))))))));
}
