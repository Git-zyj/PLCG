/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213277
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)43721)) & (((/* implicit */int) (short)9141))))) ? (((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned short) var_16))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)29127)))))) : ((-(var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_11), (var_18)))) + ((~(((/* implicit */int) var_7)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)255))));
        arr_4 [i_0] = (((-(((/* implicit */int) arr_1 [i_0])))) ^ (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)58232))))));
        arr_5 [i_0] [(short)4] = ((/* implicit */long long int) (((-(((/* implicit */int) arr_1 [(unsigned short)5])))) | (((arr_0 [i_0]) + (arr_2 [i_0])))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) arr_9 [i_1])))))))));
        var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_9 [(unsigned char)7]), (((/* implicit */unsigned short) arr_1 [i_1]))))), (max((arr_2 [i_1]), (arr_2 [i_1])))))), (min((((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_7 [i_1]) : (arr_7 [i_1]))), (((/* implicit */unsigned long long int) arr_9 [(short)11]))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((-9083992865874647999LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15872))))))))));
        arr_13 [i_2] = ((/* implicit */short) max(((((+(((/* implicit */int) arr_11 [i_2] [i_2])))) + (((((/* implicit */_Bool) (short)-9142)) ? (((/* implicit */int) (unsigned short)49655)) : (((/* implicit */int) (unsigned char)58)))))), (((((arr_12 [i_2] [i_2]) ? (arr_10 [i_2] [i_2]) : (((/* implicit */int) arr_12 [i_2] [i_2])))) + (((arr_12 [i_2] [i_2]) ? (((/* implicit */int) arr_12 [i_2] [i_2])) : (((/* implicit */int) arr_11 [i_2] [i_2]))))))));
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
        {
            arr_18 [i_3] [i_2] [i_3] |= ((/* implicit */short) (!((!(((/* implicit */_Bool) max((((/* implicit */int) arr_16 [i_3])), (arr_10 [i_2] [i_3]))))))));
            var_24 = ((/* implicit */unsigned long long int) (-(min((((((/* implicit */_Bool) arr_15 [i_2] [i_2])) ? (arr_10 [i_2] [i_2]) : (((/* implicit */int) arr_11 [i_2] [i_3])))), (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)65535))))))));
        }
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                arr_27 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-9163)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)1))));
                var_25 += ((/* implicit */unsigned char) arr_21 [i_2]);
                arr_28 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)49521)) ? (((/* implicit */int) arr_14 [i_5] [16] [i_2])) : (((/* implicit */int) (short)-15039)))) << (((/* implicit */int) (!(arr_23 [i_2] [i_2] [i_5]))))));
            }
            /* vectorizable */
            for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    for (unsigned char i_8 = 2; i_8 < 14; i_8 += 1) 
                    {
                        {
                            arr_36 [i_2] [i_4] [i_6] [i_7] [i_7] |= ((((/* implicit */_Bool) ((arr_22 [i_8] [i_6]) | (((/* implicit */int) arr_35 [i_2] [i_2] [i_2] [(unsigned char)0] [i_7] [i_2] [i_8 + 1]))))) ? (((((/* implicit */int) arr_31 [i_6] [i_4] [i_6] [i_4] [i_2])) & (((/* implicit */int) arr_15 [i_2] [i_4])))) : ((+(((/* implicit */int) arr_33 [i_2] [i_4] [i_6] [i_7] [i_8] [i_6] [i_6])))));
                            var_26 += ((/* implicit */signed char) (-((~(arr_30 [(short)2] [(short)2] [i_7])))));
                        }
                    } 
                } 
                var_27 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_14 [i_2] [i_4] [i_2])) ? (((/* implicit */int) arr_11 [i_2] [i_4])) : (((/* implicit */int) arr_17 [i_2] [i_4])))) + (((arr_10 [i_6] [i_2]) + (arr_29 [i_2] [i_6] [(short)7] [i_2])))));
                arr_37 [i_2] [i_2] [(short)6] [i_6] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_12 [i_6] [i_4]))))));
            }
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)42907)) == (((/* implicit */int) (unsigned char)98))));
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_4] [i_2] [i_2] [i_2])) ? ((+(((/* implicit */int) arr_31 [i_2] [i_2] [i_4] [i_2] [i_4])))) : (((/* implicit */int) min((min(((unsigned short)21), ((unsigned short)15875))), ((unsigned short)14934))))));
            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (+((~((-(((/* implicit */int) arr_23 [i_4] [i_2] [i_2])))))))))));
            arr_38 [i_4] [i_4] [(signed char)0] |= ((/* implicit */unsigned char) ((((/* implicit */int) (short)-24858)) ^ (344999574)));
        }
    }
    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
    {
        arr_42 [i_9] = ((((-344999569) == (((/* implicit */int) (unsigned short)56698)))) ? (min((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)0)))), (((arr_10 [i_9] [i_9]) + (((/* implicit */int) arr_15 [i_9] [i_9])))))) : (((/* implicit */int) arr_31 [i_9] [i_9] [i_9] [i_9] [(short)1])));
        var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)56698)), (344999571))))));
    }
}
