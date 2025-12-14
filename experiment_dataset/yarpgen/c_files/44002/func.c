/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44002
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) <= (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)82)))))))))));
    var_13 = ((/* implicit */long long int) var_10);
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_14 -= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_1 [i_0 + 1]) - (arr_1 [i_0 - 2])))) ? (min((arr_2 [i_0 + 1]), (((/* implicit */long long int) arr_1 [i_0 - 1])))) : (((((/* implicit */_Bool) -170464893)) ? (arr_2 [i_0 - 1]) : (var_7)))));
        var_15 = ((/* implicit */short) arr_1 [i_0 - 2]);
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_16 &= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (arr_3 [i_1])))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1])) ^ (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) 2000250809)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : ((-9223372036854775807LL - 1LL)))) : (min((4766493243401360577LL), (((/* implicit */long long int) var_9))))))));
        var_17 = ((/* implicit */long long int) (~(min((((/* implicit */int) arr_4 [i_1])), (2000250809)))));
    }
    for (unsigned short i_2 = 4; i_2 < 19; i_2 += 1) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) << (((((/* implicit */int) arr_4 [i_2])) + (6588)))))) ? (((((/* implicit */_Bool) 1543654)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 - 2]))))) : (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) 170464893)) : (8191U)))))) ? (max((min((14991935877502364016ULL), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) arr_3 [i_2 + 1])))) : (((/* implicit */unsigned long long int) arr_3 [i_2 + 1]))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            arr_10 [i_2 - 3] [i_2 - 1] = -2000250810;
            var_19 = ((/* implicit */int) ((((((/* implicit */int) arr_4 [i_2 - 2])) >= (((/* implicit */int) arr_4 [i_2])))) || (((/* implicit */_Bool) (+(((/* implicit */int) ((-2000250810) < (arr_3 [i_2])))))))));
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_3])) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) (signed char)127)))) - (((/* implicit */int) ((12393391421723432247ULL) == (((/* implicit */unsigned long long int) arr_8 [i_2 - 3]))))))) & (((/* implicit */int) arr_6 [i_2 - 3])))))));
            var_21 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) arr_8 [i_2])) * (((((/* implicit */_Bool) (short)32767)) ? (11881608922800136834ULL) : (arr_9 [i_2] [14]))))), (((/* implicit */unsigned long long int) (+(arr_5 [i_2 + 1]))))));
        }
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-121)) ? (((max((1005739268), (arr_8 [i_2]))) >> ((-(((/* implicit */int) arr_6 [i_2])))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2 - 2])) || (((/* implicit */_Bool) arr_6 [i_2 + 2])))))));
    }
}
