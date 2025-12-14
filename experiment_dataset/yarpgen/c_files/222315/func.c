/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222315
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
    var_16 = 14;
    var_17 = ((/* implicit */unsigned short) max((((unsigned long long int) ((((/* implicit */int) (signed char)8)) - (((/* implicit */int) (unsigned short)31312))))), (max((((/* implicit */unsigned long long int) (_Bool)0)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-15))) + (9887108955241587554ULL)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_3 [(_Bool)1] = ((/* implicit */signed char) var_2);
        var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)31312)) ? (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) (unsigned short)51821)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4))))))))));
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1LL))));
        var_20 = ((/* implicit */unsigned int) (signed char)(-127 - 1));
        arr_4 [i_0] [i_0] &= ((/* implicit */signed char) arr_0 [i_0] [i_0]);
    }
    for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (signed char)8)), (18446744073709551615ULL)));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((-1677335945668670763LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)8)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))) : (((var_0) >> (((((/* implicit */int) var_14)) - (26961))))))))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 1; i_2 < 15; i_2 += 4) 
        {
            arr_12 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) arr_6 [(short)5]);
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_0 [i_2] [i_1]) : (arr_0 [i_2] [i_1])))) ? (((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [15ULL] [(short)8]))))) : (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned int) arr_11 [(_Bool)1] [(short)8])))))))))))));
        }
    }
}
