/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203287
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
    var_12 &= ((/* implicit */int) (~(min((var_9), (min((((/* implicit */unsigned int) var_6)), (var_1)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) var_0);
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        arr_10 [(signed char)9] [(signed char)9] [(signed char)9] [i_2] [i_3] [i_3] = ((/* implicit */signed char) (_Bool)1);
                        arr_11 [5U] [i_1] [1LL] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_4)), ((+(9223372036854775805LL)))));
                    }
                } 
            } 
            arr_12 [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) (signed char)31)), (max((((/* implicit */long long int) arr_1 [i_0])), (((long long int) (signed char)15))))));
        }
        for (int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            arr_17 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_0] [i_4] [i_4] [i_4]))))) ? (((/* implicit */int) ((_Bool) arr_5 [i_4]))) : ((+(arr_15 [i_4] [i_4] [i_4])))));
            arr_18 [i_0] = (-(((/* implicit */int) var_8)));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                for (int i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    {
                        arr_23 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-31)) ? (((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (3815436592U))) : (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_6])))) * (((/* implicit */int) (_Bool)0)))))));
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_26 [i_0] [i_0] [9U] [i_5] [i_6] [i_7] = ((/* implicit */short) ((signed char) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) << (((((/* implicit */int) (unsigned short)256)) - (256))))));
                            arr_27 [i_6] [2] [i_5] [2] [2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [8U] [8U]))))), (((((/* implicit */int) (unsigned char)117)) * (((/* implicit */int) (unsigned char)2))))))) ? (((/* implicit */int) arr_20 [i_4] [i_5] [2LL])) : (max((((/* implicit */int) (unsigned char)3)), (2147483647)))));
                        }
                        for (int i_8 = 2; i_8 < 11; i_8 += 3) 
                        {
                            arr_30 [i_0] [i_0] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_6)))) / (((/* implicit */int) var_6))))) ? (1073479680U) : (((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) arr_13 [i_4] [i_4] [i_4]))))))))));
                            arr_31 [i_0] [i_4] [i_5] [i_8] [i_5] [i_8] [(signed char)1] = ((/* implicit */int) 3916433978U);
                            arr_32 [i_6] [i_6] [i_8] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) arr_1 [i_8])), (378533347U)))));
                            arr_33 [i_0] [i_4] [4ULL] [i_8] [i_8] = arr_16 [i_8 + 4] [i_8 + 4] [8];
                            arr_34 [i_0] [i_4] [i_4] [i_6] [i_0] = ((/* implicit */short) (unsigned short)54094);
                        }
                    }
                } 
            } 
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_37 [i_0] [i_9] [i_9] = (~(min((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) var_7)) : (4398046511103LL))), (((/* implicit */long long int) ((_Bool) arr_1 [i_0]))))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 15; i_10 += 3) 
            {
                for (unsigned int i_11 = 0; i_11 < 15; i_11 += 3) 
                {
                    {
                        arr_43 [i_0] [i_0] [i_0] [i_0] &= 3916433960U;
                        /* LoopSeq 4 */
                        for (signed char i_12 = 2; i_12 < 14; i_12 += 1) 
                        {
                            arr_46 [i_10] [(unsigned char)5] [i_10] [i_12] = ((/* implicit */signed char) (_Bool)1);
                            arr_47 [i_0] [i_0] [i_0] [i_0] [i_12] [i_0] [i_10] &= ((/* implicit */short) ((((/* implicit */int) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) var_8)))))) / (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((unsigned short) arr_20 [i_9] [i_10] [i_11]))) : (2147483647)))));
                            arr_48 [i_0] [i_9] [i_10] [i_10] [0U] [i_11] [i_12 + 1] = (unsigned short)53198;
                            arr_49 [i_0] [(unsigned char)4] [i_10] [i_10] [(_Bool)1] [i_12] [i_12] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((arr_42 [2] [2] [i_9] [i_10] [i_11] [i_12]) > (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) > (((/* implicit */int) ((signed char) arr_19 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */int) arr_9 [i_12 + 1] [i_9] [i_10] [i_12 + 1] [i_12 - 2])) * (((/* implicit */int) arr_9 [i_12 + 1] [i_9] [i_9] [i_12 + 1] [0U])))) : (((int) (signed char)-16))));
                            arr_50 [i_0] [i_10] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((int) max(((-2147483647 - 1)), (((/* implicit */int) arr_3 [i_9] [9] [i_12]))))) < (((/* implicit */int) arr_4 [i_10]))));
                        }
                        for (signed char i_13 = 0; i_13 < 15; i_13 += 1) 
                        {
                            arr_54 [i_0] [i_10] [i_0] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) 65535LL);
                            arr_55 [i_10] [i_10] = ((max((arr_39 [i_0] [i_0] [i_11] [i_13]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */int) arr_45 [i_10] [i_9] [i_10] [i_11] [i_10])) : (((/* implicit */int) (signed char)-16))))))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)54094)) - (min((((/* implicit */int) arr_4 [i_11])), (arr_15 [i_0] [i_0] [i_10])))))));
                        }
                        for (short i_14 = 1; i_14 < 13; i_14 += 3) 
                        {
                            arr_59 [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (378533332U)))) ? (1ULL) : (((/* implicit */unsigned long long int) -2147483629)))))));
                            arr_60 [i_0] [(_Bool)1] [i_10] [i_10] [11U] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)0)), (arr_3 [i_0] [i_10] [i_10])))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(short)6] [i_10] [(short)6]))) / (arr_42 [i_0] [i_9] [i_9] [0ULL] [i_14] [i_14])))) : (var_5))) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_58 [i_14] [(_Bool)1] [i_10] [i_14] [i_14 + 2] [(_Bool)1]))))));
                            arr_61 [i_9] [i_10] [i_9] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_19 [i_14 + 2] [i_14 + 2] [i_14 + 2])) ? (arr_19 [i_14 - 1] [i_14] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [(signed char)1] [i_14] [i_14 - 1] [i_14 - 1] [i_10])))))));
                            arr_62 [i_0] [i_14] [i_10] [i_10] [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)20))));
                            arr_63 [i_0] [i_10] [i_10] [i_10] [i_0] = ((/* implicit */_Bool) min((((4294967290U) * (0U))), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                        }
                        for (unsigned char i_15 = 0; i_15 < 15; i_15 += 4) 
                        {
                            arr_67 [i_0] [i_0] [i_0] [i_15] |= ((/* implicit */unsigned short) ((short) ((unsigned int) (unsigned char)117)));
                            arr_68 [i_0] [i_0] [i_0] [i_0] [i_15] = ((var_11) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)255))))) : (((((/* implicit */int) arr_51 [i_0] [i_0] [i_0] [i_15])) ^ (((/* implicit */int) (_Bool)1)))));
                            arr_69 [(unsigned short)11] [i_9] [i_10] [i_10] [i_9] = ((/* implicit */long long int) (unsigned short)54069);
                        }
                    }
                } 
            } 
            arr_70 [i_9] [i_9] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)117))));
        }
    }
    for (signed char i_16 = 0; i_16 < 23; i_16 += 3) 
    {
        arr_74 [i_16] = ((/* implicit */_Bool) var_3);
        arr_75 [i_16] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_72 [i_16]))));
    }
    var_13 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_11))))) < (max((((/* implicit */unsigned int) (signed char)15)), (var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) 2147483628)))))) : (((/* implicit */int) var_11))));
}
