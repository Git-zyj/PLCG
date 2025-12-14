/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48197
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [(unsigned char)3])))), (arr_0 [i_0])));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
            var_18 ^= ((/* implicit */unsigned int) ((unsigned char) min((1067906676U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_6))))))));
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((_Bool) arr_1 [i_0] [i_1]));
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    for (unsigned short i_4 = 1; i_4 < 17; i_4 += 1) 
                    {
                        {
                            arr_16 [i_1] [i_1] = ((/* implicit */short) ((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_3] [i_4]))))), (arr_5 [i_4 - 1] [i_4 - 1] [i_4 - 1]))) > (((((((/* implicit */_Bool) arr_11 [4] [4] [i_3] [i_0] [7] [10U])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_5 [i_0] [14U] [6LL]))) & (((/* implicit */unsigned int) ((/* implicit */int) min((arr_8 [i_0] [i_4] [i_2] [i_1]), (((/* implicit */unsigned short) arr_4 [i_0] [7]))))))))));
                            arr_17 [i_1] [(unsigned char)17] [(unsigned char)17] [i_1] [i_1] = ((/* implicit */unsigned int) arr_10 [i_2] [(unsigned char)5] [17LL] [i_2] [i_1] [i_2]);
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)20)) ? (arr_12 [12U] [i_1] [i_4 - 1]) : (arr_12 [i_4] [i_1] [i_4 + 1])))) ? (max((((/* implicit */unsigned long long int) arr_14 [i_4] [i_4] [i_1] [i_4 + 1] [i_4 + 1] [i_4] [(short)8])), (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_3] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_16))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (arr_0 [i_1]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)82)))))));
                            arr_18 [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((((((/* implicit */_Bool) 1964461840U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))) + (2147483647))) >> (((min((((/* implicit */unsigned int) arr_12 [i_1] [i_1] [i_4 + 1])), (arr_1 [i_0] [i_0]))) - (1402715350U)))))), (min((((/* implicit */unsigned int) arr_9 [i_4 - 1] [i_4] [i_4])), (max((((/* implicit */unsigned int) var_6)), (var_15)))))))) : (((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((((((/* implicit */_Bool) 1964461840U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))) + (2147483647))) >> (((((min((((/* implicit */unsigned int) arr_12 [i_1] [i_1] [i_4 + 1])), (arr_1 [i_0] [i_0]))) - (1402715350U))) - (19372547U)))))), (min((((/* implicit */unsigned int) arr_9 [i_4 - 1] [i_4] [i_4])), (max((((/* implicit */unsigned int) var_6)), (var_15))))))));
                        }
                    } 
                } 
            } 
            arr_19 [i_1] [8U] = ((/* implicit */int) (unsigned char)90);
        }
        var_20 ^= ((((/* implicit */_Bool) max((max((((/* implicit */int) (unsigned char)238)), (arr_12 [i_0] [i_0] [i_0]))), (((/* implicit */int) ((var_10) <= (3227060622U))))))) ? (min(((~(var_16))), (((/* implicit */unsigned long long int) min((arr_9 [i_0] [i_0] [i_0]), (((/* implicit */int) var_13))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) >> (min((((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [(unsigned char)8] [(unsigned char)8] [i_0] [(unsigned char)2])), (arr_13 [i_0])))))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                {
                    arr_27 [i_0] [i_5] [i_6] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_5]))))), (((arr_0 [i_5]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47366)))))));
                    arr_28 [i_5] [i_5] [(unsigned char)11] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_23 [i_0] [i_5] [i_6])))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_6]))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 2; i_7 < 16; i_7 += 1) 
                    {
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min((((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_23 [(unsigned char)12] [i_5] [i_6]) : (((/* implicit */long long int) arr_5 [i_0] [i_0] [7]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [(unsigned char)5] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) min((var_9), (((/* implicit */unsigned char) arr_20 [i_0])))))))))))));
                        arr_32 [i_0] [i_0] [i_5] = arr_22 [i_5];
                        var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_22 [i_5])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) >= (var_3)))) : (((/* implicit */int) arr_31 [i_0] [i_5] [i_6] [i_7])))) + (max((((/* implicit */int) arr_8 [i_5] [i_6] [i_5] [i_5])), (((((/* implicit */_Bool) arr_26 [i_0] [i_5] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-35))))))));
                    }
                }
            } 
        } 
    }
    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
    {
        arr_36 [i_8] [10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) min(((unsigned short)27973), (((/* implicit */unsigned short) arr_15 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))))))));
        arr_37 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */int) arr_22 [i_8])) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_30 [14LL] [i_8] [i_8] [i_8])), (arr_22 [i_8]))))));
    }
    var_23 &= ((/* implicit */_Bool) var_14);
}
