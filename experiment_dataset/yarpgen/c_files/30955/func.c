/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30955
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
    var_11 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)43)) != (((/* implicit */int) (unsigned char)195))))) == (((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) (unsigned short)19095))))));
        var_13 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) (unsigned short)8835))))) != (((/* implicit */int) arr_2 [(unsigned short)16] [(unsigned short)16]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [11ULL])) && (((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) var_8))))))))));
        var_15 *= ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [(signed char)18]))));
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (-4678785737195121159LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-11266)))))) ? (((/* implicit */int) (unsigned short)19095)) : (((/* implicit */int) (short)-32439)));
    }
    /* LoopNest 3 */
    for (short i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    var_16 = ((/* implicit */_Bool) (-(1024239358)));
                    arr_11 [i_1] [i_2 - 1] = ((/* implicit */int) (unsigned short)41909);
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) - (18446744073709551615ULL))))));
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((((/* implicit */_Bool) 9223372036854775803LL)) ? (((long long int) (unsigned short)65527)) : (7158641686710780986LL))) != (((/* implicit */long long int) ((((/* implicit */_Bool) ((1746855091) | (((/* implicit */int) (unsigned char)250))))) ? (((/* implicit */int) ((var_7) == (arr_8 [(signed char)15] [(signed char)15])))) : (((/* implicit */int) arr_7 [i_2 - 1] [5ULL]))))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)11266)) + (((/* implicit */int) (unsigned char)90))));
}
