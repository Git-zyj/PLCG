/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246157
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
    var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_9)) : (var_5))) == (((/* implicit */long long int) ((/* implicit */int) var_3)))))), (((unsigned char) var_5))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 8; i_2 += 2) 
            {
                {
                    var_16 = min((var_1), (max((((/* implicit */long long int) var_12)), (((((/* implicit */_Bool) var_14)) ? (arr_4 [i_1]) : (((/* implicit */long long int) arr_3 [i_0])))))));
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_5 [i_0] [i_1 + 1] [i_0]))));
                    var_18 ^= ((((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_12)))) >> (((((/* implicit */int) max(((signed char)112), (((/* implicit */signed char) var_10))))) - (98))));
                    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) <= (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_0])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((short) (-(var_13)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) (unsigned char)206)) <= (((/* implicit */int) max(((unsigned short)30434), (((/* implicit */unsigned short) (signed char)-113)))))))), (((((/* implicit */int) min(((unsigned short)384), (((/* implicit */unsigned short) var_8))))) >> (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11))))))));
}
