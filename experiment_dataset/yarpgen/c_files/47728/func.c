/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47728
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
    var_17 = ((/* implicit */signed char) (~(var_13)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((1831000674) >> (((888641222) - (888641194)))))) ? (((/* implicit */int) ((arr_1 [i_0]) != (((/* implicit */long long int) ((/* implicit */int) (short)-8192)))))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= ((-2147483647 - 1)))))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)32)) << (0)));
            arr_4 [i_0] [2] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_2 [i_0] [i_1])) + (0))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-36)) && (((/* implicit */_Bool) (short)-2147)))))));
            arr_5 [i_1] [i_1] [i_0] = ((/* implicit */signed char) max((max((((/* implicit */int) ((((/* implicit */int) (signed char)37)) != (0)))), (((((/* implicit */int) (_Bool)0)) % (10))))), (((/* implicit */int) arr_2 [i_1] [i_0]))));
            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((long long int) min((arr_3 [i_1] [i_1]), (((/* implicit */short) (unsigned char)0))))) : (((((/* implicit */long long int) 8U)) - (((long long int) (_Bool)1)))))))));
        }
        for (short i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
        {
            arr_10 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5689782544271405335LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_6 [i_2] [i_2]))))) ? (min((arr_8 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)30720)))) : (arr_8 [i_0] [(signed char)2] [i_0])));
            var_21 = ((/* implicit */_Bool) (signed char)32);
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    for (unsigned short i_5 = 4; i_5 < 9; i_5 += 2) 
                    {
                        {
                            arr_20 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)46127)) : (((/* implicit */int) arr_19 [i_0] [10LL] [10LL] [8LL] [10LL] [i_5 - 1])))) | (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)12)))) ? ((-(((/* implicit */int) arr_11 [i_3] [i_3] [i_2])))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)0))))))));
                            var_22 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_2] [i_2])) << (((((/* implicit */int) arr_3 [(unsigned short)6] [i_3])) - (20291)))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */int) max((var_23), (((((/* implicit */_Bool) ((min((arr_13 [i_2] [i_2] [i_2] [i_0]), (((/* implicit */long long int) (_Bool)1)))) << (((arr_13 [i_0] [i_2] [i_2] [i_2]) - (8016420795484604564LL)))))) ? (((((/* implicit */int) (signed char)14)) + (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1473446238524544732LL)) ? (((/* implicit */int) arr_15 [i_2])) : (255)))) ? (((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [(unsigned short)0]))))))))));
        }
        /* vectorizable */
        for (short i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
        {
            arr_23 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (unsigned short)32768))))) ? (((/* implicit */int) ((signed char) arr_16 [i_0] [i_0] [i_0] [(signed char)3] [i_0] [i_0] [i_0]))) : (((/* implicit */int) arr_21 [i_6]))));
            var_24 = ((/* implicit */_Bool) ((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_6] [i_6] [i_0] [i_6]))));
            /* LoopSeq 1 */
            for (int i_7 = 1; i_7 < 8; i_7 += 1) 
            {
                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_9 [i_0] [i_7 + 3] [i_0])) : (((/* implicit */int) (unsigned short)32768)))))));
                arr_28 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_6] [i_6] [i_7 - 1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_7] [i_0] [i_0] [i_0])) ? (arr_13 [2U] [i_6] [i_6] [i_6]) : (((/* implicit */long long int) arr_25 [i_0] [i_6] [i_7])))))));
            }
            arr_29 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_24 [i_0] [i_0] [i_0] [i_0]) / (((/* implicit */long long int) -2147483640))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (short)-914)) : (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) (unsigned char)104)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))));
            /* LoopNest 3 */
            for (long long int i_8 = 2; i_8 < 8; i_8 += 2) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        {
                            var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))) ? (3840) : (((/* implicit */int) (_Bool)1))));
                            var_27 = ((/* implicit */signed char) ((unsigned short) arr_32 [i_0] [i_6] [i_6]));
                            var_28 -= ((/* implicit */long long int) ((((/* implicit */long long int) -1675275441)) == (9223372036854775795LL)));
                        }
                    } 
                } 
            } 
        }
        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)65523)))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0] [(unsigned short)7]))))))) + (((((/* implicit */long long int) 1675275440)) & ((((_Bool)1) ? (1473446238524544737LL) : (arr_1 [i_0])))))));
    }
    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)384)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (unsigned short i_11 = 1; i_11 < 19; i_11 += 1) 
    {
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) 3584731214015688331LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (min(((-(arr_42 [16ULL]))), (arr_41 [i_12 - 1] [i_12 - 1] [i_11 + 1])))));
                    arr_47 [i_13] [i_12] [i_12] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_39 [i_11 - 1]))) ? (max((arr_39 [i_11 + 1]), (arr_39 [i_11 - 1]))) : (((((/* implicit */unsigned long long int) -814050998)) - (arr_39 [i_11 - 1])))));
                    var_32 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) 67043328)))) ? (((/* implicit */unsigned long long int) -1165862452)) : (((((/* implicit */_Bool) arr_40 [i_12 - 1] [i_12 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_12 - 1] [i_12 - 1] [i_13]))) : (7049313121154617534ULL)))));
                }
            } 
        } 
    } 
    var_33 = (_Bool)0;
}
