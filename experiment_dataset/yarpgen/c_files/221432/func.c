/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221432
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
    var_17 = var_2;
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_0 [i_1 + 3])))) ? ((+(arr_0 [i_0 - 3]))) : (arr_0 [(unsigned short)8])));
                var_19 |= ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_6)))))), ((~(((/* implicit */int) arr_1 [i_0 - 3]))))));
                arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)50)))))))) ? (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1 + 2])) ? (arr_2 [i_0 - 2] [i_1 + 2]) : (arr_2 [i_0 - 1] [i_1 + 1]))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_1 [9])), (arr_4 [(short)15] [(signed char)15] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) == (((/* implicit */int) var_10)))))) : ((~(arr_3 [i_0 - 1] [i_0])))))));
                var_20 -= ((/* implicit */signed char) ((((arr_2 [i_0 - 3] [13LL]) + (9223372036854775807LL))) << (((((/* implicit */int) var_10)) - (154)))));
            }
        } 
    } 
    var_21 -= ((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_1)) : (-7901822384654796116LL)))) ? (((/* implicit */unsigned long long int) var_15)) : (var_8))));
}
