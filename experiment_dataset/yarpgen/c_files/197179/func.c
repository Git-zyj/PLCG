/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197179
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
    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) var_2))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_11 ^= ((/* implicit */unsigned long long int) var_3);
        var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 1])) * (((/* implicit */int) arr_0 [i_0 - 1])))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_3 [21] [11] [i_0 - 1]) | (((/* implicit */long long int) var_0))))) ? ((-(arr_3 [i_0] [(signed char)1] [i_0 + 1]))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0 + 1])) ? (((/* implicit */long long int) var_0)) : (arr_3 [i_0] [i_0] [i_0 + 1])))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) ((0U) - (((/* implicit */unsigned int) ((var_3) * (((/* implicit */int) arr_11 [i_3 - 1] [i_3 + 2] [i_0] [i_3 + 1] [i_0 - 2] [i_0])))))));
                                arr_12 [i_0] [i_2] [i_3 + 1] [i_4] [i_1] = ((/* implicit */_Bool) (~((-(((var_3) % (((/* implicit */int) arr_0 [i_3]))))))));
                                var_15 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967294U)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (2781194424U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) || ((!(((/* implicit */_Bool) var_4))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 21; i_6 += 3) 
                        {
                            {
                                var_16 ^= ((/* implicit */long long int) ((((16U) == (3U))) ? (min((var_5), (((/* implicit */unsigned long long int) 3746049686U)))) : ((-(min((((/* implicit */unsigned long long int) arr_5 [2LL] [i_1] [18U] [2LL])), (var_4)))))));
                                arr_18 [(unsigned char)11] [i_1] [(unsigned char)11] [i_2] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) arr_15 [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0] [i_0 + 1]))))) ? (((((/* implicit */_Bool) ((arr_4 [i_1] [i_1] [i_1]) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (4294967279U) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_0] [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0 - 1])) ^ (var_3)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                                arr_19 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6] = ((/* implicit */signed char) 2);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (int i_7 = 0; i_7 < 13; i_7 += 1) 
    {
        arr_23 [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (+(4294967290U)))) ? (((unsigned long long int) (!(((/* implicit */_Bool) 16U))))) : (var_2)));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_7])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)-20518)) ? (-26) : (((/* implicit */int) (unsigned char)64))))))));
        /* LoopSeq 3 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_26 [i_7] = ((/* implicit */int) arr_20 [i_7]);
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 13; i_9 += 4) 
            {
                for (signed char i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    {
                        var_18 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_16 [i_9] [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_30 [i_7] [i_8] [i_10] [i_10]))))), (((((/* implicit */_Bool) 22U)) ? (1U) : (((/* implicit */unsigned int) 40)))))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (min((((/* implicit */unsigned long long int) (~(1U)))), ((~(arr_28 [i_10] [i_9])))))));
                            arr_37 [i_9] [i_9] [i_9] [i_9] [0U] = ((/* implicit */unsigned int) (unsigned short)65535);
                        }
                        for (signed char i_12 = 1; i_12 < 12; i_12 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned int) -37);
                            arr_40 [i_12] [i_12] [i_12] [i_12 + 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) 5U)) != (arr_7 [i_12]))))));
                            arr_41 [(short)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_12 - 1])) ? (((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned int) arr_5 [(unsigned short)3] [i_8] [i_8] [i_8])))) : (((/* implicit */unsigned int) (((_Bool)1) ? (46) : (((/* implicit */int) (unsigned short)7)))))))) ? (((min((var_5), (((/* implicit */unsigned long long int) 173906850U)))) >> (((((((/* implicit */_Bool) (unsigned short)6331)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))) - (13708))))) : (((unsigned long long int) (_Bool)1))));
                        }
                        for (signed char i_13 = 0; i_13 < 13; i_13 += 1) 
                        {
                            var_21 = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_6 [i_9] [i_8] [i_9])) : (((int) ((((/* implicit */int) arr_11 [i_7] [(unsigned short)19] [i_10] [(unsigned short)19] [(signed char)15] [i_9])) << (((arr_22 [i_10] [i_8]) - (3985014677U)))))));
                            arr_44 [i_7] [(unsigned short)6] [i_9] [(unsigned short)5] [i_13] [10U] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_39 [i_8])) ? (((/* implicit */int) arr_39 [i_7])) : (((/* implicit */int) arr_39 [i_7]))))));
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) min(((-(((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_9]))))) ? (((((/* implicit */_Bool) (unsigned short)25)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_10] [i_13] [i_10] [i_13] [i_10]))) : (17U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [2U] [i_8]))))))))))))));
                            var_23 = ((/* implicit */long long int) var_4);
                        }
                        for (unsigned long long int i_14 = 2; i_14 < 11; i_14 += 4) 
                        {
                            arr_48 [i_10] [i_10] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_6)))) ^ (((((/* implicit */_Bool) arr_4 [i_7] [14U] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (4492835348002465690LL))))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (unsigned short)59217))) || (((/* implicit */_Bool) (unsigned char)199))))))));
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) min((((/* implicit */int) (_Bool)1)), (min((458752), (((/* implicit */int) var_6)))))))));
                        }
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)13)))))));
                    }
                } 
            } 
            arr_49 [i_7] = arr_33 [i_8] [i_8] [i_7] [i_7] [i_8] [i_7] [i_7];
        }
        for (unsigned int i_15 = 0; i_15 < 13; i_15 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_16 = 0; i_16 < 13; i_16 += 2) 
            {
                for (unsigned char i_17 = 0; i_17 < 13; i_17 += 4) 
                {
                    {
                        arr_60 [i_17] [i_16] [i_15] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)190))))) ? (var_4) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_7] [i_7] [4]))) : (1049756143952491494ULL))))) : ((-(887172785961135672ULL)))));
                        arr_61 [i_17] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned long long int) (unsigned short)6343);
                        /* LoopSeq 1 */
                        for (int i_18 = 2; i_18 < 12; i_18 += 2) 
                        {
                            arr_64 [(short)5] [i_15] [i_16] [i_15] [2LL] [i_17] [i_18 - 2] = ((/* implicit */unsigned short) -55);
                            var_26 = ((/* implicit */unsigned short) var_2);
                            var_27 += ((/* implicit */unsigned char) arr_32 [i_7] [i_15] [i_15] [i_17]);
                        }
                    }
                } 
            } 
            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */int) min((arr_29 [i_7] [i_7] [i_15] [i_7]), (arr_29 [i_7] [i_7] [i_15] [i_7])))) * (((/* implicit */int) min((arr_29 [i_15] [i_15] [i_15] [i_7]), (arr_29 [i_7] [i_15] [i_7] [i_7])))))))));
        }
        for (unsigned int i_19 = 0; i_19 < 13; i_19 += 2) /* same iter space */
        {
            arr_69 [i_7] [i_7] [(short)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_7] [6] [i_7] [i_7] [i_7] [i_7])) ? (arr_63 [i_7] [i_7] [i_19] [i_19] [i_7] [i_19]) : (var_5)))) && (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_2 [i_7] [i_7])) ? (arr_28 [i_7] [i_19]) : (((/* implicit */unsigned long long int) var_0)))))))));
            arr_70 [i_7] [i_19] = min((arr_52 [i_7] [i_7]), (((/* implicit */int) ((signed char) arr_31 [i_7] [i_19] [i_19] [i_19] [i_19]))));
            /* LoopNest 3 */
            for (unsigned char i_20 = 0; i_20 < 13; i_20 += 1) 
            {
                for (unsigned int i_21 = 0; i_21 < 13; i_21 += 1) 
                {
                    for (int i_22 = 2; i_22 < 10; i_22 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_79 [i_22 + 1] [i_20] [i_20] [i_20] [i_7] = ((/* implicit */int) (~(-1LL)));
                            var_30 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((/* implicit */int) arr_74 [i_19] [i_22 + 1] [i_22] [i_22 + 3] [i_22 + 1] [i_22 - 2]))))) ? (((/* implicit */unsigned long long int) arr_71 [i_7] [i_22 - 1] [i_20] [i_21])) : ((~(((((/* implicit */_Bool) var_3)) ? (arr_47 [i_22] [i_22] [i_7] [i_21] [i_22 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_19] [i_19] [i_21])))))))));
                            arr_80 [i_7] [i_20] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) 3062997612U)), (var_5)))));
                        }
                    } 
                } 
            } 
            arr_81 [i_19] = (~(((unsigned int) arr_57 [8] [i_7] [i_19] [i_7] [8])));
        }
    }
    var_31 ^= ((/* implicit */unsigned long long int) var_1);
    var_32 = ((/* implicit */int) ((unsigned int) (~(((var_5) >> (((/* implicit */int) (signed char)12)))))));
    var_33 = ((/* implicit */unsigned short) var_3);
}
