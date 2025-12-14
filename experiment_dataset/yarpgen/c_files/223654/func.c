/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223654
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
    var_10 = ((/* implicit */unsigned int) var_6);
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) var_5))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_12 &= ((/* implicit */short) (+(max((((/* implicit */long long int) max((var_0), (((/* implicit */unsigned char) var_6))))), (((((var_7) + (9223372036854775807LL))) << (((((var_7) + (3034893624310777629LL))) - (41LL)))))))));
        arr_2 [i_0] [(signed char)1] = ((/* implicit */signed char) ((unsigned long long int) ((((((/* implicit */_Bool) arr_1 [(signed char)6])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (var_4))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_1))))) - (min((((/* implicit */unsigned int) arr_0 [i_1])), (arr_4 [i_1]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_8)))))));
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) min(((-(((/* implicit */int) min((var_8), (((/* implicit */short) var_0))))))), ((+((~(((/* implicit */int) var_8))))))));
    }
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) min((((unsigned long long int) min((((/* implicit */short) var_6)), (var_3)))), (((/* implicit */unsigned long long int) var_6)))))));
}
