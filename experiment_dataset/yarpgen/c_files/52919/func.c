/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52919
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
    var_14 = ((/* implicit */_Bool) var_3);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((unsigned int) (signed char)37)))));
                    var_16 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13))))) ? (((((/* implicit */int) (signed char)5)) & (((/* implicit */int) var_3)))) : (((/* implicit */int) var_7)))));
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)37)) >= (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) : (((/* implicit */int) ((unsigned char) var_13)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (9023679118802581136LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) 34359738367ULL)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(_Bool)1] [i_0])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (12901671723093736373ULL) : (((/* implicit */unsigned long long int) arr_1 [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-1944289484562275954LL))))))));
                }
            } 
        } 
    } 
}
