/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236981
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
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 23; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) (-(var_3)));
                    arr_9 [i_0] [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_8 [i_0] [i_0 + 1] [i_0]) <= (((/* implicit */unsigned long long int) var_8)))) ? (3162019282010258467LL) : (((/* implicit */long long int) ((/* implicit */int) max((arr_6 [i_0] [i_1 + 1] [i_2 - 3]), (var_5)))))))) ? (((/* implicit */unsigned long long int) ((int) ((unsigned long long int) var_9)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) max((var_3), (var_8)))) : (arr_1 [i_0 + 1])))));
                    var_13 = ((/* implicit */unsigned long long int) ((long long int) (((+(((/* implicit */int) var_7)))) * (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (((!(((((/* implicit */_Bool) (unsigned char)235)) || (((/* implicit */_Bool) (short)32766)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) max((var_5), (var_7))))))) : (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_1)))))))))));
    var_15 += ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) 8205752007563964811ULL)) || (((/* implicit */_Bool) (signed char)-64)))) ? (((/* implicit */unsigned int) (+(1782677456)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (var_6))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) var_7)))))));
}
