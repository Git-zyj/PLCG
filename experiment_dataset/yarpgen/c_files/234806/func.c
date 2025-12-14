/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234806
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
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((unsigned short) (-((-(var_1)))))))));
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 18127336788707039815ULL)))) : (((((/* implicit */_Bool) (unsigned char)128)) ? (var_1) : (((/* implicit */unsigned long long int) var_10))))))) ? (((/* implicit */int) (unsigned short)25663)) : ((~(((/* implicit */int) (unsigned char)127))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */int) arr_6 [i_1] [i_1 + 1]);
                    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [(_Bool)1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_1]))))) : (((((/* implicit */_Bool) arr_7 [i_1] [i_1 - 1] [i_1] [i_1])) ? (1877335943) : (((/* implicit */int) var_5))))))) ? (((var_2) ? (arr_5 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((var_10) << (((((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (36028797018931200ULL))) - (18446744073709551540ULL)))))));
                    var_15 -= ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) max((arr_3 [i_2]), (((/* implicit */signed char) var_2))))) : (((/* implicit */int) ((unsigned char) arr_2 [i_2] [i_1 - 1])))));
                }
            } 
        } 
    } 
}
