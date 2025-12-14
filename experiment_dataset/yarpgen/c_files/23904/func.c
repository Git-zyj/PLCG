/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23904
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
        for (short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) (_Bool)1))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))) ? (((long long int) arr_4 [i_1] [i_0] [i_1 + 1])) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)28317)))))));
                var_14 = ((/* implicit */long long int) (+(((((/* implicit */int) (unsigned short)37219)) - (((/* implicit */int) (!(((/* implicit */_Bool) -8745673459441748292LL)))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) max((((var_6) / (((/* implicit */unsigned long long int) (+(2259138973U)))))), (((/* implicit */unsigned long long int) var_7)))))));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)28311))))), (var_12))), (((/* implicit */unsigned long long int) var_3))))));
    var_17 = ((/* implicit */unsigned short) ((unsigned char) ((((_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_10))));
}
