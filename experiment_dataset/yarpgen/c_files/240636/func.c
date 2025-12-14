/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240636
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_15)))) ? (var_13) : (4691661659721287599LL)))) ? (9067724706880732402ULL) : (((/* implicit */unsigned long long int) max((var_1), (var_1)))))))));
    var_21 |= ((/* implicit */unsigned short) min((((long long int) (!(((/* implicit */_Bool) -4691661659721287599LL))))), (((/* implicit */long long int) (unsigned char)25))));
    var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_23 *= ((/* implicit */short) (-(((/* implicit */int) min((((/* implicit */unsigned char) arr_7 [2U] [2U] [(signed char)6])), ((unsigned char)0))))));
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((short) var_19))), (((unsigned short) -4691661659721287601LL))))) ? ((+(max((((/* implicit */long long int) (signed char)98)), (-4691661659721287586LL))))) : (((/* implicit */long long int) ((var_16) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_2 - 2] [i_1] [i_0])) : (arr_3 [i_1] [i_1])))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned int) (short)-1852)), (var_16))))), (2600659833U)));
}
