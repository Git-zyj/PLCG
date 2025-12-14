/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246897
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
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)132)), (0ULL))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (3719207880092769179ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((max((((/* implicit */signed char) arr_0 [i_0])), ((signed char)109))), ((signed char)-117))))) : ((+(arr_1 [i_0]))))))));
                var_20 -= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) 1963910781)))));
                var_21 = ((/* implicit */unsigned char) arr_3 [i_0] [i_1] [i_0]);
                var_22 ^= ((/* implicit */short) ((((((/* implicit */_Bool) min(((signed char)-120), (arr_3 [i_0] [i_1] [i_0])))) ? (max((((/* implicit */long long int) arr_0 [i_1])), (-960667156759136166LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))))) + (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))));
            }
        } 
    } 
    var_23 |= ((/* implicit */short) var_7);
    var_24 ^= ((/* implicit */unsigned long long int) var_13);
}
