/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222367
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
    var_16 -= ((/* implicit */unsigned int) var_8);
    var_17 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_14)) * (var_4)))) ? (((/* implicit */unsigned long long int) ((var_14) * (var_13)))) : (min((var_12), (var_4)))))) ? (((/* implicit */int) ((unsigned char) var_6))) : (((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */int) ((_Bool) (unsigned char)31))) : (((((/* implicit */_Bool) 17965483094715967209ULL)) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) (unsigned short)65516))))))));
    var_18 += ((/* implicit */signed char) var_5);
    var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) var_0)) + (var_12)))))) + (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((var_15) - (2552753978U)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_8), (var_8))))) : (((long long int) var_2))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_20 *= ((/* implicit */unsigned long long int) min((max((3877935706U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 3877935697U))))) >> (((((/* implicit */int) ((unsigned short) arr_4 [i_1] [i_0]))) - (61299))))))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-85)), (417031595U)))) ? (((/* implicit */unsigned long long int) ((15U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1])))))) : (arr_3 [i_0] [i_1] [i_1])))))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((unsigned long long int) ((arr_2 [i_0] [i_1] [i_1]) << (((arr_5 [i_0] [i_0]) - (12589475155790165261ULL)))))))));
            }
        } 
    } 
}
