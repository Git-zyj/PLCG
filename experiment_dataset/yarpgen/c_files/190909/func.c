/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190909
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
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) min((((((((/* implicit */int) (short)255)) / (30127665))) | ((+(((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_0 - 2])))))), (((((/* implicit */int) arr_2 [i_0 + 1] [17])) * (max((var_3), (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))))))))));
                var_15 = ((((/* implicit */_Bool) 3469097993U)) ? (min((((var_5) ? (((/* implicit */int) (unsigned short)31985)) : (((/* implicit */int) var_2)))), (((/* implicit */int) max(((unsigned short)52177), (((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_0]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1000)) ? (var_1) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)157)) > (arr_1 [i_0])))) : (((/* implicit */int) arr_2 [i_1 - 1] [i_1])))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) ((((/* implicit */unsigned int) ((int) (~(18446744073709551615ULL))))) - (max((((/* implicit */unsigned int) var_10)), (var_6)))));
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) var_5))) != (((/* implicit */int) var_9)))))));
}
