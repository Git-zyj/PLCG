/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212091
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_20 *= ((/* implicit */unsigned short) ((unsigned int) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)48))))) : (((/* implicit */int) (unsigned char)52)))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)45)) >> (((arr_1 [i_1] [6]) - (6122488425343911943ULL)))))) ? ((-(((((/* implicit */_Bool) (short)48)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [(signed char)9] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0])))))))))));
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((_Bool) 1189907190)))));
            }
        } 
    } 
    var_23 = ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)15)) : (var_15)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_10))) * (-5834145854966047467LL))) : (((/* implicit */long long int) var_7))));
}
