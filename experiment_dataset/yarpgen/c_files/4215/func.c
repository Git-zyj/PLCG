/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4215
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 7; i_4 += 1) 
                        {
                            {
                                arr_12 [(unsigned char)8] [(unsigned char)10] [i_2] [i_1] [i_0] [(unsigned char)8] &= ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))));
                                arr_13 [i_4 + 1] [i_0] [(short)0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 1778816540076223546ULL)) ? (((/* implicit */int) (short)-18029)) : (((/* implicit */int) (unsigned short)14)))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))) > (((unsigned int) (unsigned char)22))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [(unsigned short)8] = ((/* implicit */short) 3239019247U);
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)6475)) : (((/* implicit */int) (unsigned char)82))))), (min((((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_4 [i_0])))));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 4; i_5 < 9; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            {
                                arr_27 [i_0] [i_7] [i_0] [(short)4] [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0]))) > (min((3239019249U), (((/* implicit */unsigned int) arr_24 [i_5 - 3] [2U] [i_5] [i_5]))))));
                                arr_28 [i_0] [i_6] [i_5] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)7);
                            }
                        } 
                    } 
                    arr_29 [i_5] |= ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_25 [i_5 + 2] [i_5] [i_5] [i_5 - 1] [i_5])) << (((((/* implicit */int) (unsigned short)65535)) - (65518)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            {
                                arr_37 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */short) min((((/* implicit */unsigned char) var_11)), (arr_24 [i_5 - 4] [i_5] [i_5 - 4] [i_5])))), (min((arr_21 [i_5 - 1] [i_5] [i_5 - 3] [(short)1]), (((/* implicit */short) arr_24 [i_5 - 2] [i_5] [i_5 - 3] [i_5]))))));
                                arr_38 [i_10] [i_5] [i_5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 262143U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_5] [i_5 - 1])) & (((/* implicit */int) var_13))))) : (var_1)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_11 = 3; i_11 < 10; i_11 += 2) 
                    {
                        for (int i_12 = 0; i_12 < 11; i_12 += 3) 
                        {
                            {
                                arr_45 [i_0] [i_0] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_21 [i_11 - 2] [i_6] [i_5 + 2] [i_5 + 2])) != (((/* implicit */int) var_13)))), (((((/* implicit */int) arr_21 [i_11 - 2] [i_6] [i_5 + 2] [i_5 - 4])) != (((/* implicit */int) var_3))))));
                                arr_46 [i_0] [i_5] [i_6] [i_12] = ((/* implicit */unsigned int) var_6);
                                arr_47 [i_0] = ((((/* implicit */_Bool) ((signed char) (unsigned short)27))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_5 - 4] [i_5 - 1] [i_5 - 3] [i_11 + 1])) | (var_7)))) : (((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65528)) - (((/* implicit */int) (short)-32753))))) / ((~(3239019252U))))));
                            }
                        } 
                    } 
                    arr_48 [i_5 - 4] [i_5 - 3] [i_5] [i_0] = ((/* implicit */int) (~(min((((((/* implicit */_Bool) -823576738)) ? (1055948046U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_30 [i_6] [i_5 - 1])) : (((/* implicit */int) (unsigned char)114)))))))));
                }
            } 
        } 
        arr_49 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0])) * (((/* implicit */int) arr_7 [(_Bool)1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0])) - (((/* implicit */int) arr_44 [i_0] [i_0] [(short)8] [(short)8] [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -5935599643903947380LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -1773280289))))) ? (((/* implicit */unsigned long long int) ((int) 1773280292))) : (min((((/* implicit */unsigned long long int) (unsigned char)46)), (25ULL)))))));
        arr_50 [i_0] [i_0] = ((/* implicit */unsigned char) (short)-32747);
    }
    for (int i_13 = 0; i_13 < 25; i_13 += 3) 
    {
        arr_54 [i_13] = ((/* implicit */unsigned char) ((int) min((((((/* implicit */_Bool) 1080100066)) ? (1055948046U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32749))) : (3239019241U))))));
        arr_55 [i_13] = ((/* implicit */unsigned char) ((min((1773280289), (((/* implicit */int) (unsigned short)50403)))) % (((/* implicit */int) ((unsigned char) arr_52 [i_13])))));
        arr_56 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned char)32)) && (((/* implicit */_Bool) var_11))))))) + (-1773280294)));
        arr_57 [i_13] = ((/* implicit */short) min((((((/* implicit */_Bool) (~(arr_51 [i_13])))) ? (((((/* implicit */_Bool) -6740153726170276732LL)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (unsigned char)251)))) : ((~(((/* implicit */int) (unsigned char)220)))))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_51 [i_13])) ? (var_7) : (((/* implicit */int) var_11)))) == (((/* implicit */int) ((((/* implicit */unsigned int) arr_52 [i_13])) != (3239019249U)))))))));
    }
    var_14 = ((((/* implicit */int) min(((unsigned char)221), (var_4)))) * (min((((/* implicit */int) ((short) var_9))), ((~(((/* implicit */int) var_13)))))));
}
