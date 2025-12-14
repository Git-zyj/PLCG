/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235459
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_1 [(short)4] [(short)4]), (arr_1 [(unsigned char)2] [4LL])))) ? ((+(((/* implicit */int) arr_1 [(unsigned short)0] [i_0 + 1])))) : (((((/* implicit */_Bool) arr_1 [(unsigned char)2] [i_0 + 2])) ? (((/* implicit */int) arr_0 [8ULL])) : (((((/* implicit */_Bool) arr_0 [8LL])) ? (((/* implicit */int) arr_1 [(unsigned short)10] [i_0 - 1])) : (((/* implicit */int) arr_1 [(unsigned short)0] [i_0])))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) arr_0 [i_0])))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [(_Bool)1])) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (arr_3 [i_1] [i_1]))) : ((~(arr_3 [i_1] [i_1])))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1]))))), (max((arr_3 [i_1] [i_1]), (((/* implicit */unsigned int) arr_5 [i_1]))))))) ? (max(((~(((/* implicit */int) arr_4 [i_1] [i_1])))), (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_1])))))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) max((arr_4 [(unsigned short)16] [i_1]), (arr_4 [i_1] [i_1])))) : (((((/* implicit */_Bool) arr_5 [(signed char)5])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1])))))))))));
        /* LoopSeq 3 */
        for (short i_2 = 1; i_2 < 17; i_2 += 1) 
        {
            var_15 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) arr_7 [i_2 - 1] [i_1])))));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_13 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2 - 1])) ? (((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2])) ? (arr_11 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_3])))))));
                arr_14 [i_2] = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned short) arr_11 [i_1]))), (((((/* implicit */_Bool) arr_12 [i_2] [i_2 - 1] [i_2])) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)7208)))) : ((~(((/* implicit */int) arr_5 [i_1]))))))));
            }
            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-29359)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (5950055392664737138ULL))))));
            arr_15 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4203364507U)) ? (5950055392664737138ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))));
            arr_16 [i_2] = ((short) (((!(((/* implicit */_Bool) (unsigned short)47521)))) ? (((/* implicit */unsigned long long int) (+(arr_8 [i_2] [i_2] [i_2])))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))) : (arr_12 [i_1] [i_2] [i_2])))));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                var_17 = ((/* implicit */unsigned int) arr_19 [i_1]);
                var_18 = ((/* implicit */unsigned char) ((short) arr_7 [(_Bool)1] [i_4]));
                var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5] [i_1])) ? (arr_8 [i_4] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [(short)17]))))))));
                /* LoopSeq 3 */
                for (short i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [i_1] [i_4 + 1]))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10754)) ? (((/* implicit */int) (short)1739)) : (((/* implicit */int) (unsigned short)15097))));
                    var_22 = ((/* implicit */unsigned short) ((_Bool) arr_7 [i_4 + 1] [i_4]));
                }
                for (unsigned char i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    var_23 -= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_24 [i_1] [i_4 - 1] [i_1] [(unsigned char)3]))));
                    arr_27 [i_4] = ((/* implicit */unsigned int) ((unsigned long long int) arr_21 [i_1] [i_4 - 1] [i_5] [i_7]));
                }
                for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_1] [(short)9] [i_5] [i_5])))))));
                    var_25 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_17 [i_1] [i_1])) ? (arr_8 [i_4] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_1] [i_1] [i_1] [i_8] [i_4])))))));
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((unsigned short) ((unsigned short) arr_9 [i_8] [i_5] [i_8])))));
                }
            }
            var_27 -= ((/* implicit */short) ((unsigned short) arr_9 [i_1] [i_4] [i_1]));
            var_28 = (!(((/* implicit */_Bool) ((arr_24 [i_1] [i_4 + 1] [i_1] [i_4 + 1]) ? (((/* implicit */long long int) arr_30 [i_4] [i_1] [i_1] [i_4])) : (arr_8 [i_4] [i_4 + 1] [i_1])))));
        }
        for (long long int i_9 = 3; i_9 < 14; i_9 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_10 = 1; i_10 < 16; i_10 += 1) 
            {
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_1] [i_9 - 2] [i_1] [i_9 + 2])) ? ((+(((/* implicit */int) arr_26 [i_10] [i_9 - 1] [i_9 - 1] [i_9 - 1])))) : (max((((((/* implicit */_Bool) 12496688681044814478ULL)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((_Bool) arr_34 [i_10 - 1] [i_1] [i_1])))))));
                var_30 -= ((/* implicit */unsigned long long int) arr_17 [i_9] [i_9]);
                arr_36 [i_1] [i_9 - 2] [i_9 - 2] [i_1] = ((/* implicit */unsigned char) (-(min((arr_31 [i_10 + 1] [i_9 - 2]), (((/* implicit */unsigned int) arr_33 [i_1] [i_9] [17ULL]))))));
                arr_37 [i_1] [(unsigned short)3] [(unsigned short)3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_11 [i_10 + 2])))) ? (((((/* implicit */_Bool) (short)-7208)) ? (4240206087262728405LL) : (((/* implicit */long long int) ((/* implicit */int) (short)29358))))) : (min((((/* implicit */long long int) ((short) arr_22 [(short)17] [i_9 + 4] [i_10 + 2] [i_10]))), ((+(arr_8 [i_1] [i_1] [i_1])))))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                arr_41 [i_1] [i_9] [i_1] = ((/* implicit */unsigned short) ((long long int) (+((~(((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [i_1] [i_9] [i_11])))))));
                var_31 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)30471)) ? (4240206087262728405LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [3LL] [3LL])))))));
            }
            for (unsigned short i_12 = 1; i_12 < 14; i_12 += 3) 
            {
                arr_44 [i_12] [i_12] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) ((short) (signed char)121))), ((~(((/* implicit */int) arr_19 [i_1]))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_12] [i_9]))))) ? (((/* implicit */unsigned long long int) arr_30 [i_12] [i_12] [i_1] [i_12])) : (((((/* implicit */_Bool) arr_40 [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_1] [i_9 - 1] [i_9 - 1]))) : (arr_12 [i_1] [(signed char)15] [i_12]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_34 [i_12] [i_12 - 1] [i_12 + 4]))))));
                var_32 &= ((/* implicit */short) ((((/* implicit */_Bool) (short)30052)) ? (-4240206087262728405LL) : (((/* implicit */long long int) ((/* implicit */int) (short)29359)))));
                var_33 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)21629)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (short)31832)))), (((/* implicit */int) ((short) arr_12 [i_12 + 3] [12ULL] [i_1])))));
                var_34 *= ((/* implicit */signed char) max(((+((~(arr_8 [i_1] [i_1] [(short)4]))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_22 [i_1] [i_9] [i_9] [i_12])))))));
                var_35 -= ((/* implicit */_Bool) ((short) ((short) arr_10 [i_1] [i_1])));
            }
            arr_45 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_10 [i_1] [i_1]), (arr_28 [(unsigned short)16] [i_1] [i_9] [i_1] [i_1])))) ? (((/* implicit */int) arr_26 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) ((unsigned char) arr_34 [i_1] [i_9 - 1] [i_9 - 2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [(short)16] [i_1] [i_9]))) : (((((/* implicit */_Bool) (-(arr_42 [i_1] [i_1] [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_21 [i_9] [i_9] [i_1] [i_1])) ? (arr_42 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [(short)0] [i_1] [i_9 + 2]))))) : (((((/* implicit */_Bool) arr_38 [i_1] [i_1] [i_1])) ? (arr_31 [i_1] [i_1]) : (arr_3 [i_1] [i_1]))))));
            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_9 - 1] [i_1] [i_1])) ? (((/* implicit */int) arr_19 [i_1])) : (((/* implicit */int) arr_33 [i_1] [i_9 + 4] [i_9 + 4]))))) ? (((/* implicit */long long int) (-(arr_30 [i_1] [i_1] [i_1] [i_1])))) : (max((arr_8 [i_1] [i_1] [i_1]), (((/* implicit */long long int) arr_9 [i_1] [i_1] [i_1]))))))) ? (max((((/* implicit */long long int) arr_43 [i_1] [i_1] [i_1])), (arr_11 [i_1]))) : (((/* implicit */long long int) max(((~(((/* implicit */int) arr_43 [i_1] [i_1] [i_9])))), (((((/* implicit */_Bool) arr_12 [i_1] [i_9 + 2] [i_1])) ? (((/* implicit */int) arr_10 [i_1] [i_9 + 3])) : (((/* implicit */int) arr_23 [(short)16] [i_9 + 2] [(short)16] [2LL] [i_9] [i_9])))))))));
            var_37 = ((/* implicit */long long int) (+(max((arr_12 [i_1] [i_9] [i_1]), (((/* implicit */unsigned long long int) arr_18 [i_9 + 2] [i_9 + 3]))))));
        }
        var_38 = ((/* implicit */unsigned long long int) arr_26 [i_1] [i_1] [i_1] [i_1]);
    }
    for (short i_13 = 1; i_13 < 13; i_13 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_14 = 0; i_14 < 14; i_14 += 4) 
        {
            var_39 -= ((/* implicit */unsigned short) ((short) (unsigned char)212));
            arr_53 [i_13] = (!(((/* implicit */_Bool) (-(arr_31 [i_13] [i_13 - 1])))));
            arr_54 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_13 - 1] [i_13 + 1] [i_13 + 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_13 + 1] [i_13 + 1] [i_13 + 1]))))) : (((/* implicit */int) ((short) arr_12 [i_13] [i_13] [i_13])))));
            var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_8 [i_14] [i_13 + 1] [i_13 + 1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_8 [i_14] [i_13 + 1] [i_14])))) : ((+(arr_8 [i_14] [i_13 + 1] [i_14]))))))));
            var_41 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) ((unsigned long long int) arr_18 [i_13] [i_13]))))));
        }
        /* vectorizable */
        for (unsigned char i_15 = 0; i_15 < 14; i_15 += 4) 
        {
            arr_59 [i_13 + 1] [i_13] [i_15] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (unsigned short)56544)) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) (unsigned short)63769)))));
            arr_60 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_13])) ? (((((/* implicit */_Bool) arr_50 [i_13] [i_15])) ? (((/* implicit */int) arr_46 [i_13 + 1])) : (((/* implicit */int) arr_4 [i_13 - 1] [i_15])))) : (((/* implicit */int) arr_55 [i_13] [i_13 + 1]))));
        }
        for (short i_16 = 2; i_16 < 13; i_16 += 1) 
        {
            arr_63 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) arr_61 [i_13] [i_13])) ? (((((/* implicit */_Bool) arr_61 [i_13] [i_13])) ? (((/* implicit */int) arr_61 [i_13] [i_13])) : (((/* implicit */int) arr_61 [i_13] [i_13])))) : ((~(((/* implicit */int) arr_61 [i_13] [i_13]))))));
            arr_64 [i_13] [(unsigned short)13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_13] [i_16 - 2])) ? (((((/* implicit */_Bool) arr_38 [(signed char)0] [(unsigned char)1] [i_13 - 1])) ? (((/* implicit */int) arr_38 [i_13 + 1] [i_13 - 1] [i_13 + 1])) : (((/* implicit */int) arr_38 [i_13 - 1] [i_13 - 1] [i_13 + 1])))) : ((~(((/* implicit */int) (signed char)-1))))));
            arr_65 [(_Bool)1] [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_29 [(unsigned short)8] [i_16 + 1] [i_16] [(unsigned short)8]))));
        }
        var_42 += ((/* implicit */long long int) (-(((/* implicit */int) arr_55 [(unsigned short)0] [(unsigned short)0]))));
    }
    for (unsigned char i_17 = 3; i_17 < 13; i_17 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_18 = 0; i_18 < 16; i_18 += 3) 
        {
            var_43 = ((/* implicit */unsigned long long int) (+(arr_42 [i_17] [i_17] [i_17] [i_17])));
            arr_70 [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((-(arr_35 [i_17] [i_17] [i_17]))), (((/* implicit */long long int) ((_Bool) arr_38 [i_17] [i_17] [(short)4])))))) ? (((((/* implicit */_Bool) ((signed char) arr_10 [i_17] [i_18]))) ? (((/* implicit */int) arr_29 [i_17 - 1] [i_18] [7LL] [i_17])) : (((((/* implicit */_Bool) arr_42 [i_17] [i_17] [i_17] [i_17])) ? (((/* implicit */int) arr_24 [i_17] [i_17] [(short)0] [i_17])) : (((/* implicit */int) arr_18 [i_17 - 3] [i_17 - 3])))))) : ((+(((/* implicit */int) arr_32 [i_17 - 3] [i_18] [i_18]))))));
            var_44 = ((/* implicit */unsigned short) ((short) min((((((/* implicit */_Bool) arr_69 [i_17 - 2] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_17 - 3] [(unsigned short)7] [i_17 - 3] [i_17]))) : (arr_31 [i_17] [i_18]))), (((/* implicit */unsigned int) ((short) arr_35 [i_17] [i_17] [i_18]))))));
        }
        var_45 = ((/* implicit */short) ((((/* implicit */_Bool) arr_39 [i_17 - 3] [i_17 - 3] [i_17 + 2] [i_17 + 2])) ? (((/* implicit */int) arr_39 [i_17 - 2] [i_17] [i_17 + 3] [i_17 - 2])) : ((~(((/* implicit */int) arr_39 [i_17 + 3] [i_17 + 3] [i_17 + 2] [i_17 + 3]))))));
        arr_71 [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-25404)) ? (((/* implicit */unsigned long long int) 853428109295209312LL)) : (70368744177663ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_17] [i_17 + 3] [i_17 - 3] [i_17] [(short)8] [i_17])) ? (((/* implicit */int) arr_18 [i_17] [i_17])) : (((/* implicit */int) arr_67 [i_17])))))))) ? ((~(((arr_24 [i_17 + 3] [i_17 + 1] [i_17 + 3] [i_17 + 1]) ? (((/* implicit */long long int) arr_25 [i_17] [i_17 + 3] [i_17] [i_17 - 2])) : (arr_11 [i_17 - 2]))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_28 [i_17 + 2] [i_17] [i_17 - 3] [i_17 - 3] [i_17])) ? (((/* implicit */int) arr_39 [i_17] [i_17] [i_17] [i_17])) : (((/* implicit */int) arr_7 [i_17] [i_17])))))))));
        var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_17] [i_17] [i_17] [i_17])) ? (((/* implicit */int) arr_23 [i_17] [i_17 - 3] [i_17] [i_17 + 1] [i_17] [i_17 - 3])) : (((/* implicit */int) arr_19 [i_17]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_20 [i_17 + 1] [i_17 + 2] [i_17 + 1])), (arr_5 [(_Bool)1])))) : ((+(((/* implicit */int) arr_22 [i_17] [i_17] [i_17] [i_17 + 3]))))))) ? (((/* implicit */int) arr_5 [10ULL])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_17] [i_17] [i_17] [i_17] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_17] [i_17] [i_17] [i_17] [i_17]))) : (arr_25 [i_17] [i_17 + 2] [i_17] [i_17])))) ? (((/* implicit */int) ((_Bool) arr_67 [i_17]))) : (((/* implicit */int) arr_43 [i_17] [i_17] [i_17]))))));
    }
}
