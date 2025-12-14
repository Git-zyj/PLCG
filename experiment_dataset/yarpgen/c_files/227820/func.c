/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227820
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
    var_19 &= ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [5U] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned short) var_1)), ((unsigned short)62305))), (max(((unsigned short)3231), (arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 1])))));
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (4423069295562327811ULL)))) ? ((+(((/* implicit */int) var_16)))) : (((/* implicit */int) ((signed char) (unsigned short)3231)))))) ? (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)255)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (3333709868836583135ULL) : (14023674778147223805ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -648158157)) && (((/* implicit */_Bool) 0)))))) : (((((/* implicit */_Bool) 2188490390U)) ? (((/* implicit */unsigned int) -93471771)) : (var_4)))))));
            }
        } 
    } 
}
