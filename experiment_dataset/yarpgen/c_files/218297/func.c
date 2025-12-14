/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218297
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_19 ^= ((/* implicit */long long int) (+(((/* implicit */int) max((((unsigned char) (unsigned char)0)), (arr_0 [i_0]))))));
        var_20 ^= ((/* implicit */signed char) (unsigned char)127);
    }
    /* LoopSeq 1 */
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1] [i_2])) & (((/* implicit */int) var_17))))) ? (((((/* implicit */_Bool) arr_4 [(signed char)15])) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_2] [i_1])))))));
            arr_7 [i_1] [(signed char)12] &= ((/* implicit */unsigned char) arr_5 [i_1]);
        }
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned long long int) var_4)), (var_0))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (unsigned char)13))))) : (((arr_4 [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_5 [i_1]))))))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_16))));
        arr_9 [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))));
        var_23 += ((/* implicit */long long int) max((((((((/* implicit */_Bool) arr_5 [(_Bool)1])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42614))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (unsigned short)47285)) : (((/* implicit */int) (unsigned char)37))))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_1 [i_1] [i_1])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (var_8))))))));
    }
    var_24 &= (((!(((/* implicit */_Bool) min((((/* implicit */short) (signed char)-96)), (var_1)))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_2)), (((((/* implicit */int) (unsigned short)65280)) >> (((9223372036854775801LL) - (9223372036854775794LL)))))))) : (2937649936U));
    /* LoopSeq 2 */
    for (long long int i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */long long int) ((((arr_3 [i_3]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_10 [i_3]))));
        var_25 = ((/* implicit */unsigned short) min((min((arr_13 [i_3]), (arr_13 [i_3]))), (((/* implicit */unsigned int) ((arr_2 [i_3]) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3])))))))))));
    }
    for (long long int i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned short) ((((((_Bool) var_6)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_12 [2LL])) : (((/* implicit */int) var_11))))))) ? (var_5) : (((/* implicit */long long int) (-(((/* implicit */int) ((signed char) (unsigned char)251))))))));
        var_26 = ((unsigned char) var_3);
    }
    var_27 = ((/* implicit */long long int) var_1);
}
