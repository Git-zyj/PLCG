/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249180
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) 2229259230U);
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0]))) ? (((/* implicit */unsigned long long int) (+(2229259230U)))) : (0ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)118)) + (((/* implicit */int) (signed char)-119)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        var_20 *= (-(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) < (arr_3 [i_1] [i_1]))))) - (((var_13) >> (((arr_6 [i_1]) + (1534143217))))))));
        var_21 = ((/* implicit */short) max((((((/* implicit */int) ((unsigned char) arr_3 [i_1] [5U]))) & (((arr_6 [i_1]) + (((/* implicit */int) arr_7 [i_1])))))), (((/* implicit */int) arr_2 [i_1]))));
        var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_0)), (((1ULL) | (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))));
        var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_1])), (((((/* implicit */_Bool) arr_0 [i_1])) ? (max((arr_3 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_6 [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551612ULL))))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        var_24 *= ((/* implicit */unsigned int) ((((arr_3 [i_2] [i_2]) / (arr_3 [i_2] [i_2]))) * (((/* implicit */unsigned long long int) arr_0 [i_2]))));
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -2281388174664316683LL)) ^ (18446744073709551596ULL)));
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) arr_18 [i_2] [i_4] [i_2] [i_2]))));
                        arr_20 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5] [i_2]))) / (var_2)));
                        /* LoopSeq 4 */
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_5] [i_5] = ((/* implicit */unsigned int) 18446744073709551614ULL);
                            var_27 = ((((/* implicit */int) arr_14 [i_2] [i_3])) & (((/* implicit */int) arr_5 [i_3])));
                        }
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)51)) ? (((long long int) 10629212273691071280ULL)) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4])))));
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_7] [i_5] [i_4] [i_3] [i_3] [i_3] [i_2])) ? ((-(arr_22 [14LL] [i_2]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_27 [i_2] [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) var_4)))))));
                            var_30 = ((/* implicit */long long int) (+(((/* implicit */int) arr_10 [(unsigned short)0] [i_2]))));
                        }
                        for (unsigned short i_8 = 2; i_8 < 15; i_8 += 1) /* same iter space */
                        {
                            var_31 -= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (unsigned char)144)) <= (((/* implicit */int) arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [(signed char)4])))));
                            var_32 -= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)19213)) / (((/* implicit */int) (_Bool)1))));
                            arr_32 [i_2] [i_5] [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [(_Bool)1] [i_8 - 2] [i_8] [i_8 - 2] [i_8 - 2]))) / ((-(var_10)))));
                        }
                        for (unsigned short i_9 = 2; i_9 < 15; i_9 += 1) /* same iter space */
                        {
                            arr_36 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10629212273691071299ULL)) || (((/* implicit */_Bool) 15629290887662311016ULL))));
                            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) & (17104768286258314059ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_34 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 2229259208U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)159)) < (((/* implicit */int) var_1)))))) : (6293633217569090498ULL)));
}
