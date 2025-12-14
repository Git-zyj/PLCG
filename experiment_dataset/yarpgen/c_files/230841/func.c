/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230841
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) var_2))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((766627564) + (((/* implicit */int) (unsigned short)55452)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            var_13 = ((/* implicit */_Bool) ((((/* implicit */int) max((var_7), (((/* implicit */short) (signed char)14))))) & (((/* implicit */int) ((unsigned char) (unsigned char)92)))));
            arr_5 [i_0] [i_1] = ((/* implicit */signed char) (((((-(arr_2 [i_0 - 1]))) + (2147483647))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123))) / (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_2 [i_0])))))) - (1ULL)))));
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_1] [i_4] [i_3] [i_4] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) var_8)) || (((((/* implicit */int) var_9)) != (((/* implicit */int) (unsigned short)14759))))))));
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_9 [i_0] [i_0 + 1] [i_0] [20ULL]))))));
                        }
                    } 
                } 
            } 
        }
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)111)) | (((/* implicit */int) (signed char)-123))))) ? (((/* implicit */int) ((unsigned char) (unsigned short)20374))) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)61)), (arr_0 [(unsigned short)12]))))))) ? (((/* implicit */int) ((unsigned short) ((arr_4 [0] [i_0] [i_0 + 1]) | (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_15 [i_5] [i_0])), (arr_17 [i_0] [i_5] [10ULL] [i_7]))) == (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (1191593796))))))) : ((~(((((/* implicit */int) var_0)) | (((/* implicit */int) arr_15 [i_6] [i_6]))))))));
                        arr_20 [i_0] [i_0] [i_6] [i_0] = ((/* implicit */int) min(((short)15424), (((/* implicit */short) (unsigned char)115))));
                        var_16 = ((/* implicit */short) ((unsigned long long int) ((_Bool) max((((/* implicit */unsigned long long int) arr_11 [i_7] [i_6] [i_5] [i_0] [i_0])), (14903030642576275796ULL)))));
                        arr_21 [i_7] [i_5] [i_7] |= ((((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : (((16884256465785187977ULL) >> (((((/* implicit */int) var_9)) - (31423))))))) != (((unsigned long long int) (signed char)-62)));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_26 [i_8] = ((/* implicit */unsigned char) var_1);
        arr_27 [i_8] = ((/* implicit */unsigned long long int) ((short) (unsigned short)20376));
    }
    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 1) 
    {
        arr_31 [i_9] = ((unsigned char) ((((/* implicit */int) arr_28 [i_9])) ^ (((/* implicit */int) (unsigned short)60228))));
        arr_32 [i_9] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)20376))));
        var_17 *= ((/* implicit */unsigned char) 9226944434235224149ULL);
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((((((/* implicit */_Bool) arr_23 [i_9])) ? (16884256465785187983ULL) : (((/* implicit */unsigned long long int) var_2)))) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)54997)) ? (((/* implicit */int) arr_15 [i_9] [i_9])) : (arr_4 [i_9] [i_9] [i_9])))))) : (((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((((/* implicit */_Bool) 1191593800)) ? (arr_6 [i_9]) : (((/* implicit */unsigned long long int) var_2)))) : (max((((/* implicit */unsigned long long int) -821274060)), (arr_29 [i_9]))))))))));
    }
}
