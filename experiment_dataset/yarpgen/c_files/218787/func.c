/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218787
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                var_17 ^= ((/* implicit */_Bool) min((((/* implicit */long long int) max((arr_1 [i_0]), (arr_1 [i_0])))), (max((((/* implicit */long long int) arr_1 [i_0])), (var_16)))));
                arr_6 [i_0] [i_1 + 1] = (!(((/* implicit */_Bool) ((var_16) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_15))))))))));
                arr_7 [i_0] [i_1 + 2] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_0] [i_1 + 1])), (max((var_5), (((/* implicit */long long int) var_6))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)96))))) : (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned int) var_2)), (arr_2 [i_1 + 2])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (unsigned char)159)))), (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((int) var_7))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_0))))), (min((((/* implicit */long long int) var_13)), (arr_12 [i_2] [i_2]))))))))));
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((unsigned short) ((int) (unsigned char)210))))));
            }
        } 
    } 
    var_20 = min((((/* implicit */long long int) var_14)), ((+(min((((/* implicit */long long int) (unsigned char)45)), (-3232329883256267001LL))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_14), (((/* implicit */int) var_6))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_3)), (var_12)))) : (((/* implicit */int) ((_Bool) (short)18749)))))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) var_1))));
}
