/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234158
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
    var_17 += ((/* implicit */unsigned char) max(((-(7322274497223216475LL))), (max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_5)) : (-7322274497223216466LL))), (-7322274497223216492LL)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -7322274497223216462LL))));
                    arr_7 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) ((signed char) (-((+(((/* implicit */int) (short)-12343)))))));
                    arr_8 [i_2] [19LL] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) var_12))))), (((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) -2147483634)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))))) : (-7322274497223216493LL)));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_1)) == (max((((((/* implicit */unsigned long long int) -7322274497223216471LL)) + (arr_0 [13]))), (((/* implicit */unsigned long long int) 7322274497223216473LL))))));
                }
            } 
        } 
    } 
    var_20 = var_14;
}
