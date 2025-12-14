/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50047
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
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -2011767534)) ? (((((/* implicit */_Bool) (short)-30232)) ? (3729021451U) : (490168092U))) : (arr_2 [i_0 + 1]))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((490168092U) < (490168092U)))))))));
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 933282942)), (min((((/* implicit */unsigned long long int) ((unsigned char) -961180242))), (18446744073709551615ULL))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 2009543930)) && (((/* implicit */_Bool) arr_0 [i_3])))) ? (max((((((/* implicit */unsigned long long int) var_12)) - (var_1))), (((/* implicit */unsigned long long int) ((int) (unsigned char)35))))) : (((/* implicit */unsigned long long int) -2147483641))));
        var_18 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 961180264)) ? (var_11) : (((/* implicit */unsigned int) -961180242)))))));
    }
    for (int i_4 = 4; i_4 < 24; i_4 += 4) 
    {
        arr_16 [i_4] [i_4] = ((/* implicit */_Bool) var_14);
        var_19 = ((/* implicit */int) min((var_19), (min((961180241), (-2009543947)))));
    }
    var_20 = ((/* implicit */int) (((!((!(((/* implicit */_Bool) 14318141439896951388ULL)))))) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))), (((unsigned long long int) (_Bool)0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((18446744073709551615ULL) - (((/* implicit */unsigned long long int) var_13)))) != (var_1)))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_15)))))) != (((((var_0) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
    var_22 = ((/* implicit */short) ((long long int) min((((/* implicit */int) (short)27445)), (((((/* implicit */int) (signed char)74)) >> (((((/* implicit */int) (signed char)59)) - (59))))))));
}
