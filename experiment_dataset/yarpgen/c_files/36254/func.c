/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36254
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
    var_10 = ((/* implicit */signed char) var_1);
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34237)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)34246))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) (unsigned short)34237)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1LL)))))) ? (2793131281U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)102)))));
    var_12 = ((/* implicit */unsigned int) (signed char)111);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] [(signed char)13] [i_1] = ((/* implicit */unsigned long long int) ((((long long int) min(((unsigned short)34237), (((/* implicit */unsigned short) arr_3 [i_0] [i_0 + 1] [i_1]))))) > (min((-1LL), (max((arr_1 [(signed char)9]), (((/* implicit */long long int) var_5))))))));
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-64)), (4194303)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)31289))))) : (min((arr_1 [i_0 - 1]), (((/* implicit */long long int) arr_4 [i_1])))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_5)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)34246)) % (((/* implicit */int) (unsigned short)52125))));
}
