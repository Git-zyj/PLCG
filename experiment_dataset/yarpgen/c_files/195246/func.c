/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195246
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) << (((/* implicit */int) arr_0 [i_0])))))));
        var_12 &= ((/* implicit */short) arr_1 [i_0]);
        var_13 += ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (arr_1 [i_0]))) != (arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 12; i_1 += 1) 
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_3 [i_1]) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 + 1])))))))) ? (min((arr_3 [i_1]), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)0)))))) : (arr_3 [i_1])));
        var_15 += ((((/* implicit */int) ((((((/* implicit */int) var_3)) | (((/* implicit */int) arr_2 [i_1])))) > (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)64)))))))) + (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))));
        var_16 = ((/* implicit */short) (-(min((min((((/* implicit */unsigned long long int) arr_1 [3LL])), (var_4))), (((/* implicit */unsigned long long int) (-(arr_3 [i_1]))))))));
    }
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(1234759733U)))), (((min((((/* implicit */unsigned long long int) var_2)), (var_1))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
    var_18 &= ((/* implicit */signed char) min((((((/* implicit */int) ((((/* implicit */_Bool) (signed char)103)) || (((/* implicit */_Bool) (unsigned char)211))))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))), (((/* implicit */int) ((((/* implicit */int) var_3)) > (((((/* implicit */int) (signed char)-100)) - (((/* implicit */int) (signed char)100)))))))));
}
