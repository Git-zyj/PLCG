/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197545
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (~(((((((/* implicit */_Bool) arr_6 [(unsigned short)0] [4LL] [(unsigned short)0] [4U])) || (((/* implicit */_Bool) var_10)))) ? (var_4) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-1))))))))))));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)100))) <= (arr_0 [i_0]))), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3205442735U)))))) < (var_4)))));
                    var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [10U]))))), (((var_13) * (((/* implicit */unsigned long long int) var_10))))))) ? ((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned long long int) (+(arr_1 [i_1])))) : (max((((/* implicit */unsigned long long int) -577004235)), (6500796200420411875ULL))))) : (((/* implicit */unsigned long long int) arr_5 [i_2] [i_0] [i_0]))));
                    var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((var_11) | (980095588)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-44))) : (((((/* implicit */_Bool) var_7)) ? (2734798221312369866ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 + 1] [i_0 + 1]))))));
                }
            } 
        } 
    } 
    var_17 = (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 1048575LL)) ? (((/* implicit */unsigned long long int) var_5)) : (4662207220004003770ULL))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */unsigned int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_0)), ((unsigned short)13311))))) : (((((/* implicit */unsigned long long int) var_10)) ^ (var_13))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned int) var_6))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))));
    var_19 = ((/* implicit */_Bool) max((max((min((((/* implicit */unsigned long long int) (unsigned char)131)), (var_13))), (((/* implicit */unsigned long long int) ((long long int) -6178034039011180999LL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)102)))))));
}
