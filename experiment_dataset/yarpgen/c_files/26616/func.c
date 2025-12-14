/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26616
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((arr_5 [i_0] [i_0] [i_2]), (((/* implicit */int) arr_0 [(signed char)11])))) | (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_0 [i_1])) : (arr_5 [i_1 + 1] [i_1 + 1] [i_2]))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))))));
                    arr_8 [7ULL] [i_1 - 4] = ((/* implicit */unsigned int) arr_6 [i_0] [i_0]);
                    var_13 = ((((/* implicit */int) (unsigned char)200)) == (((/* implicit */int) max((((unsigned char) var_1)), (((/* implicit */unsigned char) min((((/* implicit */signed char) (_Bool)1)), (var_1))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((_Bool) ((var_6) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_11)))) ? (((var_6) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)63488)))) : ((-(((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-23))) - (1804709842U)))) ? (((1483625400U) - (1483625398U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_3), (var_7)))))))));
}
