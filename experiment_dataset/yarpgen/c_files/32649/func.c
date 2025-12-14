/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32649
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
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_4)))))) ? (min((((/* implicit */long long int) max((arr_5 [(short)1] [i_0]), (((/* implicit */unsigned short) arr_4 [(signed char)12] [16] [(short)2]))))), (min((var_9), (((/* implicit */long long int) var_10)))))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_5 [i_1] [10U])))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_2 [(signed char)17] [i_0]) : (((/* implicit */int) arr_5 [i_0] [11ULL]))))))))))));
                var_21 = ((/* implicit */unsigned long long int) min(((unsigned char)186), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-32)))))));
                var_22 -= ((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1]);
                var_23 *= ((/* implicit */short) var_6);
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) | (var_17)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_15))))) : (((long long int) var_3))))) ? (((((/* implicit */_Bool) ((var_19) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))) ? (min((var_14), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
}
