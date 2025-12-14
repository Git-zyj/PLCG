/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192424
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
    var_17 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_18 = arr_2 [i_0];
        var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)36569)), (2790795208662051495ULL)))) ? (min((min((((/* implicit */unsigned long long int) var_6)), (arr_1 [i_0]))), (arr_1 [i_0 - 1]))) : (((arr_1 [i_0 - 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1])))))));
        arr_3 [i_0 + 1] = (!(((/* implicit */_Bool) (short)32245)));
    }
    for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 3) 
    {
        arr_8 [i_1] = ((((/* implicit */_Bool) (~(arr_6 [i_1 - 3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1 - 1])) ? (arr_7 [i_1 - 1]) : (arr_7 [i_1 - 3])))) : (min((((/* implicit */unsigned long long int) arr_7 [i_1 + 1])), (var_15))));
        var_20 = ((/* implicit */int) arr_6 [i_1]);
        var_21 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)62485)) | (((/* implicit */int) (signed char)-3))));
    }
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(4863085375312932677ULL)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)3))))) : ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_10)))))));
}
