/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50078
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
    var_19 = var_1;
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) var_10)) : (min((((((/* implicit */int) (signed char)96)) << (((((var_16) + (175459761139364265LL))) - (24LL))))), (((/* implicit */int) var_9))))));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) / (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : ((~(var_1)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_0))))) : (var_16)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_6))))))) ? (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_18)))), (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((var_8) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0] [(signed char)4]))));
        var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0])), ((~(max((var_1), (((/* implicit */unsigned long long int) var_12))))))));
        var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (arr_1 [14]))))))));
        var_26 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_1]))));
        var_27 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_0 [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? ((~(var_16))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-96)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((var_15) >> (((arr_4 [(short)16]) - (2000283453))))) : (((((/* implicit */_Bool) 1023ULL)) ? (((/* implicit */int) var_13)) : (arr_4 [i_1]))))))));
        arr_6 [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) var_3)) ? (var_12) : (arr_4 [i_1]))) - (((var_8) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        var_28 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_1 [i_2]) : (arr_1 [i_2]))));
        var_29 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) arr_3 [i_2] [i_2])))));
    }
}
