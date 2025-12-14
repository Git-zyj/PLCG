/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217297
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
    var_20 *= ((/* implicit */unsigned short) var_0);
    var_21 = ((/* implicit */_Bool) var_6);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_11 [i_1 + 1] [i_1 + 2] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) max((var_7), (((/* implicit */unsigned int) arr_7 [i_0] [i_1 - 1] [i_1] [i_2])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0] [i_1]))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_1 + 2])) << (((((/* implicit */int) arr_6 [i_0] [i_0])) - (10594)))))) : (((long long int) 62478914U)))))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) max((var_7), (((/* implicit */unsigned int) arr_7 [i_0] [i_1 - 1] [i_1] [i_2])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0] [i_1]))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_1 + 2])) << (((((((/* implicit */int) arr_6 [i_0] [i_0])) - (10594))) - (2777)))))) : (((long long int) 62478914U))))))));
                    arr_12 [i_0] [i_1 + 1] [i_1] = (~(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) 1174922367))))));
                    arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) arr_8 [i_0]);
                }
            } 
        } 
    } 
    var_22 *= ((/* implicit */short) 4294967284U);
}
