/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225443
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) ((var_2) ? ((((_Bool)1) ? (((/* implicit */int) max(((unsigned short)38315), ((unsigned short)65535)))) : (((((/* implicit */_Bool) 1923900821U)) ? (262143) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (short)-1))));
                arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) >> (((((((/* implicit */_Bool) (short)-18142)) ? (((/* implicit */int) max((((/* implicit */short) (signed char)90)), ((short)-18142)))) : (((/* implicit */int) (_Bool)0)))) - (68)))));
            }
        } 
    } 
    var_12 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) 65535LL)) : (18446744073709551610ULL)))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) var_5))))) : (((((/* implicit */int) (unsigned short)26506)) * (((/* implicit */int) var_4))))))));
    var_13 = ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (-1) : (max((((((/* implicit */int) var_6)) % (10))), (((/* implicit */int) (signed char)-9)))));
}
