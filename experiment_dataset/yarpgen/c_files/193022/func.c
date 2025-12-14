/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193022
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
    var_13 = ((((/* implicit */_Bool) -20LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1955922308U)) + (3108601003577738418LL)))) : (((((var_5) & (var_5))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_2 [i_0]))))));
        var_14 = ((/* implicit */int) ((((arr_2 [i_0]) == (arr_2 [i_0]))) ? ((~(arr_2 [i_0]))) : (((arr_2 [i_0]) ^ (arr_2 [i_0])))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_15 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_5 [0ULL] [i_1]) : (((/* implicit */unsigned int) 960079743))))));
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (+((+(((/* implicit */int) arr_4 [i_1])))))))));
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (min((arr_2 [i_0]), (arr_2 [i_0]))) : (var_2)));
        }
        for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_5 [i_0] [i_2]) != (arr_5 [i_0] [i_2]))))));
            var_19 = ((/* implicit */long long int) min((arr_2 [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_1 [i_0])) ^ (arr_2 [8ULL])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_2]))) : (min((((/* implicit */long long int) 1468218626)), (arr_8 [i_0] [i_0] [i_2]))))))));
            arr_9 [i_2] = ((((/* implicit */_Bool) (+(max((arr_8 [i_2] [i_2] [i_2]), (((/* implicit */long long int) (short)9587))))))) ? ((-(arr_8 [i_0] [12LL] [i_2]))) : (((/* implicit */long long int) (+(var_0)))));
        }
        var_20 |= 1152921504606846912ULL;
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        var_21 = arr_10 [i_3];
        arr_13 [i_3] = ((((/* implicit */_Bool) 18446744073709551603ULL)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : ((-(var_7))));
    }
    var_22 = var_11;
}
