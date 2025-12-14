/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222808
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
    var_18 = ((/* implicit */unsigned int) var_14);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 4; i_2 < 20; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */_Bool) 9829799084480935527ULL);
                            arr_13 [18LL] [i_1] [i_1] [3LL] [i_4] = ((/* implicit */long long int) (-(var_3)));
                        }
                        for (long long int i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned int) ((9223372036854775785LL) >> (((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2])) >> (((((/* implicit */int) arr_8 [i_1] [i_2] [14LL] [14LL])) + (94)))))));
                            arr_16 [(signed char)15] [i_3] [i_5] = ((/* implicit */unsigned char) arr_7 [i_0] [14] [i_0] [14] [i_0] [19U]);
                        }
                        for (int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            var_21 = ((/* implicit */long long int) (_Bool)0);
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 11U)) && (((/* implicit */_Bool) (~(912533503583943996ULL))))));
                            var_23 += ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [0ULL] [i_3] [i_6]))) / (((((/* implicit */_Bool) arr_14 [i_6] [4] [i_2] [i_3])) ? (9223372036854775785LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32765))))));
                            arr_19 [i_6] [i_6] [i_2] [i_6] [i_6] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_2 - 2] [i_2 - 1] [(unsigned short)18] [i_2 - 2] [i_2 - 4] [i_0]))));
                        }
                        for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            var_24 = ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2 - 3] [(signed char)0])) ? (((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_2 - 3] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_14 [i_3] [i_0] [i_2] [i_2 - 4])));
                            arr_23 [4U] [(signed char)3] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((short) 9223372036854775794LL));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 65404704)) ? (arr_5 [18U] [i_3] [i_2] [20]) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_3]))))) ? (arr_7 [i_7] [i_3] [i_2 - 4] [i_2 - 2] [i_2] [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_2]))) >= (4194303U))))))))));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_26 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                            var_27 = var_3;
                        }
                        for (long long int i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            arr_29 [11] [(_Bool)1] [i_9] [i_9] [i_9] [i_0] [18LL] = ((/* implicit */short) arr_18 [i_9] [i_3] [i_3] [i_0] [i_1] [i_0]);
                            var_28 = ((/* implicit */unsigned int) (_Bool)0);
                        }
                        arr_30 [i_1] [i_1] [i_1] [12U] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) 3790120018U)) ? (((/* implicit */unsigned int) arr_27 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] [i_3])) : (var_3))));
                        var_29 *= ((/* implicit */unsigned char) var_5);
                    }
                } 
            } 
            arr_31 [i_1] [i_0] = 24U;
        }
        /* vectorizable */
        for (unsigned long long int i_10 = 2; i_10 < 20; i_10 += 4) 
        {
            arr_35 [i_10] [i_10] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17534210570125607615ULL)) ? (arr_7 [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 - 1] [i_0] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 912533503583944017ULL)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) arr_1 [i_0] [i_10])))))));
            var_30 = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_17)))) + (((/* implicit */int) var_6))));
            var_31 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_0] [i_10] [i_10 - 2] [i_0])) / (((/* implicit */int) arr_14 [1U] [i_10 - 1] [i_10 + 1] [13LL]))));
            /* LoopSeq 1 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                arr_38 [i_0] [i_10] [i_11] [i_0] = ((/* implicit */signed char) (-(arr_27 [i_10 - 2] [i_10 - 2] [i_10 - 1] [i_11] [(signed char)9] [(unsigned char)11] [i_11])));
                var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)75)) ? (18446744073709551592ULL) : (17534210570125607616ULL)));
                arr_39 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_0] [i_10 + 1] [i_11] [i_10 - 2])) ? (((/* implicit */int) arr_22 [i_0] [i_10 - 2] [i_11] [i_11])) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_11] [i_11]))));
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 21; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */int) arr_21 [i_0] [i_10] [i_11]);
                            var_34 = ((/* implicit */_Bool) min((var_34), ((!(((/* implicit */_Bool) arr_37 [i_10] [i_10] [i_13]))))));
                        }
                    } 
                } 
            }
            var_35 = ((/* implicit */unsigned int) var_1);
        }
        for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 2) 
        {
            arr_48 [i_14] [i_14] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_14] [i_14] [i_0])))))));
            var_36 = ((/* implicit */unsigned int) min((var_36), (((((/* implicit */unsigned int) arr_46 [i_0] [i_14])) | (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_20 [i_0] [i_0] [i_14] [18LL] [i_0])), (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((arr_34 [(signed char)1] [i_14] [(signed char)1]) - (var_9)))))))));
        }
        arr_49 [i_0] [i_0] = ((/* implicit */signed char) 912533503583944011ULL);
    }
    for (unsigned char i_15 = 0; i_15 < 11; i_15 += 3) 
    {
        arr_52 [i_15] [(signed char)0] |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (short)-11491)), (((((/* implicit */unsigned long long int) -1257854899)) ^ (((2655169717340065478ULL) & (((/* implicit */unsigned long long int) var_7))))))));
        arr_53 [i_15] = ((/* implicit */int) min((((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)251)), (arr_33 [(unsigned char)4] [i_15] [i_15])))) ? (((((/* implicit */_Bool) arr_8 [16LL] [16LL] [(signed char)18] [i_15])) ? (912533503583944011ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-11))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1376776523)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_15])))))))), (((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-121)), (-65404705)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_15] [i_15] [i_15] [i_15] [i_15]))) : (min((((/* implicit */unsigned long long int) arr_26 [i_15] [i_15] [(unsigned short)4] [(unsigned short)4])), (4503599627370464ULL)))))));
    }
    var_37 = ((/* implicit */int) var_15);
    var_38 = ((/* implicit */unsigned long long int) max((var_38), (var_14)));
}
