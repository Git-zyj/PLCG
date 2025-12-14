/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217175
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
    var_17 = ((/* implicit */int) var_16);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((18446744073709551615ULL) | (((/* implicit */unsigned long long int) 135610182U)))) : (((/* implicit */unsigned long long int) 4159357110U))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((var_4) * (((/* implicit */unsigned long long int) 2139238355124480802LL))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21852)) ? (arr_3 [i_1] [i_1] [i_0]) : (((/* implicit */int) var_14)))))))) : (-1226172563)));
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((9212385564244487945LL) | (((/* implicit */long long int) 0)))) >> (((/* implicit */int) ((unsigned char) (_Bool)1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-76)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))));
                var_19 = ((/* implicit */int) (~(((unsigned int) ((signed char) (signed char)-17)))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((unsigned long long int) 10758999427772450992ULL))) ? (((/* implicit */unsigned long long int) 308030281981296382LL)) : ((-(var_12))))) : (((/* implicit */unsigned long long int) -850724333))));
}
