/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27874
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
    var_12 = ((/* implicit */unsigned int) var_9);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)100)) ? ((-(min((13578350147279429548ULL), (((/* implicit */unsigned long long int) arr_2 [14LL])))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (arr_0 [i_0]))))) : ((~(arr_1 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [i_0]) ^ (((int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)3)))))) : ((~((~(1526104987997146065ULL)))))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (short)31))))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (arr_2 [i_0]))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) arr_0 [i_1 - 1]);
        var_15 = ((/* implicit */unsigned int) ((arr_2 [i_1]) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) && (((/* implicit */_Bool) arr_1 [i_1 - 1])))))));
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned short) arr_2 [i_1]))), (arr_2 [i_1])));
            var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-25))))) : (arr_4 [i_2]))) / (((/* implicit */long long int) ((/* implicit */int) (signed char)30)))));
            var_18 = ((/* implicit */int) min((var_18), (arr_7 [i_2])));
        }
        for (short i_3 = 1; i_3 < 13; i_3 += 2) 
        {
            var_19 = ((/* implicit */short) (((+(((/* implicit */int) ((var_9) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_3])))))))) > (((/* implicit */int) (signed char)3))));
            /* LoopSeq 1 */
            for (signed char i_4 = 2; i_4 < 14; i_4 += 2) 
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (signed char)100))) <= (((arr_0 [i_1]) ? (((/* implicit */int) arr_5 [i_4])) : (var_2))))))));
                        var_21 ^= ((/* implicit */unsigned short) ((1550210773U) / (1550210773U)));
                    }
                    for (int i_7 = 4; i_7 < 11; i_7 += 3) 
                    {
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)100)) - (((/* implicit */int) (signed char)-24))))) ? (((/* implicit */int) arr_18 [i_7])) : (((/* implicit */int) arr_9 [i_1 + 1] [i_7] [i_7 - 2]))));
                        var_23 = ((/* implicit */unsigned long long int) ((int) 8970779762554673356LL));
                        arr_21 [i_1] [i_1] [i_3 + 2] [i_4 - 2] [8U] [i_7 + 2] [i_1] = ((/* implicit */long long int) (signed char)15);
                        var_24 *= ((((/* implicit */_Bool) arr_18 [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((int) (signed char)100))) : (((unsigned long long int) arr_8 [i_1])));
                    }
                    arr_22 [i_5] [i_4 - 1] [i_3] [i_5] &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_3 + 2] [i_1] [i_1])) == (((/* implicit */int) ((unsigned short) 13201398435893448339ULL)))));
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_5])) > (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_19 [i_1 + 1] [i_1] [i_3] [i_1 + 1] [i_5] [(unsigned short)5])))))));
                    arr_23 [i_1] [i_3] [i_3] [i_1] [8] [i_5] = ((/* implicit */short) var_11);
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1 - 1] [i_3 - 1] [i_1 - 1] [13LL]))))))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 4) /* same iter space */
                {
                    var_27 += ((/* implicit */long long int) ((((unsigned int) arr_20 [i_3 + 1] [i_3 + 1] [(signed char)11] [i_3 + 1] [i_4 + 1])) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_12 [i_3] [i_3] [i_8] [i_4 - 2])) : (((/* implicit */int) (signed char)24)))))));
                    /* LoopSeq 1 */
                    for (long long int i_9 = 3; i_9 < 13; i_9 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) var_1);
                        arr_28 [i_3] [i_1] [i_3] = ((((unsigned long long int) ((var_4) | (((/* implicit */int) (unsigned char)81))))) ^ (((/* implicit */unsigned long long int) -770158553)));
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */int) (unsigned char)68)) & (((/* implicit */int) (unsigned char)191)))))));
                    }
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) ((arr_10 [i_1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)100)))))) << (((arr_20 [3] [i_3] [3] [i_3] [3]) + (7318166008628569234LL))))) : (((/* implicit */int) ((((/* implicit */_Bool) (~(arr_1 [i_3])))) && (((((/* implicit */_Bool) arr_2 [i_1])) && (arr_27 [i_1] [i_1] [i_3] [i_4] [i_4 + 1] [i_8]))))))));
                    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) arr_12 [i_1 - 1] [i_3] [i_8] [i_8]))));
                    var_32 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_0 [i_1 + 2])) : (((/* implicit */int) arr_0 [i_1 - 1]))))));
                }
                /* vectorizable */
                for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 4) /* same iter space */
                {
                    arr_31 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-82)) > (((arr_7 [i_1]) * (((/* implicit */int) arr_27 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1 + 1]))))));
                    /* LoopSeq 4 */
                    for (int i_11 = 3; i_11 < 12; i_11 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((signed char) (short)30857)))));
                        var_34 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_6)))) - (794894232U)));
                        arr_34 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_1] [i_1 - 1] [i_3 + 1] [i_11 + 2] [i_11] [i_11])) ? (((/* implicit */int) arr_0 [i_1 + 2])) : (((/* implicit */int) arr_0 [i_1 + 1]))));
                        var_35 -= ((/* implicit */short) arr_30 [i_1 - 1] [i_3 + 1] [13ULL] [i_10]);
                    }
                    for (unsigned long long int i_12 = 3; i_12 < 14; i_12 += 3) 
                    {
                        arr_38 [i_1] [i_3] [i_4] [i_12] = ((int) ((_Bool) (signed char)100));
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_36 [i_1] [i_3 + 2] [(_Bool)1] [i_10] [i_1 - 1] [i_4 - 1]))) <= (arr_30 [0LL] [i_3] [i_3 - 1] [i_3 + 2])));
                        var_37 = ((/* implicit */_Bool) 799360456411369265ULL);
                        var_38 = ((((/* implicit */int) (unsigned short)37567)) & (((/* implicit */int) arr_0 [i_3 - 1])));
                    }
                    for (long long int i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        var_39 = ((/* implicit */_Bool) -770158543);
                        arr_42 [i_1] = ((/* implicit */long long int) arr_2 [i_1]);
                        var_40 -= ((/* implicit */short) (+(((/* implicit */int) (signed char)10))));
                    }
                    for (int i_14 = 0; i_14 < 15; i_14 += 3) 
                    {
                        var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1)))))));
                        var_42 -= ((unsigned long long int) arr_5 [i_4]);
                    }
                }
                for (unsigned short i_15 = 0; i_15 < 15; i_15 += 2) 
                {
                    arr_49 [i_15] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((801899944978166917LL) == (((/* implicit */long long int) 536870911U))));
                    var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_1 - 1])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_39 [i_1 - 1]))))) : (arr_4 [2ULL])));
                    var_44 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)1))) <= ((-9223372036854775807LL - 1LL))));
                }
                var_45 = ((long long int) arr_44 [i_1 + 1] [i_4 - 2] [5ULL] [i_4 + 1]);
            }
            var_46 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_3 + 1])) / (arr_8 [i_3 - 1]))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
        }
        /* vectorizable */
        for (unsigned short i_16 = 0; i_16 < 15; i_16 += 2) 
        {
            var_47 = ((/* implicit */unsigned int) arr_50 [i_1] [i_16]);
            var_48 = ((/* implicit */int) ((((((/* implicit */int) arr_40 [i_1] [i_1] [i_1] [i_1] [i_1] [i_16] [i_16])) <= (((/* implicit */int) arr_35 [i_1] [i_1] [i_16] [i_16] [i_16] [i_16] [i_16])))) && (((((/* implicit */int) (signed char)113)) <= (((/* implicit */int) (signed char)-24))))));
        }
        arr_54 [i_1] = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_40 [i_1] [i_1] [i_1] [i_1 + 2] [i_1] [i_1] [i_1 + 1]))))));
    }
    for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 3) 
    {
        var_49 = ((/* implicit */_Bool) arr_2 [i_17]);
        var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) (((+((-(((/* implicit */int) (_Bool)1)))))) >= (((/* implicit */int) (!(arr_32 [i_17] [(_Bool)1] [i_17] [i_17])))))))));
    }
}
