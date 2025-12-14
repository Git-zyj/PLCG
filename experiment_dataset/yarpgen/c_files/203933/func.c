/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203933
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 8; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) var_4)), (8047562195717926345LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)3]))) : (((((/* implicit */_Bool) (short)-2694)) ? (((/* implicit */unsigned long long int) 301816438)) : (14617779620054843811ULL)))));
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_3 [i_1 - 1])))) ? (min((16981183813144263633ULL), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) (+(arr_3 [i_1 - 1]))))));
                var_20 += ((/* implicit */short) arr_1 [i_1]);
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_8);
    var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13224)) ? (var_12) : (var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 510054196)))))) : (((((/* implicit */_Bool) var_5)) ? (var_10) : (var_0))))) : (((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_8)), ((short)-2745))))) | ((-(var_15)))))));
    var_23 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-39)) ? (2687246306823575386LL) : (((/* implicit */long long int) var_17))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) -1001710574)) : (var_13))) : (((/* implicit */unsigned int) (~(var_14)))))));
    var_24 = ((/* implicit */unsigned long long int) (-(((4582505864094759806LL) / (-7607899285602851487LL)))));
}
