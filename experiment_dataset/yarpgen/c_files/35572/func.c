/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35572
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_19 = max((max((((/* implicit */short) (signed char)(-127 - 1))), ((short)-3498))), (((/* implicit */short) (_Bool)1)));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (+(((/* implicit */int) arr_0 [i_0])))))) ? (-607865186) : (((/* implicit */int) (short)-1945))));
        var_21 = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_0 [i_0])))) >= (((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_1 [i_0]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) (unsigned char)0);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_4 = 3; i_4 < 11; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) arr_0 [i_3]);
                        arr_11 [9] [i_1] = ((((/* implicit */int) arr_8 [i_4 + 1] [i_4 - 3] [i_4 - 3] [i_4] [i_4])) >= (((/* implicit */int) arr_8 [i_4 - 3] [i_4 + 2] [i_4 - 3] [i_4 - 3] [i_4 + 2])));
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((signed char) arr_6 [i_2] [i_2] [i_2] [i_4 - 1])))));
                        arr_12 [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_0 [i_2]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned char) arr_1 [i_3]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            var_26 = ((/* implicit */short) (-(var_15)));
                            var_27 = ((/* implicit */signed char) arr_2 [i_2]);
                            var_28 = ((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_5] [i_1] [i_1] [i_1])) != (var_2)));
                            arr_19 [i_1] [i_6] [i_3] [i_1] [i_6] = ((/* implicit */unsigned long long int) (signed char)111);
                            var_29 = ((/* implicit */unsigned long long int) arr_18 [i_6]);
                        }
                    }
                }
            } 
        } 
        var_30 = ((/* implicit */short) ((unsigned long long int) (signed char)-112));
        arr_20 [i_1] = ((/* implicit */unsigned int) arr_8 [i_1] [i_1] [i_1] [i_1] [i_1]);
    }
    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            /* LoopSeq 3 */
            for (signed char i_9 = 2; i_9 < 11; i_9 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_10 = 4; i_10 < 12; i_10 += 2) 
                {
                    var_31 = ((/* implicit */short) ((((/* implicit */int) ((min((607865185), (((/* implicit */int) (short)32767)))) < (((/* implicit */int) min((((/* implicit */short) (unsigned char)211)), (arr_28 [i_7] [i_8] [10LL] [i_10]))))))) ^ (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_16)))))));
                    arr_34 [i_9] [i_9] [i_8] [i_9] = ((/* implicit */short) var_11);
                }
                var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_30 [i_9 + 3] [i_9 + 1] [i_9 - 2] [i_9 + 3] [i_8] [i_9 - 1]) : (((/* implicit */int) arr_22 [i_9 - 1] [i_9 - 2]))))))));
            }
            /* vectorizable */
            for (unsigned char i_11 = 0; i_11 < 14; i_11 += 2) 
            {
                var_33 = ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_11] [i_11] [i_8] [i_7] [i_7])) - (((/* implicit */int) arr_13 [i_7] [i_8] [i_8] [i_11] [i_11]))));
                var_34 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_22 [i_7] [i_7]))));
            }
            /* vectorizable */
            for (unsigned short i_12 = 0; i_12 < 14; i_12 += 2) 
            {
                var_35 = ((/* implicit */unsigned short) arr_7 [i_12] [i_8] [i_7] [i_7]);
                var_36 = ((/* implicit */unsigned int) arr_25 [i_7] [i_7]);
                var_37 = ((/* implicit */short) arr_7 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_12]);
                var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-3027)))))));
                var_39 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (unsigned char)162))))));
            }
            arr_43 [i_7] [i_7] [i_7] = (unsigned short)42183;
        }
        /* vectorizable */
        for (long long int i_13 = 0; i_13 < 14; i_13 += 3) 
        {
            var_40 = ((/* implicit */int) min((var_40), (((((/* implicit */int) (unsigned char)6)) ^ ((+(((/* implicit */int) (signed char)127))))))));
            var_41 = ((/* implicit */unsigned short) (!(((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_13] [(signed char)7] [i_7]))) <= (var_12)))));
        }
        var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) var_7))));
    }
    for (unsigned short i_14 = 0; i_14 < 17; i_14 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (int i_16 = 0; i_16 < 17; i_16 += 3) 
            {
                {
                    arr_53 [i_14] [i_16] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_4)), (arr_49 [i_15]))))) + (((((/* implicit */_Bool) arr_49 [i_14])) ? (arr_48 [i_15]) : (arr_48 [i_14])))));
                    var_43 = ((/* implicit */short) arr_48 [i_15]);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_17 = 1; i_17 < 16; i_17 += 2) 
        {
            var_44 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_52 [i_14])), (arr_1 [i_14])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 607865186)) ? (var_2) : (((/* implicit */int) (unsigned short)42176))))) : (arr_54 [i_14] [i_14]))), (((/* implicit */unsigned long long int) ((int) (unsigned char)127)))));
            var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)38))) : (arr_54 [(unsigned short)3] [i_17])))) ? (((/* implicit */int) arr_51 [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_17 - 1])) : ((~(((/* implicit */int) arr_0 [i_14]))))))) || (((/* implicit */_Bool) max((((/* implicit */int) arr_49 [i_14])), ((~(((/* implicit */int) arr_50 [i_17] [i_14]))))))))))));
        }
        for (int i_18 = 0; i_18 < 17; i_18 += 4) 
        {
            var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) (unsigned short)42183))));
            var_47 = ((/* implicit */unsigned short) ((unsigned int) (signed char)-88));
        }
    }
    var_48 = ((/* implicit */unsigned int) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((var_12) - (246648852U)))));
    var_49 = ((/* implicit */int) (signed char)-75);
    var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? ((+(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
}
