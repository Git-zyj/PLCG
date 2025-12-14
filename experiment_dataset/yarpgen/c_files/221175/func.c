/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221175
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))))) ? ((-(min((((/* implicit */int) (signed char)-119)), (var_6))))) : (((var_0) << (((((((min((((/* implicit */long long int) var_10)), ((-9223372036854775807LL - 1LL)))) - (-9223372036854775807LL))) + (3LL))) - (2LL)))))));
    var_14 = ((/* implicit */int) var_1);
    var_15 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-105)) - (((/* implicit */int) (signed char)-112))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_2 [19U] [i_1] [i_1]))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [9U])))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)-88)) ? (4070922429U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)94))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)127)))))))) : (((((/* implicit */_Bool) arr_1 [i_0] [9])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2205642285956765809LL)))) : ((-(0ULL)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [(short)11])) ? (arr_1 [i_0] [i_2]) : (arr_1 [i_1] [i_1]))) ^ (((/* implicit */unsigned long long int) ((((arr_2 [i_1] [i_1] [i_1]) + (9223372036854775807LL))) << (((8162992134304623146LL) - (8162992134304623146LL))))))));
                    arr_6 [(_Bool)1] [i_1] [i_2] = ((/* implicit */long long int) ((((arr_0 [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) 0LL)))) > (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [21ULL])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124)))))));
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) arr_2 [i_0] [i_1] [i_2]);
                }
                arr_8 [i_1] = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))) : (514930763U)));
            }
        } 
    } 
}
