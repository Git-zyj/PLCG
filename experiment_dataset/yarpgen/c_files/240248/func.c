/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240248
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
    var_15 = ((/* implicit */unsigned int) ((signed char) (+((((_Bool)1) ? (((/* implicit */int) var_7)) : (-2099613698))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */short) ((var_8) < (12471050241397955550ULL)));
                        var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7840150181541207970ULL)))))) >= (((((arr_8 [i_0] [i_1] [i_1] [i_2 + 2] [i_2 - 1] [i_3]) + (9223372036854775807LL))) << (((5975693832311596034ULL) - (5975693832311596034ULL)))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_2 + 2] [i_3] [i_3]))) & (12471050241397955536ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [4U])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_2 [(signed char)1] [i_2] [i_2])))) : (((((/* implicit */unsigned long long int) 805306368U)) * (9706385203697343706ULL)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (int i_4 = 1; i_4 < 10; i_4 += 3) 
        {
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-5461)))))) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_11 [i_4 + 1]), (arr_11 [i_4 - 1])))))));
            var_19 = ((/* implicit */unsigned short) max((arr_3 [(unsigned char)1] [i_0] [i_4]), (((/* implicit */unsigned int) ((int) 13U)))));
        }
        for (short i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
        {
            var_20 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((4415233112313698586LL), (((/* implicit */long long int) (_Bool)1)))))));
            /* LoopSeq 2 */
            for (long long int i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    for (signed char i_8 = 1; i_8 < 7; i_8 += 1) 
                    {
                        {
                            arr_23 [i_0] [i_0] [i_8] [(signed char)7] [(signed char)7] [i_7] [i_8] = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))), (max((((/* implicit */unsigned long long int) 805306368U)), (5975693832311596049ULL))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [(signed char)8] [i_8])) ? (((/* implicit */int) arr_11 [10LL])) : (((/* implicit */int) var_7))))) < (var_8)))))));
                            arr_24 [(unsigned short)2] [i_8] [i_6] = ((/* implicit */short) ((signed char) ((signed char) var_6)));
                        }
                    } 
                } 
                var_21 = ((/* implicit */short) arr_16 [i_0] [i_0] [1U]);
            }
            for (long long int i_9 = 0; i_9 < 11; i_9 += 1) 
            {
                arr_28 [i_9] = ((/* implicit */short) ((805306361U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)17)))));
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 10; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) var_14);
                            arr_35 [i_11] [i_9] [(unsigned short)9] [i_9] [i_9] [i_9] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (max((((/* implicit */long long int) var_2)), (562675075514368LL)))))) ? ((-(((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) var_14))))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_3)) ? (134217727U) : (805306348U)))))));
                            arr_36 [(_Bool)1] [i_5] [i_9] [i_9] [i_9] = ((/* implicit */long long int) 805306368U);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_12 = 1; i_12 < 9; i_12 += 1) 
                {
                    for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        {
                            arr_44 [i_9] [i_9] = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2394899804U)));
                            var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) var_11)))));
                            arr_45 [i_0] [i_5] [i_13] [i_12] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)224)) ? (((((/* implicit */_Bool) arr_34 [i_5] [i_9] [i_12 - 1] [i_9])) ? (((/* implicit */int) arr_34 [i_0] [i_5] [i_9] [i_9])) : (((/* implicit */int) var_14)))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_9] [i_9] [i_9] [i_12] [i_13]))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)101))))))));
                        }
                    } 
                } 
            }
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_5] [i_5] [i_0]))) ^ (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_30 [i_5])), ((unsigned short)3323)))) ? (arr_37 [i_0] [(short)6] [0ULL] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))))));
        }
        /* vectorizable */
        for (short i_14 = 0; i_14 < 11; i_14 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 11; i_15 += 1) 
            {
                for (unsigned short i_16 = 0; i_16 < 11; i_16 += 2) 
                {
                    {
                        arr_53 [i_0] [6U] [i_0] [i_16] = ((/* implicit */_Bool) ((arr_30 [i_16]) ? (((/* implicit */int) (unsigned short)3328)) : (((/* implicit */int) var_11))));
                        var_25 ^= ((/* implicit */long long int) ((arr_4 [i_14] [i_16]) >= (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_16] [i_0] [i_15] [i_14] [i_0])))));
                        arr_54 [i_14] [i_14] = ((/* implicit */unsigned char) arr_0 [i_16]);
                        var_26 = ((/* implicit */long long int) arr_1 [i_0]);
                    }
                } 
            } 
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_14] [i_14] [i_14] [i_14] [i_14])) ? (arr_50 [i_14] [i_14] [i_0] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
        }
        arr_55 [i_0] = ((/* implicit */int) arr_30 [4LL]);
        /* LoopNest 3 */
        for (short i_17 = 0; i_17 < 11; i_17 += 3) 
        {
            for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 4) 
            {
                for (unsigned long long int i_19 = 1; i_19 < 9; i_19 += 3) 
                {
                    {
                        arr_62 [i_0] [i_0] [i_19] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (signed char)21)), (min((((/* implicit */unsigned long long int) arr_17 [i_0] [(_Bool)0] [i_18] [i_19 + 1])), (((unsigned long long int) var_3))))));
                        var_28 = ((/* implicit */unsigned short) -990891782);
                        var_29 *= arr_30 [i_18];
                    }
                } 
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned long long int) var_13);
    var_31 = ((/* implicit */signed char) var_6);
    var_32 &= ((/* implicit */unsigned long long int) var_3);
}
