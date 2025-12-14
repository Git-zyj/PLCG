/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229579
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 4; i_2 < 10; i_2 += 2) 
            {
                var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((unsigned long long int) arr_5 [i_2 - 4] [i_1 - 1])))));
                arr_9 [i_0] [0U] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]);
            }
            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1]))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 4; i_3 < 10; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    {
                        arr_17 [i_4] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-11880)) ? (((/* implicit */int) arr_4 [i_4] [8ULL])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1])))) | (((((/* implicit */int) arr_16 [i_0] [i_4] [i_3])) | (arr_6 [i_0] [i_1])))));
                        arr_18 [i_4] [i_1 - 1] [i_1 - 1] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_3 [i_4] [i_3] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)226)) != (arr_6 [10] [i_1 + 2]))))) : (arr_2 [i_1])));
                    }
                } 
            } 
            arr_19 [i_0] [i_0] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 2844546029348914991ULL))))));
            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1])) >= (((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_1])))));
        }
        for (int i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_10 [i_0] [i_0] [0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])))))) : (max((2844546029348914966ULL), (arr_2 [i_0]))))))));
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                for (long long int i_7 = 1; i_7 < 10; i_7 += 1) 
                {
                    {
                        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) min(((+((+(arr_15 [i_0] [i_5] [i_5] [i_6] [i_7 - 1]))))), (((/* implicit */unsigned long long int) ((arr_25 [i_7] [i_7] [i_7 + 1] [4]) / (arr_25 [i_7] [i_7] [i_7 + 1] [i_7])))))))));
                        var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((2657641524U) | (558788938U)))), (((arr_15 [i_7] [i_6] [i_5] [i_0] [i_0]) >> (((((((/* implicit */int) arr_16 [(unsigned short)9] [i_6] [i_5])) << (((((/* implicit */int) (short)3413)) - (3395))))) - (49020884)))))));
                        arr_26 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0]))))) : (min(((+(15602198044360636625ULL))), (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_11 [i_5] [i_5] [i_0]) : (((/* implicit */unsigned long long int) arr_21 [i_0] [i_5] [i_7 - 1]))))))));
                    }
                } 
            } 
        }
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
        {
            var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_8]))))) >> (((((((((/* implicit */int) arr_30 [i_8] [i_9])) + (((/* implicit */int) arr_31 [(unsigned short)15] [(unsigned short)15])))) + (((((/* implicit */int) arr_29 [(signed char)17] [i_8])) + (((/* implicit */int) arr_27 [i_8] [i_8])))))) - (37569)))));
            var_19 &= ((/* implicit */unsigned int) ((15602198044360636605ULL) | (((/* implicit */unsigned long long int) 2064102260U))));
        }
        for (short i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_32 [i_10] [i_8] [i_8])), (arr_35 [i_8])))) ? (((((/* implicit */int) arr_34 [i_10])) % (((/* implicit */int) arr_28 [i_10])))) : (((((/* implicit */_Bool) arr_32 [i_8] [i_10] [i_10])) ? (((/* implicit */int) arr_27 [i_8] [i_10])) : (((/* implicit */int) (unsigned char)16))))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_8] [i_10])))))))))))));
            arr_36 [i_8] [i_10] = ((/* implicit */_Bool) max((arr_29 [i_10] [(unsigned short)8]), (((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_34 [i_10])) || (((/* implicit */_Bool) -5608964672651422499LL)))))))));
            arr_37 [i_8] [(unsigned short)0] = ((/* implicit */short) ((max((((((/* implicit */int) arr_28 [i_10])) | (((/* implicit */int) arr_28 [i_10])))), (((((/* implicit */int) arr_33 [i_8] [i_8])) % (((/* implicit */int) (short)9690)))))) & (((/* implicit */int) ((((((/* implicit */_Bool) arr_33 [i_8] [i_10])) ? (15769393798518506263ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3414))))) > (((/* implicit */unsigned long long int) 536866816U)))))));
        }
        for (short i_11 = 0; i_11 < 20; i_11 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_12 = 0; i_12 < 20; i_12 += 4) 
            {
                var_21 ^= ((/* implicit */short) arr_42 [i_11]);
                var_22 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_35 [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_8] [i_8]))) : (arr_35 [i_11]))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_38 [i_12] [i_11])) << (((arr_35 [i_11]) - (13828764146109097126ULL))))))));
                arr_44 [i_8] [i_11] [(unsigned short)2] [i_11] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_34 [i_8]))));
            }
            /* vectorizable */
            for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 1) 
            {
                var_23 *= ((/* implicit */signed char) ((((arr_35 [i_13]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_11]))))) || (((/* implicit */_Bool) arr_30 [i_11] [i_13]))));
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 20; i_14 += 4) 
                {
                    for (unsigned char i_15 = 0; i_15 < 20; i_15 += 2) 
                    {
                        {
                            arr_52 [4ULL] [4ULL] [i_13] [i_14] [i_13] = ((/* implicit */unsigned char) ((unsigned short) arr_49 [i_8] [12] [i_8] [i_8]));
                            var_24 = ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) arr_38 [i_8] [i_11])))));
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_15])) ? (((/* implicit */int) arr_42 [i_8])) : (((/* implicit */int) arr_42 [i_14]))));
                        }
                    } 
                } 
            }
            var_26 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) (_Bool)1)));
        }
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_50 [15U] [i_8] [i_8] [i_8] [(signed char)2] [i_8])) || (((/* implicit */_Bool) arr_50 [i_8] [i_8] [i_8] [(signed char)8] [i_8] [i_8])))) ? (((/* implicit */int) arr_50 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) : (((((/* implicit */_Bool) arr_50 [(unsigned char)7] [i_8] [i_8] [i_8] [18ULL] [i_8])) ? (((/* implicit */int) arr_50 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_50 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))))))));
    }
}
