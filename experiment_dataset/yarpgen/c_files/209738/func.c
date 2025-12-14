/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209738
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
    var_14 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) var_5)))), ((~(((/* implicit */int) ((unsigned char) (_Bool)1)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
                    {
                        arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) var_7);
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) (unsigned short)65513))))));
                    }
                    for (short i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((((int) (_Bool)1)) | (((/* implicit */int) (unsigned char)73))));
                        arr_14 [i_0] [i_0] [i_2] [4U] [4U] [i_1] = ((/* implicit */short) ((unsigned char) ((17339272973701109666ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)93))))));
                    }
                    arr_15 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 + 3] [i_2 - 1])) ? (((/* implicit */int) arr_6 [i_2 - 2] [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) arr_6 [i_2 + 3] [i_2 + 2] [i_2 - 1]))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_5 = 3; i_5 < 9; i_5 += 3) 
    {
        for (short i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    arr_24 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)36645)) ? (((/* implicit */unsigned long long int) 1336183576U)) : ((((_Bool)1) ? (1107471100008441936ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21474)))))));
                    var_18 = ((/* implicit */unsigned short) (unsigned char)249);
                    var_19 = ((/* implicit */long long int) (+(((((/* implicit */int) arr_6 [12LL] [12LL] [i_7])) | (((/* implicit */int) arr_2 [i_5] [i_5 - 1]))))));
                    arr_25 [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_6] [i_5])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))) | (((var_8) - (((/* implicit */long long int) 31))))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) / (arr_10 [i_5 - 3])));
                }
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    var_21 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_9)) >> (((var_1) - (1856381696U))))) >> (((var_10) - (670938504U)))))) / (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)151))) * (3645799102U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5 - 3] [i_5 + 2] [i_5 - 1]))) : (((arr_12 [14LL] [(unsigned short)2] [i_6] [i_5 + 1] [i_5]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                    var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)163))) / (arr_1 [i_5 - 2] [i_5 + 2])))) ? (((((/* implicit */_Bool) 4850448859458705233LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_1 [i_5 - 1] [i_5 - 1]))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)243)) ^ (((/* implicit */int) var_9)))))));
                    var_23 -= ((/* implicit */unsigned short) (+(var_1)));
                }
                for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    arr_32 [i_6] [i_6] [i_6] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((arr_3 [i_9]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))), ((-(((/* implicit */int) (signed char)-39))))))) ? (((((/* implicit */int) arr_26 [i_5 + 3])) - (((/* implicit */int) arr_26 [i_5 + 2])))) : (-664597429)));
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        for (short i_11 = 2; i_11 < 10; i_11 += 3) 
                        {
                            {
                                var_24 += ((/* implicit */unsigned char) var_11);
                                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((max((14113693485531634791ULL), (((/* implicit */unsigned long long int) arr_21 [i_5] [i_5] [i_5])))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_10] [8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))))) | (((((/* implicit */long long int) 4122078151U)) / (arr_9 [i_11] [i_9] [i_5] [i_5]))))))));
                                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_11]))) | (max((arr_36 [i_5 - 3] [i_9] [i_9] [i_10] [i_9] [i_5 - 1]), (((/* implicit */long long int) ((unsigned short) 17329268911994967922ULL)))))));
                                arr_40 [3ULL] [i_6] [3ULL] [i_6] [(signed char)11] [(signed char)5] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [(signed char)4] [(signed char)4] [(_Bool)1])) | (((/* implicit */int) (unsigned char)219))))) ^ (((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118))))))) | ((+(((arr_5 [11LL] [11LL] [i_11]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_1)))))));
                                var_27 = (unsigned short)65510;
                            }
                        } 
                    } 
                }
                for (int i_12 = 1; i_12 < 11; i_12 += 4) 
                {
                    var_28 = ((/* implicit */unsigned short) arr_43 [i_5]);
                    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) 1819799187))));
                }
                var_30 -= ((/* implicit */unsigned long long int) arr_21 [i_5] [i_5] [i_5 + 2]);
                var_31 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) (_Bool)1))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (2958783720U))))));
            }
        } 
    } 
}
