/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224279
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
    var_10 = ((((/* implicit */_Bool) var_3)) ? (var_2) : (((((/* implicit */_Bool) ((3238764888981500789ULL) | (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123))) : (((15207979184728050827ULL) << (((var_5) - (7866298950166109336ULL))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned long long int) -1252345466);
        var_12 = ((/* implicit */int) min((((/* implicit */unsigned long long int) 2919350959U)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
        var_13 = ((/* implicit */unsigned int) ((max((((11549779482559435674ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123))))), (((/* implicit */unsigned long long int) ((int) arr_0 [i_0]))))) < (arr_0 [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */int) (unsigned short)24306)) != (((/* implicit */int) arr_1 [i_1]))))) % (((/* implicit */int) (unsigned char)63)))) > (((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_5 [i_1])) << (((/* implicit */int) (_Bool)0))))))));
        var_14 += ((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_1])) > (((/* implicit */int) arr_1 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (arr_0 [i_1])));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    {
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (unsigned char)181)) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_2]))))));
                        var_16 = ((/* implicit */signed char) arr_2 [i_1]);
                        var_17 = ((/* implicit */signed char) min((((int) ((int) 7))), (((/* implicit */int) (signed char)-113))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_5 = 1; i_5 < 20; i_5 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) max((arr_15 [i_1] [i_5]), (arr_15 [i_1] [i_1])))), (((int) (unsigned short)24262))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1]))) : (1674756954U)));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_6 = 1; i_6 < 21; i_6 += 4) 
            {
                arr_18 [i_1] [i_1] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_5])) ? (-1) : (((/* implicit */int) arr_8 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 - 1]))) : (((unsigned int) (unsigned char)255))));
                /* LoopSeq 3 */
                for (unsigned int i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    arr_21 [i_1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)84)) + (((/* implicit */int) (signed char)-127))))) ? (arr_20 [i_5 + 2] [i_5] [i_6] [i_6 - 1]) : (((/* implicit */int) (unsigned char)83))));
                    arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_5 + 1] [i_5])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) (unsigned short)54268))))) : (((/* implicit */int) arr_15 [i_7] [i_5 + 1]))));
                }
                for (int i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
                {
                    arr_26 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_3 [i_6]);
                    arr_27 [i_8] [i_6] [i_5] [i_1] = ((/* implicit */unsigned int) arr_4 [i_1]);
                    var_19 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned int) arr_9 [i_5] [i_5] [i_6 - 1] [i_6 - 1])) != (arr_11 [i_1] [i_1] [i_1] [i_1]))));
                }
                for (int i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (signed char i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        var_20 *= ((/* implicit */_Bool) 12499282680461589918ULL);
                        var_21 = ((/* implicit */_Bool) arr_12 [i_5]);
                        arr_34 [i_1] [i_1] [i_1] [i_9] [i_1] = arr_33 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10];
                        arr_35 [i_1] [i_5 - 1] [i_5 + 1] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1805390037)) ? (((/* implicit */int) arr_29 [i_1] [i_5 + 1] [i_1] [i_9] [i_9] [i_9])) : (arr_17 [i_5] [i_5 - 1] [i_6 + 1] [i_6])));
                    }
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_11])) + (((/* implicit */int) arr_28 [i_5 - 1] [i_5 - 1] [i_6 + 1] [i_6 + 1]))));
                        arr_38 [i_1] [i_5] [i_6] [i_9] [i_6] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_11])) ? (((/* implicit */int) arr_12 [i_6 - 1])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)37))) >= (15207979184728050825ULL))))));
                        var_23 = -19;
                    }
                    for (signed char i_12 = 0; i_12 < 22; i_12 += 1) /* same iter space */
                    {
                        arr_41 [i_1] [i_6] = ((/* implicit */_Bool) (short)-1);
                        arr_42 [i_5 - 1] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) arr_13 [i_5] [i_9]);
                        var_24 = ((/* implicit */short) 7);
                        arr_43 [i_9] [i_12] = ((/* implicit */unsigned long long int) (signed char)-90);
                        var_25 = ((/* implicit */short) arr_4 [i_1]);
                    }
                    for (signed char i_13 = 0; i_13 < 22; i_13 += 1) /* same iter space */
                    {
                        arr_47 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */int) ((12499282680461589918ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_6] [i_6 + 1] [i_6 + 1] [i_6 - 1])))));
                        arr_48 [i_6] [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6] = ((/* implicit */signed char) (unsigned short)24307);
                        var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5] [i_5 - 1] [i_6 + 1] [i_13]))) & (arr_24 [i_1] [i_5 + 2])));
                    }
                    var_27 += ((/* implicit */_Bool) ((signed char) arr_46 [i_5 + 2] [i_5 + 2]));
                }
                arr_49 [i_1] [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_15 [i_1] [i_1])) / (((/* implicit */int) (signed char)79)))) >> (7)));
            }
            for (unsigned char i_14 = 0; i_14 < 22; i_14 += 2) 
            {
                var_28 ^= ((/* implicit */unsigned long long int) arr_10 [i_1] [i_5] [i_14] [i_5 + 2]);
                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) arr_2 [i_1]))));
            }
            for (signed char i_15 = 0; i_15 < 22; i_15 += 4) 
            {
                var_30 *= ((/* implicit */short) -8);
                var_31 = ((/* implicit */signed char) ((unsigned short) ((unsigned long long int) arr_5 [i_5 - 1])));
            }
            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) min((arr_28 [i_1] [i_5] [i_5] [i_5]), (((/* implicit */signed char) arr_40 [i_1] [i_5] [i_5] [i_5] [i_5])))))) || (((/* implicit */_Bool) arr_1 [i_5 - 1]))));
        }
        /* vectorizable */
        for (unsigned short i_16 = 1; i_16 < 20; i_16 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_17 = 0; i_17 < 22; i_17 += 4) 
            {
                for (int i_18 = 0; i_18 < 22; i_18 += 2) 
                {
                    {
                        arr_62 [i_1] [i_16] [i_16] [i_16] [i_18] = -129889865;
                        var_33 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 18259982813708230300ULL)) ? (308709698U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_1] [i_16 + 2] [i_16 + 2] [i_1]))))) >> (((((((/* implicit */_Bool) (unsigned short)11267)) ? (((/* implicit */int) (signed char)-1)) : (-19))) + (2)))));
                    }
                } 
            } 
            var_34 *= ((/* implicit */unsigned long long int) arr_29 [i_16] [i_16 + 2] [i_16] [i_1] [i_1] [i_1]);
        }
        /* LoopSeq 1 */
        for (short i_19 = 0; i_19 < 22; i_19 += 2) 
        {
            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_37 [i_1] [i_1] [i_19] [i_1] [i_19])), (arr_31 [i_19])))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((int) arr_57 [i_1] [i_1] [i_19] [i_1])) : (arr_61 [i_1] [i_1] [i_1] [i_19]))))))));
            var_36 -= max((((/* implicit */unsigned short) (unsigned char)191)), ((unsigned short)16383));
        }
    }
    /* LoopNest 2 */
    for (signed char i_20 = 0; i_20 < 16; i_20 += 2) 
    {
        for (unsigned char i_21 = 1; i_21 < 14; i_21 += 2) 
        {
            {
                arr_72 [i_20] = ((/* implicit */unsigned long long int) ((signed char) arr_53 [i_20] [i_21]));
                var_37 = ((/* implicit */int) ((unsigned short) (_Bool)1));
                var_38 = ((/* implicit */_Bool) (unsigned char)15);
                var_39 += min((((((/* implicit */_Bool) arr_53 [i_21 + 1] [i_21 + 1])) ? (((/* implicit */int) arr_53 [i_21 + 1] [i_21])) : (((/* implicit */int) (signed char)127)))), (((/* implicit */int) max((arr_53 [i_21 + 1] [i_21]), (arr_53 [i_21 + 1] [i_21 + 1])))));
                arr_73 [i_20] [i_21] [i_20] = ((/* implicit */int) (unsigned char)63);
            }
        } 
    } 
}
