/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244996
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_10 = ((/* implicit */short) (unsigned char)31);
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            var_11 ^= ((/* implicit */unsigned char) var_2);
            var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) (signed char)116))) * (arr_3 [i_1 - 2] [i_1] [i_1]))))));
        }
        for (int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            arr_8 [i_0] = ((/* implicit */unsigned long long int) ((int) arr_5 [i_2] [i_0]));
            var_13 *= ((/* implicit */unsigned char) arr_3 [i_2] [i_2] [i_2]);
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)192))) ? (2043168483278017453LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)181)))));
                arr_11 [i_0] &= ((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_0]);
                var_15 = ((var_4) | (((/* implicit */int) (unsigned char)157)));
            }
            arr_12 [i_0] [i_0] [i_2] &= ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)75)) ^ (((/* implicit */int) (signed char)73))))) ^ (arr_6 [i_2]));
            arr_13 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) * (2027332651910388267ULL)));
        }
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            arr_17 [i_0] [2ULL] &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)98)) <= (var_5)));
            arr_18 [i_0] [i_4] = ((/* implicit */unsigned int) 5711538722384165567ULL);
        }
    }
    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) var_0);
        arr_23 [i_5] = ((((/* implicit */_Bool) (~(max((arr_15 [(unsigned char)7] [i_5]), (((/* implicit */long long int) (unsigned char)194))))))) ? (((int) arr_1 [i_5] [i_5])) : (((/* implicit */int) var_8)));
        /* LoopSeq 3 */
        for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            var_17 = ((/* implicit */unsigned int) 12936035124348670904ULL);
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)-10482)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) ((12936035124348670920ULL) << (((12936035124348670908ULL) - (12936035124348670860ULL)))))) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_9 [i_6] [i_6] [i_5])))))))));
            var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((int) 12936035124348670890ULL)) - (((/* implicit */int) (unsigned char)99)))))));
        }
        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) 12936035124348670890ULL);
            var_21 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)56632)), (12936035124348670900ULL)));
            /* LoopSeq 1 */
            for (int i_8 = 1; i_8 < 11; i_8 += 2) 
            {
                arr_32 [i_5] [(short)6] [i_7] [i_8] = max(((-(((/* implicit */int) (signed char)81)))), ((+((~(((/* implicit */int) arr_14 [i_5] [i_7] [i_8])))))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_8 - 1] [i_7] [i_8])) | (((/* implicit */int) (short)-32750))))) ? ((~(var_5))) : (((/* implicit */int) var_6))));
                /* LoopSeq 1 */
                for (signed char i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    arr_36 [i_8] [i_5] [i_7] [i_8] [i_9] [4] = ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_5])) ? (((/* implicit */int) arr_26 [i_5])) : (((/* implicit */int) (unsigned char)98))))) + (((arr_33 [i_5] [i_7] [i_8]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_7]))))))) > (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)9043)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_16 [i_5] [i_7] [8]))))) - (var_2))));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((int) (short)-32750)))));
                }
            }
            arr_37 [i_5] = ((/* implicit */short) ((((/* implicit */unsigned long long int) 1131518876)) > (((((/* implicit */_Bool) (unsigned char)186)) ? ((~(11329327921295253536ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)23574)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (short)-9043)))))))));
        }
        for (unsigned short i_10 = 1; i_10 < 10; i_10 += 1) 
        {
            arr_42 [i_5] [i_10] [i_10] = ((/* implicit */unsigned short) ((((((unsigned long long int) -3)) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_10 - 1] [i_10 + 2] [i_10 - 1]))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)30331)) >= (131071)))) << ((((+(1131518876))) - (1131518870))))))));
            var_24 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)4)), ((short)-32762)))) : (max((((var_4) / (-1058076753))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)252)) : (2147483647)))))));
            arr_43 [i_5] [i_5] [i_10] = ((arr_6 [i_10]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)-9023)) ? (((/* implicit */int) arr_30 [i_5] [i_10 + 1] [i_10 + 1])) : (-50220835))) > (-2147483647))))));
        }
    }
    for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) /* same iter space */
    {
        var_25 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((475876120U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39896))))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (unsigned short)60753)) : (((/* implicit */int) (short)60))))), (max((10388938829242884373ULL), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))))))));
        arr_47 [i_11] [i_11] = ((/* implicit */unsigned long long int) (short)-19894);
    }
    var_26 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75))) : (8057805244466667242ULL))));
}
