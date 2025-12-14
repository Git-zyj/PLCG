/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193436
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_1 [1U]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            arr_4 [i_1] = min((((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (short)-18125)))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)18124)) : (((/* implicit */int) arr_0 [i_0] [12U]))))))), (min((((/* implicit */unsigned long long int) 3482347321U)), (321691249747236748ULL))));
            var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_1 - 1])))) > (((/* implicit */int) max(((short)-18125), (((/* implicit */short) arr_3 [6ULL] [i_1 - 1] [i_0])))))));
        }
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            arr_8 [i_0] [i_0 - 1] [i_0] &= min(((short)-919), (((/* implicit */short) (_Bool)1)));
            /* LoopNest 2 */
            for (signed char i_3 = 1; i_3 < 21; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    {
                        var_20 = ((/* implicit */short) (+(((/* implicit */int) ((arr_10 [i_0] [i_0 + 1] [(short)11] [i_3 - 1]) != (((/* implicit */int) arr_7 [i_3 - 1] [i_4] [i_0 + 1])))))));
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (+(max((((/* implicit */unsigned int) (_Bool)1)), (1420117884U))))))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), (arr_6 [i_0 - 1] [i_2])))) - (((/* implicit */int) arr_3 [i_0] [i_0] [i_0 + 1]))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned long long int) ((signed char) ((arr_0 [i_0] [i_0 + 1]) ? (arr_5 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
        }
        /* LoopSeq 2 */
        for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            arr_16 [i_5] [i_0] = ((/* implicit */long long int) ((arr_3 [i_5] [i_5] [i_0 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [(unsigned short)1] [i_0] [i_0 - 1])))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_14)), (var_5)))) ? (14160760307612615803ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [15U] [15U] [i_5])) * (((/* implicit */int) arr_7 [i_0] [(short)1] [i_5])))))))));
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                var_24 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) min((2874849412U), (((/* implicit */unsigned int) (signed char)-53))))), (((((/* implicit */_Bool) (signed char)64)) ? (arr_5 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_6]))))))), (((/* implicit */unsigned long long int) max((arr_14 [i_0 - 1]), (((/* implicit */unsigned short) (signed char)17)))))));
                var_25 = (~(((((/* implicit */_Bool) arr_9 [i_0] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5] [i_5]))) : (max((var_13), (((/* implicit */unsigned long long int) (signed char)-21)))))));
                arr_19 [i_0] [i_0] [i_5] [i_6] = ((/* implicit */short) min(((_Bool)1), ((_Bool)0)));
            }
            var_26 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((1304501905U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)20))))))));
            var_27 = ((/* implicit */unsigned int) min((max((((/* implicit */int) (signed char)64)), (max((((/* implicit */int) (short)18120)), (-2130978346))))), ((~(((/* implicit */int) arr_1 [i_0 + 1]))))));
        }
        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            var_28 = ((/* implicit */short) (-(arr_18 [i_0 - 1])));
            var_29 += ((/* implicit */unsigned short) 4347617661043679706ULL);
        }
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 2) 
    {
        arr_25 [i_8] [i_8] = ((/* implicit */_Bool) 9361773482388848473ULL);
        var_30 = arr_24 [i_8];
    }
    /* LoopSeq 2 */
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
    {
        var_31 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_12 [i_9 + 1] [0])), (((((_Bool) 14099126412665871909ULL)) ? ((+(-7538957374134603587LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_9 + 1] [i_9 + 1])))))));
        /* LoopSeq 2 */
        for (unsigned short i_10 = 0; i_10 < 13; i_10 += 2) 
        {
            /* LoopSeq 3 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_32 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) 1848027725151280073LL)) ^ (var_13)))));
                var_33 ^= ((/* implicit */unsigned short) ((arr_7 [(unsigned short)0] [i_9 + 1] [i_10]) ? (min((((/* implicit */unsigned int) arr_3 [(signed char)13] [i_9 + 1] [i_9 + 1])), (1420117883U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (68719476672ULL))))))))));
            }
            for (long long int i_12 = 0; i_12 < 13; i_12 += 1) 
            {
                var_34 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_33 [i_9 + 1] [i_9 + 1] [i_9 + 1] [12ULL])), (arr_30 [i_9 + 1])))) ^ (((unsigned long long int) arr_30 [i_9 + 1]))));
                arr_35 [i_9] [3ULL] [i_12] = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_18 [i_9 + 1])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -53412410)))))) * (((14099126412665871909ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-53)))))))));
                arr_36 [i_9] [i_10] [7ULL] [i_9] = ((/* implicit */unsigned long long int) min((max((((((/* implicit */_Bool) var_14)) ? (arr_30 [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_28 [i_12] [i_10] [(_Bool)1]))))))), (((/* implicit */long long int) arr_1 [i_9 + 1]))));
            }
            for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 1) 
            {
                arr_39 [i_9 + 1] [i_10] [i_9 + 1] [i_13] = ((/* implicit */unsigned char) (~(18446744073709551615ULL)));
                var_35 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_9 + 1] [i_9 + 1]))));
            }
            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) max((((arr_0 [i_9] [i_9 + 1]) ? (((/* implicit */unsigned long long int) arr_32 [i_9 + 1] [i_9 + 1] [i_9 + 1])) : (var_5))), (((/* implicit */unsigned long long int) ((unsigned short) arr_32 [i_9] [i_9 + 1] [i_9 + 1]))))))));
            arr_40 [(signed char)0] |= var_14;
        }
        for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 2) 
        {
            var_37 = ((/* implicit */unsigned long long int) max((((long long int) arr_3 [i_9] [i_9] [i_9 + 1])), (((/* implicit */long long int) ((signed char) arr_15 [i_9 + 1] [i_14])))));
            var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_9), (arr_38 [i_9 + 1] [i_9] [i_9]))))));
        }
        var_39 = ((/* implicit */short) arr_0 [i_9] [i_9]);
    }
    /* vectorizable */
    for (long long int i_15 = 3; i_15 < 19; i_15 += 2) 
    {
        arr_46 [i_15] = ((/* implicit */unsigned long long int) ((arr_13 [i_15 - 2] [i_15 - 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 53412410))))));
        /* LoopNest 2 */
        for (long long int i_16 = 0; i_16 < 21; i_16 += 2) 
        {
            for (unsigned long long int i_17 = 2; i_17 < 20; i_17 += 2) 
            {
                {
                    var_40 = arr_7 [i_15] [i_16] [i_15];
                    var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_15] [i_17 + 1]))))) ? (2874849403U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_1))))));
                    var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1737526104)) ? (((/* implicit */unsigned long long int) 3915481383785272331LL)) : (arr_44 [i_15 + 1] [i_15])));
                }
            } 
        } 
        var_43 = ((/* implicit */signed char) arr_45 [5ULL] [(signed char)8]);
    }
    var_44 = ((/* implicit */long long int) var_6);
}
