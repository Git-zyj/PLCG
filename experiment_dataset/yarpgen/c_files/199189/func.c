/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199189
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
    var_15 = ((((/* implicit */unsigned long long int) ((var_11) << (((((16829853328326330594ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) - (16829853328326330592ULL)))))) ^ (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (short)-14300)))))) : (5545443380121834373ULL))));
    var_16 = ((/* implicit */unsigned char) -522335736083780237LL);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((int) min((((/* implicit */long long int) arr_0 [i_1] [i_1])), ((+(522335736083780243LL)))))))));
                var_18 = ((/* implicit */short) (((~(1921190164308252801ULL))) >> (((min((2542328893494327836ULL), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1 - 1])))) - (1649504719ULL)))));
                arr_4 [i_0] = ((/* implicit */signed char) var_8);
                var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((522335736083780257LL), (((/* implicit */long long int) arr_1 [i_1] [i_1]))))) ? ((-(var_7))) : (((/* implicit */unsigned long long int) arr_2 [i_1]))))) ? ((((+(4772182581724328414LL))) << (((((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0] [i_0]) : (2147483647))) - (1649504757))))) : (((((/* implicit */long long int) max((((/* implicit */unsigned int) var_1)), (var_8)))) / (min((arr_2 [i_0]), (arr_2 [i_1]))))));
            }
        } 
    } 
}
