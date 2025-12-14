/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209643
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((~(arr_2 [i_0]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)-26))))));
                var_12 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (short)4140)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (signed char)-28)))));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) - (((/* implicit */int) (signed char)125))))) ? (((((/* implicit */int) (_Bool)1)) - (-814637218))) : (((((/* implicit */int) (unsigned short)41218)) - (((/* implicit */int) (short)(-32767 - 1)))))));
            }
        } 
    } 
    var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */int) (unsigned short)61662)) : (((/* implicit */int) (!(((((/* implicit */_Bool) 7U)) || (((/* implicit */_Bool) var_4)))))))));
    var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 9223372036854775807LL)))))) | (var_1))))));
    var_15 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69))) - (((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
}
