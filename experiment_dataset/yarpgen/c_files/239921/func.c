/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239921
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) (+(max((min((var_11), (((/* implicit */long long int) arr_11 [i_0] [i_1] [i_0] [i_2] [i_3])))), (((/* implicit */long long int) var_8))))));
                            arr_12 [i_0] [i_2] [i_1] [i_0] = ((arr_6 [i_1 + 2] [i_1 - 1]) * (min((arr_6 [i_1 + 2] [i_1 + 2]), (arr_6 [i_1 + 1] [i_1 + 1]))));
                            var_14 = ((/* implicit */unsigned long long int) (((_Bool)0) || (((/* implicit */_Bool) (signed char)87))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (int i_6 = 4; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-((+(272641766U)))))) ^ (((long long int) arr_8 [i_0] [i_0]))));
                                var_16 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((_Bool) 542831009620914917ULL)))))));
                                arr_23 [i_6] [i_6] [i_0] = ((/* implicit */_Bool) ((unsigned int) max(((short)-1), (((/* implicit */short) arr_2 [i_0])))));
                            }
                        } 
                    } 
                    arr_24 [i_0] [i_4] = ((/* implicit */unsigned long long int) (-(((((((/* implicit */_Bool) arr_17 [i_4] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_6 [i_0] [i_1]))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [i_0] [i_1 + 2] [i_0] [i_0])))))))));
                    arr_25 [i_0] = arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((max(((-(((/* implicit */int) arr_3 [10U])))), (((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) (unsigned short)57655)))))) - (((/* implicit */int) var_1)))))));
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) arr_2 [(short)2])) < (((/* implicit */int) arr_11 [i_0] [i_0] [(signed char)4] [i_0] [(signed char)6]))))), (((long long int) arr_5 [i_1 + 2] [i_1 + 2])))))));
                }
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(max((((/* implicit */unsigned int) arr_14 [(signed char)8])), (arr_20 [i_0] [i_1] [i_1 - 1] [i_1]))))))));
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    arr_28 [i_0] [i_0] [i_0] = max(((+(17903913064088636698ULL))), (((/* implicit */unsigned long long int) ((signed char) (unsigned short)21))));
                    arr_29 [(signed char)6] [(unsigned short)4] [i_0] |= min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_18 [i_0] [i_0] [i_7] [i_0])), (((((/* implicit */_Bool) -6937320425526125773LL)) ? (((/* implicit */int) (short)-26084)) : (((/* implicit */int) (short)26585))))))), (max((((/* implicit */unsigned long long int) arr_9 [i_1 + 2] [i_1 + 1])), (17291683055480345777ULL))));
                    var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (-(-1775686908)))) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_1 + 1] [i_0] [i_7] [i_7])))))))));
                    var_21 *= ((/* implicit */unsigned int) ((unsigned char) 17903913064088636698ULL));
                    arr_30 [i_0] [i_1] [i_0] [i_7] = ((/* implicit */_Bool) max((((/* implicit */int) arr_5 [i_1] [i_1])), ((+(((/* implicit */int) (unsigned char)253))))));
                }
                arr_31 [i_0] = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) (signed char)-84)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_8 = 1; i_8 < 17; i_8 += 1) 
    {
        for (int i_9 = 0; i_9 < 19; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 19; i_10 += 1) 
            {
                {
                    var_22 |= ((/* implicit */unsigned int) ((unsigned char) ((signed char) ((int) arr_32 [i_9]))));
                    /* LoopSeq 1 */
                    for (signed char i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        arr_43 [i_9] [i_11] = ((/* implicit */unsigned char) (+(((arr_34 [i_8 + 1]) ? (((/* implicit */int) arr_34 [i_8 - 1])) : (((/* implicit */int) arr_34 [i_8 + 2]))))));
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 19; i_12 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_42 [i_9]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_37 [i_10] [i_10])) : (((/* implicit */int) arr_32 [i_8 + 2])))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-8193))))) ? (arr_41 [i_8 + 1] [i_12] [i_8] [i_9] [i_12] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26077))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_9] [i_10] [i_12] [i_11] [i_9])))));
                            arr_46 [i_9] [i_9] [i_10] [i_9] [i_9] = ((/* implicit */short) arr_34 [i_10]);
                            var_24 -= ((/* implicit */int) arr_34 [i_11]);
                        }
                        /* LoopSeq 1 */
                        for (int i_13 = 1; i_13 < 18; i_13 += 1) 
                        {
                            arr_49 [i_8] [i_9] [i_10] [i_11] [i_9] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (+(arr_41 [i_13 - 1] [i_11] [i_9] [i_9] [i_9] [i_8])))) ? (((/* implicit */int) arr_34 [i_8 + 2])) : (((/* implicit */int) arr_34 [i_13 + 1])))));
                            var_25 = (~((+(((/* implicit */int) arr_44 [i_9] [i_9] [i_9] [i_9] [i_9])))));
                        }
                    }
                    /* LoopSeq 1 */
                    for (signed char i_14 = 1; i_14 < 18; i_14 += 1) 
                    {
                        arr_54 [i_9] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_48 [i_8] [i_8])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_9] [i_9] [i_9] [i_9] [(unsigned short)7]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (arr_38 [i_9]) : (var_12))))))) ? (arr_52 [i_9] [i_9] [i_10] [i_14] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_4), (((/* implicit */short) arr_40 [i_8] [10] [i_9])))))));
                        arr_55 [i_14 - 1] [i_9] [i_9] [i_8] = ((/* implicit */signed char) var_11);
                        var_26 *= ((/* implicit */unsigned int) max((((signed char) (~(arr_42 [(unsigned short)14])))), (((/* implicit */signed char) ((((/* implicit */int) arr_51 [i_8 + 1] [i_14 - 1] [i_14 - 1] [i_14])) <= (((/* implicit */int) arr_51 [i_8] [i_14 - 1] [i_14 - 1] [i_14])))))));
                    }
                }
            } 
        } 
    } 
    var_27 = var_2;
    var_28 = ((/* implicit */signed char) max((((unsigned char) 4220043431U)), (((/* implicit */unsigned char) (signed char)-78))));
}
