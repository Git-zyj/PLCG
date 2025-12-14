/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216146
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
    var_13 = ((/* implicit */unsigned long long int) (+(6399762714992058254LL)));
    var_14 = ((/* implicit */_Bool) var_3);
    var_15 -= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9142))) : (2016018139572717163ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) (signed char)127)) ? (var_10) : (((/* implicit */unsigned long long int) var_1)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_1 + 2] [i_1]))))) ? (((/* implicit */int) ((2016018139572717163ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_0] [i_1])))))) : (((((/* implicit */_Bool) 16430725934136834457ULL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)9128))))));
                var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1]))));
                var_17 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) - ((-(((((/* implicit */int) (short)9138)) - (((/* implicit */int) arr_0 [i_1 + 2]))))))));
                arr_5 [i_1] [(signed char)19] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))));
            }
        } 
    } 
    var_18 += ((/* implicit */unsigned short) var_3);
}
