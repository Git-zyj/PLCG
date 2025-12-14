/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222349
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
    var_12 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) ? (((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)0)))) : (((((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_4))))) & ((~(((/* implicit */int) var_0))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        arr_12 [i_0 - 1] [i_0] [i_2] [i_2] [i_0 - 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_1 - 1] [i_3 + 1] [i_0 + 2] [i_3]))));
                        var_13 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) 9991449516336642302ULL)) || (((/* implicit */_Bool) (short)(-32767 - 1)))))));
                        arr_13 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [12U] [i_3 - 1] [(unsigned char)11])) ? (arr_9 [i_0] [i_2] [i_3 - 1] [i_3 + 1]) : (arr_9 [(signed char)14] [i_0 + 1] [i_3 - 1] [i_3])));
                        var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [i_0] [i_3])) + (((/* implicit */int) arr_5 [i_2] [i_2])))) / (((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_1 [i_0]))))));
                    }
                    var_15 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) 2133746150)) * (4032776522035799810ULL))) + (((/* implicit */unsigned long long int) (+(arr_6 [i_0] [i_1 + 1]))))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [11] [i_0] [i_0 - 2] [i_0 + 2]))) <= (((arr_9 [i_0] [i_0 + 2] [(unsigned char)10] [(unsigned char)10]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(_Bool)1] [i_0]))))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 15; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
            {
                for (signed char i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    {
                        var_17 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_16 [(short)6] [i_7])) >= (arr_14 [i_7])));
                        var_18 -= ((/* implicit */signed char) (-(((((((/* implicit */_Bool) arr_15 [i_7])) ? (((/* implicit */int) arr_18 [(unsigned char)18] [i_7])) : (((/* implicit */int) arr_23 [i_4] [i_5] [i_4] [i_6] [i_5] [(signed char)6])))) + (((((/* implicit */_Bool) arr_16 [i_5] [i_7])) ? (((/* implicit */int) arr_18 [i_5] [i_7])) : (((/* implicit */int) arr_23 [i_4] [i_5] [i_6] [i_7] [i_4] [i_4]))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_8 = 1; i_8 < 17; i_8 += 1) 
        {
            var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-36))));
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 17; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 19; i_10 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            var_20 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_4] [i_8] [i_9] [8LL] [i_11] [i_9]))) == (arr_14 [i_4])));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */int) arr_23 [i_9 + 1] [i_9 - 1] [i_9 + 2] [i_9 + 1] [i_9 - 1] [i_9 - 1])) <= (((/* implicit */int) arr_23 [i_9 + 2] [i_9 - 2] [i_9 + 2] [i_9 + 1] [i_9 + 1] [i_9 - 2]))));
                            arr_38 [i_4] [i_4] = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_36 [i_4] [i_4] [i_8] [(unsigned short)11] [i_9] [i_10] [i_11])) - (((/* implicit */int) arr_23 [i_4] [i_4] [i_9] [(_Bool)1] [i_10] [i_11]))))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_29 [i_4] [i_8 + 2] [18U] [i_12 - 1])))))));
                            arr_42 [(unsigned short)5] [i_4] [(unsigned short)5] [(unsigned short)13] = ((/* implicit */unsigned short) arr_18 [i_9 + 2] [i_4]);
                        }
                    }
                } 
            } 
            arr_43 [i_4] [i_4] = (((+(((/* implicit */int) arr_19 [i_8] [i_8] [i_4])))) > (((((/* implicit */int) arr_35 [i_4] [i_4] [i_4] [i_8] [i_4] [i_4] [i_4])) << (((arr_31 [i_4] [13U] [13U] [i_8 + 1]) - (317873213))))));
            var_23 += ((/* implicit */unsigned long long int) (((~(arr_22 [i_8] [i_4] [i_4] [i_8]))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [8])))));
        }
    }
    for (unsigned short i_13 = 3; i_13 < 12; i_13 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((arr_31 [i_13 - 1] [i_13] [i_13 - 2] [i_13]) - (max((arr_7 [i_13 + 1] [(signed char)3]), (arr_7 [i_13 - 1] [(unsigned char)0]))))))));
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((arr_31 [i_13] [i_13] [0LL] [(unsigned short)10]) / (arr_6 [i_13 - 2] [i_13])))) ? (min((arr_40 [i_13] [14ULL] [i_13 - 3] [6] [(unsigned short)10] [i_13] [(unsigned short)10]), (((/* implicit */long long int) arr_25 [i_13 + 3])))) : (((/* implicit */long long int) ((arr_29 [i_13 + 3] [i_13] [i_13] [i_13]) / (arr_20 [12ULL])))))), (((/* implicit */long long int) ((((/* implicit */int) arr_25 [i_13 + 3])) <= (min((((/* implicit */int) arr_5 [(_Bool)1] [11U])), (arr_31 [i_13] [i_13] [i_13] [i_13])))))))))));
    }
    for (unsigned short i_14 = 3; i_14 < 12; i_14 += 2) /* same iter space */
    {
        arr_49 [i_14] [i_14] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_18 [i_14] [(_Bool)1])), (arr_47 [i_14 + 2])))), (min((((/* implicit */unsigned long long int) arr_34 [i_14 - 3] [i_14] [i_14] [i_14 - 3] [2ULL] [i_14 + 2])), (arr_41 [10ULL] [i_14] [i_14] [i_14] [i_14]))))), (((/* implicit */unsigned long long int) min((arr_21 [i_14 - 2] [i_14]), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) arr_30 [i_14] [i_14] [4ULL])) <= (arr_9 [i_14] [i_14] [i_14] [i_14])))))))));
        /* LoopSeq 1 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_14] [i_15])) ? (((/* implicit */unsigned int) arr_7 [(_Bool)1] [i_15])) : (arr_4 [i_14])))) ? (((-359752520047446027LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16624))))) : (((/* implicit */long long int) max((arr_9 [i_14] [i_15] [i_14] [i_14]), (((/* implicit */unsigned int) arr_20 [(signed char)4]))))))) <= (((/* implicit */long long int) ((arr_29 [i_14] [i_15] [i_15] [i_14]) & (arr_29 [i_14] [i_14 + 1] [i_14 + 1] [i_14])))))))));
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) arr_9 [i_14 + 2] [i_14 + 3] [i_14 + 1] [i_14 + 3]))));
            var_28 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(min((((/* implicit */long long int) arr_26 [10])), (arr_40 [i_14 - 3] [i_14 + 3] [i_14] [i_14] [i_15] [i_15] [i_15]))))))));
            var_29 = ((/* implicit */signed char) arr_34 [i_14] [i_14] [(_Bool)1] [i_15] [18ULL] [i_15]);
        }
        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) max((arr_30 [i_14] [i_14] [i_14]), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-127)))))))))))));
    }
    var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
}
