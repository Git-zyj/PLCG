/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36360
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
    var_11 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
        {
            var_12 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((3849036233U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9))))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)3)) ^ (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))))), (((((/* implicit */long long int) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_2))))) & ((~(-1367684245985452919LL)))))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_13 += ((/* implicit */unsigned long long int) ((arr_7 [(unsigned char)18] [(short)2] [i_2] [i_3] [i_4] [i_2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_0] [i_0] [i_2] [i_0] [i_4] [i_3]) > (18446744073709551615ULL)))))));
                            var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && ((!(arr_9 [i_0])))))) | (((/* implicit */int) ((arr_6 [4ULL] [i_2] [i_1] [i_0]) == (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1029494649U)), (5398011207287793851LL)))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
        {
            arr_14 [i_0] [i_5] [i_5] = ((/* implicit */short) ((((-1LL) - (var_3))) > (((/* implicit */long long int) var_7))));
            arr_15 [i_0] [i_0] = ((int) ((((_Bool) arr_5 [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [(_Bool)1] [i_0] [i_0]))) + (arr_6 [i_0] [(unsigned char)14] [i_5] [(unsigned char)14]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */int) arr_5 [(signed char)20])) & (((/* implicit */int) arr_11 [i_0] [i_5] [(_Bool)1] [(_Bool)1] [i_0])))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */int) min((arr_17 [i_7] [i_6] [i_5] [i_0]), (arr_17 [i_0] [i_5] [(unsigned short)23] [i_7])))) : ((+(((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 18446744073709551606ULL)))))))));
                        arr_21 [i_0] [i_0] [16U] [i_7] = ((/* implicit */unsigned short) 6164648902923943275LL);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
        {
            arr_24 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_8]))) <= (var_9)));
            arr_25 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_8] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [(signed char)4] [i_8])) : (((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_8] [i_0] [i_0])) != (((/* implicit */int) (_Bool)1)))))));
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_8 [i_0] [6LL] [(unsigned char)12] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_8] [i_0]))));
            var_18 = ((/* implicit */int) (-(var_6)));
        }
        for (long long int i_9 = 0; i_9 < 24; i_9 += 2) /* same iter space */
        {
            var_19 |= ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_23 [(_Bool)1] [i_0]), (arr_23 [i_0] [i_9]))))) >= (min((((/* implicit */unsigned long long int) arr_23 [i_0] [i_9])), (arr_1 [i_0] [i_9]))));
            arr_29 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_9] [i_0] [i_0]))))) || (((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_9] [(unsigned short)22])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))))));
            arr_30 [i_0] [i_9] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_0] [i_9] [i_9] [i_0])))));
        }
        var_20 = ((/* implicit */unsigned short) ((((unsigned long long int) (~(((/* implicit */int) arr_26 [i_0]))))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_9 [i_0]))))))))));
        var_21 = ((/* implicit */_Bool) min((var_21), (arr_27 [2LL])));
        arr_31 [i_0] = ((/* implicit */long long int) ((max((((arr_6 [i_0] [i_0] [(_Bool)1] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) arr_8 [i_0] [1U] [(unsigned char)21] [i_0])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) max((min((arr_23 [i_10] [i_10]), (arr_23 [i_10] [i_10]))), (arr_23 [i_10] [i_10])));
        arr_35 [i_10] [11ULL] = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)32750)))), (((((/* implicit */int) (unsigned char)2)) | (((/* implicit */int) (unsigned char)242)))))), (((/* implicit */int) arr_18 [i_10]))));
        arr_36 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)21))))) && (((/* implicit */_Bool) ((3ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3931081429797970330LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-50))) : (arr_13 [i_10] [i_10] [i_10])))))))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 2) /* same iter space */
    {
        var_23 = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (1432845444976223146LL));
        var_24 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)41)) / (((/* implicit */int) arr_8 [i_11] [i_11] [i_11] [i_11]))))) ? ((+(var_6))) : (((18446744073709551600ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249))))))));
    }
}
