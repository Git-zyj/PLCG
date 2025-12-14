/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239722
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
    var_16 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (1358474646037845530LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? ((-(var_13))) : (((797291318211127286LL) / (var_13))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) (unsigned short)49538)) : (((/* implicit */int) (unsigned char)251))))) : (min((1358474646037845548LL), (9223372036854775794LL))))));
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
    var_18 = var_6;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1358474646037845548LL)) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) 18446744073709551613ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-1358474646037845551LL))), (((-5217197960909271822LL) & (-7525626841967441754LL))))))));
                var_19 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
                var_20 = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (signed char)51)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : ((+(((long long int) arr_1 [(unsigned char)6] [i_0])))));
            }
        } 
    } 
}
