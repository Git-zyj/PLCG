/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224594
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
    var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) var_3))));
    var_11 += ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */long long int) ((((var_1) + (2147483647))) << (((((/* implicit */int) (short)15767)) - (15767)))))) != (min((((/* implicit */long long int) (unsigned char)141)), (-3764470378179922429LL)))))), (max((((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */int) var_4)))), (((/* implicit */int) min(((unsigned char)48), ((unsigned char)133))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_2 [(unsigned char)20] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) / (arr_1 [i_0 + 1])));
        var_12 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))) % (arr_1 [i_0 - 1]));
        arr_3 [i_0 + 1] &= ((/* implicit */int) arr_0 [i_0] [i_0]);
        arr_4 [(unsigned short)13] = (unsigned char)26;
        arr_5 [(short)13] [(short)13] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) -1281888230)) ? (12133594189935205541ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252)))))));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 36156401)) & (6313149883774346075ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1915707983327629566ULL))))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)68))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned char) ((((int) 12133594189935205541ULL)) & (((((/* implicit */_Bool) arr_11 [i_1] [i_2])) ? (((/* implicit */int) arr_11 [i_1 + 1] [17ULL])) : (((/* implicit */int) var_0))))));
            var_16 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-118)) / (((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) arr_11 [7] [7]))))));
            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_1 + 2])))))));
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (unsigned char)187))));
        }
        var_19 = ((/* implicit */long long int) (short)15767);
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            var_20 = ((/* implicit */unsigned short) (+(arr_9 [i_1 + 1])));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) (~(arr_15 [i_5])));
                            arr_25 [i_1] [i_1] [(unsigned char)11] [i_1] [i_6] [i_1 + 2] [10ULL] = arr_23 [i_1 - 1] [i_6];
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 15166822369258919247ULL)) ? (((/* implicit */int) (short)15767)) : (((/* implicit */int) (short)5))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)114))))) ? (arr_12 [i_1 + 1]) : (((/* implicit */long long int) -36156404))));
            }
        }
        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            var_24 = ((/* implicit */int) (~(12651387687098172351ULL)));
            arr_28 [i_7] [i_1] [i_1] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_12 [i_1])) ? (arr_15 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19160)))))));
        }
    }
    var_25 -= ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (signed char i_8 = 2; i_8 < 23; i_8 += 2) 
    {
        for (unsigned long long int i_9 = 2; i_9 < 20; i_9 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    arr_37 [i_10] [i_9] [i_10] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (short)-21454)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (10591986013977104519ULL))), ((-(arr_33 [i_9] [i_9 + 3] [i_9 + 1])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 2; i_11 < 21; i_11 += 2) 
                    {
                        for (unsigned short i_12 = 3; i_12 < 21; i_12 += 1) 
                        {
                            {
                                arr_43 [i_9] [i_9] [i_9] [i_11] [i_12] = ((/* implicit */int) max(((unsigned char)109), ((unsigned char)10)));
                                var_26 = ((/* implicit */unsigned long long int) max((min(((~(arr_40 [i_8] [(unsigned short)4] [0] [i_11] [i_12]))), ((~(((/* implicit */int) (short)-19145)))))), (((((/* implicit */_Bool) min(((unsigned char)9), ((unsigned char)4)))) ? ((-(arr_40 [i_8] [i_8] [i_10] [i_10] [i_12 - 2]))) : (((/* implicit */int) ((((/* implicit */int) (signed char)122)) > (((/* implicit */int) var_9)))))))));
                                arr_44 [i_8] [i_9] [i_11] [i_10] [i_9 - 2] [i_9] [i_8] = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) max((arr_34 [i_9] [i_9] [i_9 + 4]), (arr_32 [i_9])))), (min((((/* implicit */long long int) (signed char)-79)), (2638455763408826360LL))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_29 [i_8])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_32 [i_9])))), (((/* implicit */int) max((((/* implicit */short) (signed char)-10)), ((short)19144)))))))));
                            }
                        } 
                    } 
                    arr_45 [i_8] [i_8] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_29 [i_8 - 2]), (((/* implicit */unsigned short) (signed char)-25))))) ? (max((((/* implicit */unsigned long long int) arr_29 [i_8 + 1])), (9243477118486443682ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_8 - 2])))));
                }
                /* vectorizable */
                for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) 
                {
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((-4611686018427387904LL) + (((/* implicit */long long int) (-(((/* implicit */int) arr_30 [i_8] [i_8]))))))))));
                    var_28 = ((/* implicit */unsigned short) 1327909814);
                }
                var_29 = ((/* implicit */long long int) (short)-19160);
                var_30 = ((/* implicit */short) max((((/* implicit */unsigned short) (unsigned char)254)), ((unsigned short)65535)));
                arr_48 [i_9] = ((/* implicit */short) max((1152919305583591424LL), (((/* implicit */long long int) (signed char)-82))));
            }
        } 
    } 
}
