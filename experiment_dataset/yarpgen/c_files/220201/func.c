/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220201
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
        for (signed char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) ((unsigned int) 7553720287539705607LL));
                arr_6 [i_0] = ((/* implicit */_Bool) (+(min((arr_0 [i_1 + 1]), (((/* implicit */unsigned long long int) arr_4 [i_1 + 3] [i_0 - 1] [i_0]))))));
                arr_7 [(unsigned char)11] = ((/* implicit */signed char) 7553720287539705635LL);
                arr_8 [i_1 + 3] = ((((/* implicit */_Bool) min((-7553720287539705615LL), (((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)1)), (var_2))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-7553720287539705608LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65531)))))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)187)) : (((/* implicit */int) (unsigned char)226))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_6)))) ? (max((((/* implicit */int) var_9)), (var_5))) : ((((-2147483647 - 1)) ^ (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_10 = ((((/* implicit */_Bool) -7553720287539705611LL)) ? (max((var_6), (((/* implicit */long long int) ((unsigned char) (signed char)118))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)118)) ? (285302049) : (((/* implicit */int) (signed char)109))))) ? (((/* implicit */int) (unsigned char)80)) : (((/* implicit */int) ((_Bool) var_0)))))));
}
