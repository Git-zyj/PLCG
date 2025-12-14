/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46292
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
    var_14 = (-((+(var_4))));
    var_15 = ((/* implicit */unsigned char) min((var_7), (((/* implicit */unsigned int) var_1))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 8; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 6756782578493659917LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3849262234U)))) / (18014398509481984LL)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */short) (+(((/* implicit */int) (short)-15))));
                        var_17 = ((/* implicit */unsigned char) arr_1 [i_0]);
                        arr_11 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))));
                    }
                    for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        arr_14 [i_0] [i_0] [i_0 - 2] [i_0] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_2 + 2] [i_0] [i_1]);
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            var_18 = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) (unsigned short)43700)), (4U))), (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_12 [i_5])))) ^ (((/* implicit */int) arr_0 [i_0])))))));
                            arr_17 [i_0] [i_1] [i_0] [i_4] [i_5] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_0 - 1] [i_1 + 2] [i_0 - 1] [i_0 - 1])), (arr_1 [i_0])))) >= (((((/* implicit */_Bool) arr_7 [i_5] [i_4] [i_2] [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0 - 2] [i_0] [i_0]))))))) & ((+(min((arr_16 [i_0] [i_1 - 3] [i_2] [i_4] [i_1 - 3]), (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_4]))))))));
                        }
                        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0 + 1] [i_4])) % (((/* implicit */int) arr_5 [i_0 + 3] [i_1]))))) ? (((((/* implicit */int) arr_0 [i_4])) << (((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2 + 2] [i_1]))));
                        arr_18 [i_0 + 1] [i_0] [i_2] [i_4] = (i_0 % 2 == 0) ? (((/* implicit */short) ((((min(((~(arr_16 [i_0] [i_0] [i_1] [(_Bool)0] [(_Bool)0]))), (((/* implicit */int) min((arr_6 [i_0] [i_1] [i_0] [i_4]), (((/* implicit */short) arr_4 [i_0] [i_0]))))))) + (2147483647))) << (((max((((((/* implicit */int) arr_5 [i_0 - 3] [i_0])) / (((/* implicit */int) arr_12 [i_0 + 3])))), (((/* implicit */int) arr_9 [i_2 + 1] [i_4] [(unsigned short)11] [i_0])))) - (1)))))) : (((/* implicit */short) ((((((min(((~(arr_16 [i_0] [i_0] [i_1] [(_Bool)0] [(_Bool)0]))), (((/* implicit */int) min((arr_6 [i_0] [i_1] [i_0] [i_4]), (((/* implicit */short) arr_4 [i_0] [i_0]))))))) - (2147483647))) + (2147483647))) << (((((max((((((/* implicit */int) arr_5 [i_0 - 3] [i_0])) / (((/* implicit */int) arr_12 [i_0 + 3])))), (((/* implicit */int) arr_9 [i_2 + 1] [i_4] [(unsigned short)11] [i_0])))) - (1))) + (12))))));
                        var_20 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_0 [i_0])))) >= (((/* implicit */int) arr_0 [i_0]))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_1 - 4] [i_2] [i_6])) - (((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_2 + 3] [i_6]))));
                        /* LoopSeq 2 */
                        for (long long int i_7 = 1; i_7 < 11; i_7 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)43700)) ? (((/* implicit */int) (short)-32756)) : (((/* implicit */int) (_Bool)1))))));
                            var_23 = (+(((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_7 - 1])));
                            var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_10 [i_1] [i_1 - 1] [i_2 + 3] [i_0] [i_2]))));
                        }
                        for (signed char i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            arr_26 [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_21 [i_0] [i_1 - 2] [(unsigned short)6] [(unsigned short)6] [i_2] [i_2 + 3]))));
                            var_25 = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_0 + 3] [i_0] [i_1 + 2] [i_0] [i_2 + 1])) % (((/* implicit */int) arr_10 [5U] [i_0] [i_1 - 2] [i_0] [i_2 + 1]))));
                            var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_0 + 1] [i_1 - 1] [i_1 - 1] [i_8]))));
                        }
                        arr_27 [i_0] [1LL] [i_1 - 4] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_1] [i_1 - 2] [i_1 - 2] [i_2 + 1] [i_2 + 1]))));
                        var_27 = ((/* implicit */int) arr_13 [i_0] [(signed char)5] [2LL] [i_1 + 3]);
                    }
                    for (unsigned int i_9 = 4; i_9 < 9; i_9 += 2) 
                    {
                        var_28 = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_13 [i_0] [i_1 - 3] [i_1 - 4] [i_1 - 1]))))));
                        var_29 = ((/* implicit */unsigned int) min((arr_25 [0LL] [0LL] [i_2] [i_2 + 3] [i_0] [i_9] [i_9 - 1]), ((+(((/* implicit */int) arr_5 [i_0 + 2] [i_0]))))));
                    }
                    arr_30 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_0 - 3] [i_1 + 2] [i_0] [i_2 + 3])) ? (((/* implicit */int) arr_4 [4U] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_1] [10] [i_0])))))))), (min((arr_6 [i_0] [i_1] [i_0] [i_1]), (arr_6 [i_0] [i_1 - 4] [i_0] [i_2 + 2])))));
                    var_30 = ((/* implicit */short) max(((signed char)-94), ((signed char)86)));
                }
            } 
        } 
        arr_31 [i_0] = ((/* implicit */short) (((-(((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 3] [i_0] [i_0])))) > (((/* implicit */int) ((arr_25 [i_0] [i_0 - 1] [i_0] [i_0 + 3] [i_0] [i_0] [i_0]) >= ((~(((/* implicit */int) (unsigned short)21824)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 2; i_10 < 23; i_10 += 2) 
    {
        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((((/* implicit */unsigned long long int) arr_32 [i_10 + 1])) - (arr_34 [i_10 + 1])))));
        var_32 = ((/* implicit */unsigned char) (~(arr_32 [i_10 - 2])));
    }
    for (unsigned long long int i_11 = 3; i_11 < 12; i_11 += 2) 
    {
        /* LoopSeq 4 */
        for (int i_12 = 0; i_12 < 14; i_12 += 2) /* same iter space */
        {
            var_33 = ((/* implicit */short) arr_36 [i_11]);
            var_34 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(2682896727U)))) / (((((/* implicit */_Bool) arr_35 [i_12] [i_12])) ? (arr_34 [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_11] [i_12])))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_12]))) : (((arr_32 [i_11 - 2]) % (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_12])))))));
            var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (!(((((/* implicit */unsigned long long int) ((-1678058270244560717LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43683)))))) <= ((~(arr_34 [(signed char)0]))))))))));
            arr_39 [i_11] [i_11] = ((/* implicit */long long int) arr_38 [i_11]);
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 14; i_13 += 2) /* same iter space */
        {
            var_36 = ((/* implicit */short) ((arr_34 [i_11 - 1]) | (arr_34 [i_11 + 1])));
            /* LoopNest 2 */
            for (short i_14 = 0; i_14 < 14; i_14 += 2) 
            {
                for (int i_15 = 1; i_15 < 12; i_15 += 2) 
                {
                    {
                        var_37 += ((/* implicit */unsigned char) ((arr_45 [i_13] [i_11 + 2] [i_11 + 1] [i_11 - 3]) | (arr_45 [i_13] [i_11 - 2] [i_11 - 1] [i_11 + 1])));
                        arr_47 [i_11] [i_13] [i_14] [i_14] [i_15 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_11 - 3])) ? (((/* implicit */int) arr_43 [i_11])) : (((/* implicit */int) arr_43 [i_11]))));
                        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) arr_40 [i_11 - 1]))));
                    }
                } 
            } 
        }
        for (short i_16 = 1; i_16 < 12; i_16 += 2) 
        {
            arr_51 [i_11 + 1] [i_11] [i_11 + 1] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_40 [i_11 - 1])) | (((/* implicit */int) arr_40 [i_11 - 1])))) | (((((/* implicit */int) arr_40 [i_11 + 1])) & (((/* implicit */int) arr_40 [i_11 - 3]))))));
            var_39 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)43683)))))));
            arr_52 [i_11] [i_11] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_46 [i_16 - 1] [i_16 + 2])) > (((/* implicit */int) arr_46 [i_16 + 1] [i_16 + 1])))))));
            var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) max((((((/* implicit */long long int) ((/* implicit */int) (short)4096))) / ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) arr_37 [i_11 + 2])))))));
        }
        /* vectorizable */
        for (unsigned int i_17 = 1; i_17 < 13; i_17 += 2) 
        {
            arr_56 [i_11] [i_11] = ((/* implicit */_Bool) (+(4294967276U)));
            var_41 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_44 [i_11 + 1] [i_17] [i_11] [i_17]))));
            arr_57 [i_11 + 1] [i_11] = ((/* implicit */signed char) (~(((/* implicit */int) arr_35 [i_11] [i_17 - 1]))));
            var_42 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_45 [i_11] [i_11 + 1] [i_11] [i_11]))));
        }
        var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) / ((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)14)) + (((/* implicit */int) (unsigned char)14))))) : (9223372036854775791LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)16877)))));
    }
    var_44 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) (!(var_2)))) : ((-(((/* implicit */int) var_1))))))), (var_9)));
}
