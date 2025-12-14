/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53596
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [(signed char)2] = (signed char)104;
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_1 [(signed char)8]);
        arr_5 [i_0] [3ULL] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = ((((/* implicit */_Bool) arr_7 [i_1])) && (((/* implicit */_Bool) arr_7 [(signed char)2])));
        var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)48))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) | (((/* implicit */int) (_Bool)1))));
            var_15 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) var_1))))) ? (var_11) : (((/* implicit */unsigned long long int) ((arr_9 [i_1] [i_1] [(signed char)2]) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) arr_6 [(signed char)5]))))));
            arr_11 [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)-10995))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_6 [i_2])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_2]))) ^ (11782562279478565675ULL)))));
        }
    }
    var_16 = var_8;
    var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_5), (((/* implicit */signed char) var_0))))) ^ (((/* implicit */int) (signed char)-116))))), (18446744073709551615ULL)));
    var_18 *= var_4;
}
