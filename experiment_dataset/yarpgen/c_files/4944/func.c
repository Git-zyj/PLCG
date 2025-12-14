/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4944
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
    var_14 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) (signed char)-86))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((var_5) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)119)))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_15 |= ((/* implicit */int) (signed char)112);
            arr_5 [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) arr_4 [i_0 + 2])) ? (((((/* implicit */_Bool) 7076066789318741868LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (signed char)79)));
            var_16 = ((/* implicit */unsigned char) (_Bool)1);
            var_17 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 4294967282U)) <= (arr_1 [i_0] [i_1])));
        }
        var_18 = ((/* implicit */int) var_10);
    }
    for (long long int i_2 = 3; i_2 < 14; i_2 += 1) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)63)) <= (((/* implicit */int) arr_3 [i_2] [i_2 - 2])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-62))) < (var_13)))) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) var_3)) : (min((((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) (signed char)3))))), (var_4))))))));
        arr_8 [i_2] [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_2] [i_2 - 2])), (arr_7 [i_2] [i_2 + 1])))) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_3 [i_2] [i_2]), (((/* implicit */unsigned char) var_2))))))))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((7265853436739133280ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)1917))))))))));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((((/* implicit */unsigned long long int) (short)30898)), (((((/* implicit */_Bool) arr_1 [i_2 - 1] [i_2 - 3])) ? (((/* implicit */unsigned long long int) 1068467627U)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)4095))) - (arr_1 [i_2] [i_2]))))))))));
    }
}
