/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200621
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) min((var_16), (((/* implicit */int) var_6))))) % (var_18)))) ? (((/* implicit */unsigned long long int) ((long long int) var_15))) : (((unsigned long long int) var_0))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */int) (((+(((/* implicit */int) arr_0 [i_0 - 1] [i_1])))) != (((/* implicit */int) (((!(var_2))) || (((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned int) 0))))))))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_6 [i_0 - 1] [i_0 - 2] [i_0]) * (var_18)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) / (1832062665)))) : (5126901720470228333LL)));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_8);
    var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (var_10) : (((/* implicit */unsigned long long int) var_16)))) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((signed char)97), (((/* implicit */signed char) (_Bool)1))))))))));
}
