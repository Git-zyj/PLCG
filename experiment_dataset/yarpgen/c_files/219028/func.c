/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219028
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
    var_10 = ((/* implicit */unsigned char) min(((~(max((var_9), (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))) << (((var_2) - (727451956))))))));
    var_11 &= max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))), (min((var_2), (var_2))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) ((max((((arr_6 [i_1 + 3]) << (((((/* implicit */int) (unsigned char)200)) - (196))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))))) <= (((/* implicit */unsigned int) ((int) (unsigned short)11625)))));
                    var_13 = ((/* implicit */signed char) ((unsigned long long int) arr_1 [i_2] [i_1]));
                    var_14 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)41692)))) ? (((int) var_2)) : (((/* implicit */int) ((2122627583U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1573))))))))));
                }
            } 
        } 
    } 
}
