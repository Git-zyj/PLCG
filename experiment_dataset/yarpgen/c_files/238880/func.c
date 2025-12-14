/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238880
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) max(((unsigned short)64554), (((/* implicit */unsigned short) var_6))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_9)))) : ((-(var_8))))) - (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_1 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1] [i_1 + 1]))))));
            var_20 = ((/* implicit */_Bool) ((min(((~(18446744073709551604ULL))), (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) var_2))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 485323631U))))));
        }
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (11ULL)));
        var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2021725930350601141ULL)) ? (18446744073709551583ULL) : (18446744073709551604ULL)));
        arr_8 [i_0] = ((/* implicit */_Bool) min((18446744073709551602ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0 + 1])) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) var_10)))))));
    }
    for (short i_2 = 1; i_2 < 9; i_2 += 1) 
    {
        arr_11 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_16))))) ? (((/* implicit */int) arr_0 [i_2 + 1] [i_2 - 1])) : (min((((/* implicit */int) var_2)), (var_8))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (~(9223372036854775807LL))))));
        var_24 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_2 - 1])) ? (((/* implicit */int) arr_3 [3] [i_2 + 1])) : (((/* implicit */int) arr_3 [i_2] [i_2 - 1]))))) && (((((/* implicit */_Bool) (signed char)100)) || (((/* implicit */_Bool) 2555182323474222114ULL))))));
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) min((((/* implicit */unsigned long long int) (((~(-1))) & (((((/* implicit */_Bool) var_10)) ? (arr_2 [i_2]) : (((/* implicit */int) var_18))))))), ((-(((unsigned long long int) (_Bool)1)))))))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 4; i_3 < 11; i_3 += 4) 
    {
        var_26 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
        arr_14 [i_3] = ((/* implicit */unsigned long long int) ((arr_13 [i_3]) ? (((/* implicit */int) arr_13 [i_3 - 3])) : (arr_12 [4] [i_3 - 2])));
    }
    var_27 += ((/* implicit */_Bool) var_18);
    var_28 = ((/* implicit */unsigned long long int) var_16);
    var_29 = ((/* implicit */unsigned short) (((+(((23U) * (((/* implicit */unsigned int) 618229288)))))) | ((((~(var_12))) & (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_18)))))))));
}
