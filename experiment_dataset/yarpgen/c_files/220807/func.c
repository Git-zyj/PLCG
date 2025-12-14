/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220807
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
    for (signed char i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] [(signed char)11] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1])))))));
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_0 - 1]), (((/* implicit */unsigned long long int) var_5))))) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)483)) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */int) var_10)) >> (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [(unsigned char)1])) == (((/* implicit */int) var_11)))))))));
                var_13 = ((/* implicit */unsigned char) max((var_13), (arr_0 [3ULL])));
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) max((var_8), (((/* implicit */long long int) min((arr_4 [i_1] [i_0 - 1]), (((/* implicit */short) arr_0 [i_0 + 1]))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_5);
}
