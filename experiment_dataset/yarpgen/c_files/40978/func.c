/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40978
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
    for (short i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (long long int i_3 = 3; i_3 < 14; i_3 += 3) 
                {
                    {
                        arr_9 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) (unsigned char)100);
                        var_17 = ((/* implicit */unsigned short) arr_6 [(_Bool)1] [i_1] [i_2]);
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) max(((unsigned short)21447), (((/* implicit */unsigned short) (short)-22859))))) ? (((/* implicit */int) max((arr_2 [i_1] [i_0] [i_3]), (((/* implicit */unsigned short) arr_3 [i_1] [i_3 - 3]))))) : (((/* implicit */int) arr_2 [i_3] [i_2] [i_0 - 3])))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((long long int) ((var_14) ? (((((/* implicit */int) var_2)) << (((((/* implicit */int) (signed char)49)) - (24))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (var_0))))))))));
    }
    for (unsigned char i_4 = 1; i_4 < 17; i_4 += 1) 
    {
        arr_12 [i_4] [i_4 - 1] = ((/* implicit */unsigned long long int) (!(((max((var_1), (((/* implicit */unsigned int) var_14)))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [2LL] [i_4] [i_4] [(_Bool)0])))))));
        var_20 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_4]))))) ? ((+(1883385291833291142ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) var_3))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_16 [i_5] = ((/* implicit */signed char) arr_0 [8ULL]);
        /* LoopNest 3 */
        for (signed char i_6 = 2; i_6 < 13; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                for (unsigned long long int i_8 = 3; i_8 < 11; i_8 += 1) 
                {
                    {
                        arr_25 [i_5] [i_6] [i_5] [i_8] = ((/* implicit */_Bool) max((((/* implicit */int) max((var_9), (var_16)))), (max((((int) var_13)), (((/* implicit */int) min((arr_13 [i_7] [i_7]), (var_14))))))));
                        arr_26 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_3 [i_8] [i_6 - 2])) ? (arr_5 [i_8] [i_8 + 2] [i_8 + 3] [i_6 - 1]) : (arr_5 [i_8] [i_8 - 3] [i_6 - 1] [i_6 - 2])))));
                        arr_27 [i_5] [i_5] [i_5] [i_7] [i_8] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_2 [i_8 - 1] [i_5] [i_6 - 2]))))));
                        arr_28 [i_8] [i_5] [i_5] = ((/* implicit */int) max((((arr_14 [i_5]) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((var_5) ? (arr_0 [(signed char)5]) : (((/* implicit */long long int) arr_23 [i_5])))))), (((/* implicit */long long int) max((var_0), (max((((/* implicit */unsigned short) var_7)), ((unsigned short)65529))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 14; i_9 += 4) 
        {
            for (short i_10 = 1; i_10 < 13; i_10 += 4) 
            {
                {
                    arr_34 [i_5] [(unsigned char)4] [(unsigned char)4] [i_5] = ((/* implicit */long long int) arr_22 [i_5] [i_10 - 1]);
                    arr_35 [i_5] [i_5] [i_5] = ((/* implicit */short) ((unsigned char) arr_19 [i_5] [i_9] [i_10]));
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 1; i_11 < 13; i_11 += 4) /* same iter space */
                    {
                        arr_39 [i_5] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_33 [i_10] [i_9] [i_5]))))), (arr_37 [i_5] [i_10] [i_9] [i_5])))) < (((var_7) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_11 - 1] [i_10 - 1] [i_5]))) : (var_6)))));
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)21469))))))))));
                        arr_40 [i_5] [i_9] [i_10] [(short)0] |= ((/* implicit */unsigned char) var_9);
                    }
                    for (unsigned short i_12 = 1; i_12 < 13; i_12 += 4) /* same iter space */
                    {
                        var_22 = ((unsigned int) max((max((((/* implicit */long long int) arr_18 [i_5])), (arr_21 [i_9] [i_5] [i_5]))), (((/* implicit */long long int) ((arr_10 [i_10]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_5] [i_10]))))))));
                        arr_43 [i_5] [i_5] [i_9] [i_10] [i_12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((+(((/* implicit */int) arr_14 [i_5])))) >> ((((+(var_1))) - (3490170113U))))))));
                        arr_44 [i_5] [i_5] [i_5] [i_12] = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) arr_8 [i_5] [i_9] [i_10] [i_5])), (((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_5]))) - (var_6))))), (((/* implicit */long long int) max((var_7), ((_Bool)1))))));
                        var_23 = ((/* implicit */long long int) (~(((/* implicit */int) var_0))));
                        arr_45 [i_10] [i_5] [i_9] [i_9] [i_5] [(unsigned short)5] = ((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_10 - 1] [i_12 - 1] [i_12 - 1])) | (((/* implicit */int) arr_6 [i_10 + 1] [i_12 + 1] [i_12 + 1]))))) <= (((1927037770987287001LL) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_10 + 1] [i_12 - 1] [i_12 - 1]))))));
                    }
                }
            } 
        } 
    }
    var_24 = ((/* implicit */long long int) (-(((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (long long int i_13 = 1; i_13 < 21; i_13 += 3) 
    {
        for (unsigned char i_14 = 0; i_14 < 22; i_14 += 3) 
        {
            {
                var_25 *= (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (var_1)))));
                arr_51 [i_14] [i_13] [i_14] = ((/* implicit */unsigned int) arr_49 [7ULL] [i_14] [i_14]);
            }
        } 
    } 
}
