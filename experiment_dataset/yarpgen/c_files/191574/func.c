/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191574
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
    var_12 = ((/* implicit */unsigned char) ((((min((11856627686602565241ULL), (((/* implicit */unsigned long long int) 2841971542U)))) >> (((((/* implicit */int) var_1)) - (11589))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_13 = ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (var_9))) << (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_1)))) - (65506))))) << ((((~(3268537617U))) - (1026429664U))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (~(arr_1 [i_0])));
        var_14 = ((/* implicit */signed char) var_9);
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 15697956781367119034ULL)) ? (((/* implicit */int) (unsigned short)794)) : (((/* implicit */int) arr_4 [i_1] [i_1])))) / (((/* implicit */int) arr_4 [i_1] [i_1]))));
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */long long int) (~(min((2453159469U), (((/* implicit */unsigned int) arr_0 [i_1]))))))) != (4150057782357284029LL))))));
        var_16 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((~(2841971536U))))))));
    }
    for (long long int i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] [1ULL] = ((/* implicit */short) (unsigned char)129);
        var_17 += ((/* implicit */short) ((((((/* implicit */int) arr_4 [i_2] [(unsigned char)16])) - (((/* implicit */int) arr_6 [i_2])))) != (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_4 [i_2] [(short)10]))))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) arr_4 [i_2] [(unsigned char)16]))));
        /* LoopSeq 1 */
        for (long long int i_3 = 2; i_3 < 14; i_3 += 1) 
        {
            var_19 = ((/* implicit */unsigned char) var_11);
            var_20 = ((/* implicit */short) ((_Bool) var_5));
        }
        arr_13 [i_2] = min((var_0), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_9))) >> (((var_11) - (4725982528759990766LL)))))));
    }
    for (long long int i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = ((signed char) (unsigned char)62);
        arr_17 [i_4] = ((/* implicit */unsigned char) (-(min((arr_12 [0U] [i_4]), (((/* implicit */unsigned int) var_8))))));
    }
}
