/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197242
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_13 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned short)40121)))));
                                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) ((((/* implicit */int) var_6)) < (var_1))))))) << (((max((((int) arr_6 [i_0] [i_3])), ((+(((/* implicit */int) var_4)))))) - (61449))))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */long long int) max((arr_8 [i_0] [(signed char)9] [i_0]), (max((((/* implicit */int) (signed char)49)), ((+(((/* implicit */int) (signed char)-1))))))));
                var_16 ^= ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_0 [i_0 - 2]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) (+(((arr_13 [i_5] [i_5]) - (arr_13 [i_5] [i_5])))));
        arr_16 [i_5] = ((/* implicit */signed char) (unsigned short)40137);
        /* LoopSeq 2 */
        for (short i_6 = 2; i_6 < 17; i_6 += 4) 
        {
            arr_19 [i_5] = ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (signed char)-3))))), (min((arr_8 [(unsigned char)15] [i_5] [i_6]), (((/* implicit */int) (signed char)1)))))));
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_9 = 2; i_9 < 14; i_9 += 4) 
                    {
                        arr_28 [i_6] [i_6] |= (~(max(((~(((/* implicit */int) var_6)))), (((/* implicit */int) arr_6 [i_5] [i_7])))));
                        var_18 = ((/* implicit */long long int) max(((+(((/* implicit */int) var_4)))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)1))))))))));
                        var_19 = ((/* implicit */long long int) arr_5 [i_8] [i_8]);
                        var_20 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) arr_9 [i_8]))))))));
                        arr_29 [i_5] [i_7] [i_7] [i_8] [i_9 - 2] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_23 [i_6 + 1] [i_6 - 1] [i_8] [i_9 - 1] [i_9])))) ? ((~(((/* implicit */int) (signed char)-112)))) : (((/* implicit */int) ((((unsigned int) var_10)) < (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))))))));
                    }
                    for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        arr_32 [(short)12] [i_6] [i_10] [(short)10] [i_6] [i_10] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(signed char)3] [i_8] [i_7])) ? (((((/* implicit */_Bool) arr_25 [i_5] [i_5] [(short)13] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_5 [i_5] [i_10])) : (((/* implicit */int) var_3)))) : ((~(((/* implicit */int) var_2))))))) ? (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_6])) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((unsigned short) (signed char)-1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_5] [i_6] [i_7]))))))))));
                        var_21 *= var_12;
                    }
                    var_22 = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_6] [i_6] [(short)8] [i_8]))) : (arr_2 [i_8] [i_8] [i_8]))), (((((/* implicit */_Bool) arr_30 [i_5] [i_6] [4U] [i_7] [i_8] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) : (var_0))))), (((/* implicit */unsigned int) max(((unsigned short)53397), ((unsigned short)45642))))));
                }
                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)25414)) ? (5825271287134579501ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)3)), ((short)-270)))))));
                arr_33 [i_5] [i_5] [i_6] |= ((/* implicit */signed char) (~(arr_13 [i_6 - 2] [i_6 - 2])));
                var_24 = ((/* implicit */long long int) max((var_24), ((-(max((arr_18 [i_6 - 1]), (arr_18 [i_6 - 2])))))));
            }
            var_25 &= ((/* implicit */long long int) var_3);
            arr_34 [i_5] = ((/* implicit */unsigned char) ((unsigned long long int) (_Bool)1));
        }
        for (signed char i_11 = 0; i_11 < 18; i_11 += 2) 
        {
            var_26 += ((((/* implicit */int) max((var_12), (((/* implicit */signed char) arr_11 [i_5] [i_5] [i_5] [i_5] [i_11] [i_11]))))) << (((/* implicit */int) (!(arr_11 [i_5] [(signed char)12] [i_11] [i_11] [i_11] [i_11])))));
            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) -995608230)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-50)))))));
            var_28 = (~(((/* implicit */int) ((signed char) max((((/* implicit */unsigned short) arr_17 [i_5] [i_5])), (var_4))))));
            /* LoopNest 2 */
            for (short i_12 = 0; i_12 < 18; i_12 += 1) 
            {
                for (signed char i_13 = 0; i_13 < 18; i_13 += 1) 
                {
                    {
                        arr_42 [i_5] [i_5] [i_5] [i_5] [i_11] &= ((/* implicit */unsigned short) ((int) ((arr_0 [i_13]) ? (((/* implicit */int) arr_12 [i_11] [i_11] [i_12] [i_12])) : (((/* implicit */int) arr_0 [i_11])))));
                        var_29 *= ((/* implicit */signed char) ((((int) var_6)) < (((/* implicit */int) min((arr_10 [i_11] [i_11] [i_12] [i_13]), (arr_10 [i_11] [i_11] [i_12] [i_5]))))));
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((8732028404741061080ULL) - (8732028404741061056ULL)))))) ? (arr_22 [i_5] [i_11] [2U] [i_12]) : ((-(((/* implicit */int) var_2)))))), (((/* implicit */int) max((((unsigned short) var_9)), (((/* implicit */unsigned short) arr_37 [(signed char)11] [i_5]))))))))));
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) 2220265621947621072LL))));
                    }
                } 
            } 
            var_32 = ((/* implicit */_Bool) var_7);
        }
    }
}
