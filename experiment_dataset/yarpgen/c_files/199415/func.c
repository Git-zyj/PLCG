/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199415
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_10 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2] [i_1 + 1] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [1LL] [i_2])) : (((/* implicit */int) arr_6 [i_2] [i_1 - 1] [i_0]))))) ^ ((~((~(var_5)))))));
                    var_11 = ((/* implicit */_Bool) (short)-32742);
                }
            } 
        } 
    } 
    var_12 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
    var_13 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) min(((unsigned short)65527), (((/* implicit */unsigned short) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_2))))))) : ((~(var_9)))));
    var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-6920)) / (((/* implicit */int) (unsigned short)60567))))) : (((((/* implicit */long long int) var_9)) ^ (17179869056LL))))) + (var_1)));
    var_15 = ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) var_7))))) % (var_1)));
}
