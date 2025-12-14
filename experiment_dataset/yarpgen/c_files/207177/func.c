/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207177
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
    var_19 = ((/* implicit */unsigned long long int) ((((min((((/* implicit */unsigned long long int) var_13)), (var_8))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) < (((/* implicit */unsigned long long int) var_9))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) var_9);
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0 - 3]) : (arr_1 [i_0])));
    }
    for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */int) ((((unsigned long long int) arr_4 [i_1 - 1] [i_1 + 1])) * (var_8)));
        arr_7 [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32767)) ? (max((18446744073709551606ULL), ((+(var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 14803996822207571314ULL)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
        arr_8 [i_1] [i_1] = ((min((var_9), (((/* implicit */long long int) var_17)))) - (((/* implicit */long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1]))))));
        var_21 *= (short)8191;
        var_22 = ((/* implicit */long long int) ((short) min((14803996822207571293ULL), (14803996822207571314ULL))));
    }
    var_23 = ((/* implicit */unsigned char) var_18);
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) (-(((((/* implicit */int) (signed char)127)) & (((/* implicit */int) arr_10 [i_2]))))));
        arr_13 [i_2] = ((/* implicit */unsigned int) arr_10 [i_2]);
        var_24 += ((/* implicit */unsigned long long int) ((((((_Bool) var_4)) ? (((/* implicit */int) ((1477383740U) < (4142519022U)))) : ((~(((/* implicit */int) (short)4403)))))) * (((/* implicit */int) arr_9 [i_2] [i_2]))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_17 [i_3] &= ((/* implicit */short) (-(((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_3]))) & (var_14))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8189)))))));
        var_25 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)7)) & (((/* implicit */int) arr_14 [i_3] [i_3]))))) & ((-(var_10))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_18))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14232984602248331429ULL)) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) var_18))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3]))) - (var_8)))))));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 1) 
        {
            for (short i_6 = 2; i_6 < 13; i_6 += 4) 
            {
                for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    {
                        arr_28 [i_4] [i_5 + 2] [i_6] [i_7] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_19 [i_4 - 1])))) ? ((-(var_10))) : ((~(18446744073709551615ULL)))));
                        var_26 = ((/* implicit */_Bool) arr_25 [i_7] [i_6] [i_4]);
                        arr_29 [i_6] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((arr_24 [i_5] [i_7]) * (((/* implicit */unsigned long long int) 4142519022U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_21 [i_6] [i_7])), (arr_20 [i_6]))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)248)) < (((/* implicit */int) var_6)))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            var_27 = max((((((/* implicit */long long int) ((/* implicit */int) var_13))) / (var_9))), (((/* implicit */long long int) ((signed char) ((((/* implicit */int) (signed char)64)) - (((/* implicit */int) (signed char)-38)))))));
                            arr_32 [i_4] [i_5] [i_6] [i_7] [i_8] [i_8] = var_8;
                            var_28 ^= (((!(((/* implicit */_Bool) (-(var_9)))))) ? (((((((/* implicit */int) arr_11 [i_8])) + (2147483647))) << (((((((/* implicit */int) arr_11 [i_4])) + (12210))) - (21))))) : (((((((/* implicit */int) (signed char)-125)) + (2147483647))) << (((((((/* implicit */int) (short)-1326)) * (((/* implicit */int) (short)-13988)))) - (18548088))))));
                            arr_33 [i_4] [i_5] [i_6 - 1] [i_7] [i_8] = ((/* implicit */unsigned short) ((max((var_15), (((/* implicit */unsigned long long int) arr_23 [i_4 - 1] [i_5 + 2] [i_8])))) << (((/* implicit */int) arr_14 [i_6 + 1] [i_7]))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 14; i_9 += 4) 
        {
            arr_36 [i_4] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) & (((/* implicit */int) (_Bool)0))))) - (min((var_2), (var_15))))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [i_4 - 1])))))));
            var_29 = ((/* implicit */unsigned short) ((unsigned long long int) min((((/* implicit */int) max((arr_30 [i_4] [i_4] [i_9] [i_9]), ((short)4399)))), ((((_Bool)0) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) arr_15 [i_4])))))));
            arr_37 [i_4] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_10))) * (((/* implicit */int) arr_30 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]))))) - (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)8189)) & (((/* implicit */int) (_Bool)0))))), (((unsigned long long int) var_11))))));
            arr_38 [i_4 - 1] = ((/* implicit */int) ((max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_0 [i_9]))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))))) << (((min((((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-38)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_4] [i_9] [i_9])))))))) - (11768503892924414156ULL)))));
        }
        var_30 = ((/* implicit */short) var_18);
    }
}
