/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206874
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -3893016903116020632LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((((/* implicit */_Bool) -3893016903116020635LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_0), (((/* implicit */short) arr_2 [i_0]))))))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned char) arr_4 [i_0] [(_Bool)1] [i_1]);
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        arr_12 [i_1] [i_0] [i_3] = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_8 [i_0]))))));
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)254))))) ? (((/* implicit */int) ((3893016903116020634LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)206)))))) : (((/* implicit */int) arr_10 [i_2] [i_0] [i_2] [i_0] [i_1] [i_2])))))));
                        var_19 = ((/* implicit */unsigned int) max((var_19), (var_5)));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            arr_17 [i_0] [i_0] = ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)126)));
            arr_18 [(unsigned char)12] [i_4] [i_4] |= ((/* implicit */unsigned int) arr_0 [(unsigned char)5]);
            arr_19 [i_0] [(short)6] [(unsigned short)7] = ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_4] [i_4] [i_4]))));
        }
    }
    /* LoopSeq 3 */
    for (short i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) var_0)))))))));
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                for (unsigned int i_8 = 1; i_8 < 13; i_8 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) (unsigned char)19);
                        arr_29 [i_5] [i_6] [i_5] = ((/* implicit */short) max((min((arr_15 [i_6]), (((/* implicit */unsigned int) var_0)))), (0U)));
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((((/* implicit */int) min((arr_0 [i_5]), (((/* implicit */unsigned short) arr_27 [i_6] [i_6] [(unsigned char)10]))))) + ((-(((/* implicit */int) var_4)))))) * (((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) arr_26 [i_6] [0ULL] [i_7])), (var_3))))))))));
                        var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_4 [i_6] [(short)16] [i_6])))))) : (min(((((_Bool)0) ? (((/* implicit */int) (short)8160)) : (((/* implicit */int) (signed char)-104)))), (((/* implicit */int) arr_10 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 2] [i_8 - 1] [i_8 + 2]))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_9 = 1; i_9 < 12; i_9 += 1) 
    {
        var_25 *= ((/* implicit */_Bool) (~(((/* implicit */int) arr_30 [i_9 + 1]))));
        arr_32 [i_9] [i_9] = ((/* implicit */_Bool) (signed char)-55);
        arr_33 [i_9] = ((33554431LL) / (arr_14 [i_9 + 1] [i_9] [17LL]));
    }
    for (unsigned long long int i_10 = 3; i_10 < 21; i_10 += 4) 
    {
        /* LoopNest 3 */
        for (short i_11 = 1; i_11 < 24; i_11 += 1) 
        {
            for (unsigned char i_12 = 0; i_12 < 25; i_12 += 4) 
            {
                for (signed char i_13 = 1; i_13 < 22; i_13 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) arr_47 [i_10] [i_11 + 1] [i_10] [i_10] [5ULL]);
                            arr_48 [i_10 + 3] [i_11] [(signed char)9] [(_Bool)1] [i_11 + 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_35 [i_14]))));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) arr_46 [i_13 + 3] [i_13 + 1] [i_13 + 1] [i_13 + 3] [i_13 + 2])) - (51065)))));
                        }
                        arr_49 [i_12] [i_11 + 1] = ((/* implicit */signed char) (~(((((/* implicit */int) arr_42 [i_10 - 3])) - (((/* implicit */int) arr_42 [i_10 - 1]))))));
                        arr_50 [i_10 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-1)))))))) : (((unsigned long long int) var_12))));
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_10] [i_11] [i_12] [i_13 + 3] [(signed char)21]))) * (var_15))), (((/* implicit */unsigned int) max(((signed char)123), (((/* implicit */signed char) (_Bool)0)))))))) ? (((/* implicit */int) arr_46 [i_10] [(_Bool)1] [(signed char)12] [(_Bool)1] [i_13])) : ((((+(((/* implicit */int) (unsigned char)255)))) + ((-(((/* implicit */int) (signed char)46)))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_15 = 0; i_15 < 25; i_15 += 4) 
        {
            for (signed char i_16 = 4; i_16 < 24; i_16 += 4) 
            {
                {
                    arr_58 [i_10] [i_10] [(signed char)21] [(unsigned char)4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_13)) >> (((-734239755) + (734239780)))))), (((((/* implicit */_Bool) (signed char)-111)) ? (-2494113483482405282LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) && (((/* implicit */_Bool) ((long long int) arr_34 [0U] [(_Bool)1])))));
                    arr_59 [10] [i_15] [i_16 - 4] = ((/* implicit */unsigned int) var_17);
                    var_29 *= ((/* implicit */signed char) ((unsigned int) (unsigned char)120));
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)22))))) - (((((/* implicit */_Bool) arr_40 [10ULL] [i_16 - 4] [i_10 - 3])) ? (-5019355662226301203LL) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_10 + 4] [i_10 - 2])))))));
                }
            } 
        } 
    }
}
