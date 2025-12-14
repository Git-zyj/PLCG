/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51476
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
    var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (5515729456184555787LL))), (((/* implicit */long long int) (short)-11438))))) ? (((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)31))) > (var_14))))) : (((/* implicit */int) (_Bool)1))));
    var_21 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (3855629003U)))) ? (var_13) : (((/* implicit */unsigned long long int) ((var_1) & (((/* implicit */unsigned int) var_7)))))))) ? (min((2785564449927684256LL), (((/* implicit */long long int) (unsigned char)176)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-20))));
    var_22 += ((/* implicit */short) var_16);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((((/* implicit */_Bool) (signed char)0)) ? (((((/* implicit */int) (unsigned short)4586)) - (((/* implicit */int) (signed char)-15)))) : (((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_0])) : (arr_6 [i_2]))))) : (((/* implicit */int) (_Bool)0))));
                    var_24 = arr_9 [i_2 + 1] [i_0] [i_0] [12LL];
                    var_25 = ((/* implicit */_Bool) arr_2 [2ULL] [2ULL]);
                }
            } 
        } 
    } 
}
