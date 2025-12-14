/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207987
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
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_8))) ? (max((((/* implicit */long long int) min((1543891811U), (((/* implicit */unsigned int) (signed char)34))))), (min((arr_1 [i_0]), (arr_1 [8]))))) : (((/* implicit */long long int) (-((-(3670016U)))))))))));
        arr_4 [i_0 + 1] = ((/* implicit */unsigned int) max((arr_3 [i_0]), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) ((signed char) arr_1 [i_0]))))))));
    }
    for (signed char i_1 = 3; i_1 < 11; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) (~(734454892385419788LL)));
        var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */int) arr_6 [i_1])), (arr_7 [i_1 - 1] [i_1])))) ? (((int) var_16)) : (max((var_13), (((/* implicit */int) arr_6 [i_1])))))) / (((int) arr_7 [i_1] [(signed char)4]))));
    }
    var_22 = ((/* implicit */signed char) var_6);
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) max((((/* implicit */short) (signed char)-1)), (var_19))))) && (((/* implicit */_Bool) var_17))));
}
