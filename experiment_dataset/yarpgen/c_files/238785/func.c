/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238785
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
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))), (max((var_3), (((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)49)), (arr_0 [(_Bool)1] [i_0]))))))));
        var_18 = ((/* implicit */unsigned int) var_3);
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) arr_2 [(signed char)17]);
        arr_4 [i_1] = ((/* implicit */unsigned short) arr_3 [i_1]);
    }
    for (long long int i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) var_12)), (var_8))) | (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (26ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11)))))))));
        arr_9 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)236)), (max((((/* implicit */unsigned long long int) (signed char)-59)), (arr_2 [i_2])))))) ? (((((/* implicit */_Bool) ((var_3) << (((arr_6 [i_2]) - (2643796946U)))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)204)), (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) 1220549411U))));
    }
    var_20 = ((/* implicit */int) var_0);
    /* LoopSeq 3 */
    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        var_21 = 0U;
        arr_12 [i_3] [(signed char)15] = ((/* implicit */unsigned long long int) var_16);
    }
    for (long long int i_4 = 1; i_4 < 18; i_4 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) ((max((var_16), (((/* implicit */unsigned int) var_6)))) & (((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_4 + 2])))))));
        arr_16 [i_4] [i_4 - 1] = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (arr_5 [i_4 + 2])))));
    }
    for (long long int i_5 = 1; i_5 < 18; i_5 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (((+(((/* implicit */int) (signed char)-42)))) > (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) var_1)))))))))));
        var_24 |= ((/* implicit */unsigned long long int) max(((+(arr_13 [i_5 + 2] [i_5 + 2]))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_13 [i_5 + 2] [i_5 + 2])))));
        arr_19 [i_5] [i_5] = ((/* implicit */_Bool) var_3);
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 4; i_6 < 18; i_6 += 1) 
        {
            for (unsigned char i_7 = 2; i_7 < 19; i_7 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_8))), (((/* implicit */unsigned long long int) arr_20 [i_7 + 1] [i_7 - 2])))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 855927937774962047ULL)))))))))))));
                    /* LoopSeq 1 */
                    for (signed char i_8 = 1; i_8 < 19; i_8 += 4) 
                    {
                        var_26 *= ((/* implicit */signed char) ((long long int) (signed char)-108));
                        var_27 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_14 [i_5 + 1])), (var_16)))) ? (((/* implicit */int) min((var_13), (var_1)))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_2)), (var_1))))));
                        arr_27 [i_8 + 1] [i_7] [i_5] [i_6] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_7), (var_4))))));
                    }
                    arr_28 [i_5] = max((((/* implicit */unsigned long long int) (signed char)66)), ((+(((unsigned long long int) var_11)))));
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */int) ((((/* implicit */int) arr_22 [i_5 + 1] [i_6 + 2])) > (((/* implicit */int) var_6))))) : (((/* implicit */int) min((((/* implicit */short) var_13)), (var_0))))));
                }
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned long long int) max((var_1), (var_13)));
}
