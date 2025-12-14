/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236904
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
    for (short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [5] [i_0 + 3] [i_0 + 1] |= ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [6LL] [1] [i_1 + 1])) || (((/* implicit */_Bool) 17379755068906877972ULL))))) == (((/* implicit */int) var_6))))) ^ (((/* implicit */int) arr_5 [(signed char)2] [i_0 + 1] [i_1])));
                var_10 = (_Bool)1;
                arr_7 [i_0] [14ULL] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-13845)) > (((/* implicit */int) (_Bool)1))));
                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 1])))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (var_1))) > (((/* implicit */unsigned long long int) var_5))));
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_0))));
    var_14 = ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_0))) : (var_9)));
}
