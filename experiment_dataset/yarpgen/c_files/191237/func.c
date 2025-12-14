/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191237
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_8)) ? (var_1) : (var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */long long int) var_3)), (var_4))) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)42))))))) : (min((var_4), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_6)))))))));
    var_15 = ((/* implicit */unsigned short) (unsigned char)255);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_12 [i_3] [i_3] [i_3] [i_2] [i_3] [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) << (((arr_10 [i_4 - 4] [i_4 - 4] [i_4 - 4] [i_4] [i_4 - 2] [(signed char)0]) + (1748276258)))))), (arr_2 [i_1] [i_2])));
                                var_16 -= ((/* implicit */unsigned int) var_13);
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_1] = ((/* implicit */short) (unsigned char)240);
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((_Bool) ((arr_4 [i_5]) / (arr_4 [i_0]))));
                        var_18 = ((/* implicit */short) (((_Bool)1) || ((_Bool)1)));
                    }
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)240)) || (((/* implicit */_Bool) (unsigned char)255))))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-24894)) : (((/* implicit */int) (short)26669)))))) > (((((/* implicit */int) ((((/* implicit */int) arr_11 [i_1] [i_2] [i_7])) > (((/* implicit */int) (unsigned char)15))))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_13)))))))));
                                var_20 = ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-91)), ((unsigned char)1)));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) arr_6 [i_0] [i_0]);
                }
                /* LoopSeq 2 */
                for (unsigned char i_8 = 2; i_8 < 19; i_8 += 1) 
                {
                    var_21 *= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) (short)-26692)) || (((/* implicit */_Bool) var_12))))), (((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (signed char)-1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (min((var_1), (arr_15 [i_0] [i_1] [i_1] [i_0])))));
                    var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (-(arr_9 [i_0] [i_1] [i_8 + 3] [i_1])))), (((unsigned int) var_13))));
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((min((max((14884190775791699816ULL), (((/* implicit */unsigned long long int) (unsigned char)0)))), (((/* implicit */unsigned long long int) arr_15 [i_8] [i_1] [i_1] [i_0])))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)108)), ((unsigned short)13))))) | (min((arr_1 [i_1]), (((/* implicit */unsigned long long int) var_13)))))))))));
                }
                for (unsigned long long int i_9 = 2; i_9 < 21; i_9 += 1) 
                {
                    arr_27 [i_0] [i_1] [i_9] = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_11 [i_0] [i_9] [i_0])))), (((/* implicit */int) ((((/* implicit */int) arr_17 [i_0] [i_9 + 1] [i_9 + 1])) <= (((/* implicit */int) arr_11 [i_0] [i_9] [i_9])))))));
                    var_24 = ((/* implicit */int) min((((/* implicit */unsigned int) var_2)), (min((arr_16 [i_9 - 1] [i_1] [i_9] [i_0] [i_1]), (arr_15 [i_9 + 1] [i_1] [i_9] [i_9])))));
                    arr_28 [i_0] [i_1] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_9 + 1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [18U] [i_1] [i_1]))) - (1073741824U))) : (((unsigned int) arr_17 [i_0] [i_0] [i_0]))));
                    /* LoopSeq 4 */
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        arr_31 [(unsigned char)9] [i_1] [i_1] [i_9] = ((/* implicit */unsigned int) max((min((arr_7 [i_1] [i_9 - 1] [i_9 - 1]), (((/* implicit */int) min(((short)-16937), ((short)26658)))))), (((((/* implicit */_Bool) (unsigned char)168)) ? (arr_7 [3LL] [i_1] [i_9]) : ((+(((/* implicit */int) (short)26680))))))));
                        var_25 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) / (min((arr_30 [i_9 + 1] [i_9] [i_10] [(signed char)8]), (((/* implicit */unsigned long long int) arr_29 [9ULL] [i_1] [i_9 - 2] [i_1] [i_1] [i_0]))))));
                        var_26 *= ((/* implicit */short) arr_29 [i_0] [i_1] [i_9] [i_9] [i_10] [i_0]);
                    }
                    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        var_27 -= ((/* implicit */unsigned long long int) min((min((((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) arr_17 [8U] [8U] [i_0]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                        var_28 -= ((/* implicit */unsigned short) (unsigned char)255);
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_29 += ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) ((signed char) arr_3 [i_0] [(unsigned char)9] [(unsigned short)6]))))));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_9 - 1] [i_1] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (4053901182U)))) || (((/* implicit */_Bool) arr_29 [i_12] [i_1] [i_9 + 1] [i_12] [i_12] [i_1]))))) : (((((/* implicit */int) (short)-11543)) | (((/* implicit */int) (signed char)-9))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        arr_40 [i_0] [i_9] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */unsigned int) (signed char)-92)), (4053901182U))) : (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-11)), ((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)6789)))))))));
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_16 [i_9] [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9 + 1])))) || (((((/* implicit */_Bool) arr_16 [i_9] [i_9 - 1] [i_9 + 1] [i_9 - 2] [i_9 + 1])) || (((/* implicit */_Bool) arr_16 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_9 + 1]))))));
                    }
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_14 = 0; i_14 < 10; i_14 += 1) 
    {
        for (signed char i_15 = 0; i_15 < 10; i_15 += 1) 
        {
            for (unsigned int i_16 = 0; i_16 < 10; i_16 += 4) 
            {
                {
                    arr_51 [i_14] [i_15] [i_16] [i_14] = ((/* implicit */int) 4294967290U);
                    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) arr_15 [i_14] [i_15] [i_14] [i_15]))));
                }
            } 
        } 
    } 
    var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (3221225471U)))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30989)))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) var_13)) : ((-(((/* implicit */int) (short)30834))))))) : (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)116))) : (var_6))) : (((4267234922U) % (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
}
