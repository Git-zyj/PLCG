/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47013
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
    var_19 = 4294967295U;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(arr_0 [(signed char)13] [i_0]))), (arr_0 [i_0] [i_0])))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) ((11U) >> (((var_18) - (955473788U))))))))))));
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3209524605U)) ? (min((var_3), (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 7747044430227739402ULL))))))))) ? ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) > (var_2)))))) : (arr_1 [i_0] [8]));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        var_21 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_18)))))), (((arr_1 [i_0] [i_0]) | (var_7)))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) (+(((var_17) - (((/* implicit */unsigned long long int) arr_0 [i_1 - 1] [i_1 + 1]))))));
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((4U) - (((var_18) << (((((((/* implicit */_Bool) 18U)) ? (((/* implicit */unsigned int) var_6)) : (var_15))) - (879780637U)))))));
    }
}
