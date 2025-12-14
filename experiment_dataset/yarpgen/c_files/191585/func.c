/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191585
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
    var_17 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)39501)) ? (((/* implicit */int) (unsigned short)13)) : (1436763216))));
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) || ((((!(((/* implicit */_Bool) -1436763216)))) || (((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned long long int) var_11)) : (6294272179746564193ULL)))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)30109)) && (((/* implicit */_Bool) (unsigned short)39501))));
                arr_7 [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((1478055358934997420ULL), (((/* implicit */unsigned long long int) var_7))))) ? (17991875294302833947ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-108))))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((238341906), (-1034659386)))), (min((((/* implicit */unsigned int) var_7)), (var_4))))))));
                var_20 = ((/* implicit */unsigned int) max((max((max((((/* implicit */unsigned long long int) -1436763236)), (arr_6 [i_0]))), (((/* implicit */unsigned long long int) (signed char)0)))), (((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (-3587521253354345301LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)44)))))) : (((arr_5 [8] [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((var_1) >= (((/* implicit */unsigned int) (+(var_7))))))) : (((/* implicit */int) var_14))));
}
