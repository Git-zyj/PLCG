/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244541
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) + (var_5)));
        arr_3 [i_0] [i_0] = ((((((/* implicit */_Bool) arr_0 [(short)11])) ? ((-9223372036854775807LL - 1LL)) : (arr_0 [i_0]))) + (((/* implicit */long long int) ((/* implicit */int) arr_1 [5ULL]))));
        arr_4 [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_1 [i_0])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_0 [i_1]), ((~(9223372036854775807LL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (var_4)))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) (short)-32359))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */long long int) var_5)) : (var_7)))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) max((var_5), (min((((/* implicit */int) arr_5 [i_1] [i_1])), (((((/* implicit */int) var_2)) * (((/* implicit */int) arr_5 [i_1] [13ULL]))))))));
    }
    var_16 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) min((((/* implicit */unsigned char) (signed char)-108)), ((unsigned char)195)))), (max((((/* implicit */long long int) (signed char)-108)), ((-9223372036854775807LL - 1LL)))))) >= (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    /* LoopNest 3 */
    for (unsigned int i_2 = 1; i_2 < 12; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                {
                    arr_17 [(unsigned short)6] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) max(((short)-24722), (((/* implicit */short) (signed char)-51)))))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_6 [9ULL])) ? (arr_10 [i_2 - 1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) : (((((/* implicit */_Bool) 100660095)) ? (((/* implicit */unsigned long long int) var_14)) : (arr_12 [i_2 + 3])))));
                    arr_18 [(short)6] [(short)6] [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) (unsigned short)15201)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)73))) : (17434187673982928793ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) (signed char)102)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) -3421276982837973295LL)) ? (var_14) : (((/* implicit */int) var_2))))) == (max((((/* implicit */long long int) var_0)), (-72057594037927936LL)))));
}
