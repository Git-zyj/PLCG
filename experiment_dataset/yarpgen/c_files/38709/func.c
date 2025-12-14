/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38709
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 4; i_1 < 6; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */short) (+(arr_5 [i_1 + 3] [i_2] [i_2] [i_3])));
                        var_12 = ((/* implicit */_Bool) min(((-(((/* implicit */int) arr_4 [i_1 + 4] [i_0])))), (((/* implicit */int) (((+(((/* implicit */int) var_6)))) >= (((/* implicit */int) (short)-32766)))))));
                        var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)43566)) : (((/* implicit */int) (unsigned short)42592))));
                        var_14 &= ((/* implicit */unsigned int) (~(max((max((((/* implicit */long long int) var_1)), (arr_6 [i_3] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) arr_2 [i_3] [i_1 - 1] [i_1 - 1]))))));
                        arr_9 [i_2] = ((/* implicit */int) (unsigned short)25564);
                    }
                } 
            } 
            arr_10 [i_0] [i_0] [5LL] = ((/* implicit */int) ((((/* implicit */_Bool) -8855329185321949775LL)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_9))))) : (((((/* implicit */long long int) min(((-2147483647 - 1)), (((/* implicit */int) var_3))))) + ((-(arr_6 [i_1] [i_1 + 1] [i_1 - 3] [i_1])))))));
        }
        for (int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            var_15 &= ((/* implicit */long long int) max((((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (arr_5 [i_0] [i_4] [i_0] [i_0])))) ? (2U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -103927353)) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_9)))))));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_4])) ? ((+(((/* implicit */int) (unsigned short)53737)))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? ((-(((/* implicit */int) arr_7 [i_0] [i_4] [i_0])))) : (((int) var_2))))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    for (int i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_1)))) : (min((((/* implicit */unsigned int) -103927352)), (4294967287U))))))));
                            var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)8))));
                            arr_21 [i_0] [i_4] [i_0] [i_0] [i_6] [i_7] = ((/* implicit */short) ((unsigned char) (+(((/* implicit */int) arr_4 [(unsigned char)2] [i_4])))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */_Bool) arr_20 [i_4]);
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8U)) ? (arr_5 [i_0] [i_5] [i_5] [i_4]) : (arr_5 [i_5] [i_5] [i_5] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_2), (var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))) : (((/* implicit */int) var_6)))))));
            }
        }
        var_21 = ((/* implicit */short) var_3);
        arr_22 [i_0] = ((/* implicit */unsigned short) (unsigned char)249);
        var_22 &= ((/* implicit */unsigned int) (+((-(arr_12 [i_0])))));
        arr_23 [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) (+(var_10)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), ((-(7U))))))));
    }
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (((+(((/* implicit */int) (!(((/* implicit */_Bool) 9U))))))) & (max(((+(arr_25 [4ULL]))), (((/* implicit */int) ((unsigned short) arr_24 [16U]))))))))));
        var_24 = ((/* implicit */long long int) (~(arr_25 [i_8])));
    }
    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 1) 
    {
        arr_29 [i_9] = ((/* implicit */long long int) max((((/* implicit */int) ((unsigned char) ((arr_26 [13ULL]) + (arr_26 [i_9]))))), (((((((/* implicit */int) arr_27 [i_9])) % (((/* implicit */int) (short)4095)))) >> (((((/* implicit */int) ((unsigned short) arr_26 [i_9]))) - (63598)))))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(arr_26 [i_9])))) * (((15ULL) >> (((((((/* implicit */_Bool) 4294967289U)) ? (arr_26 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) - (4092065858U))))))))));
        /* LoopNest 3 */
        for (long long int i_10 = 0; i_10 < 17; i_10 += 4) 
        {
            for (unsigned char i_11 = 0; i_11 < 17; i_11 += 1) 
            {
                for (unsigned char i_12 = 0; i_12 < 17; i_12 += 4) 
                {
                    {
                        var_26 *= ((/* implicit */unsigned int) (unsigned char)31);
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (-(((long long int) arr_31 [i_12] [i_10] [i_9])))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 1) 
                        {
                            arr_42 [i_12] [i_12] [i_12] [i_12] [11LL] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
                            var_28 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_28 [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) && (((/* implicit */_Bool) ((unsigned short) var_6))))))));
                            arr_43 [i_9] &= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_25 [i_10])) ? ((+(((/* implicit */int) var_6)))) : (((int) (short)4096))))));
                            var_29 *= (unsigned short)30509;
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_36 [13] [i_12] [i_11] [i_12] [i_12]) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_13] [i_13] [i_11] [i_13] [i_13]))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_31 [i_9] [i_9] [0ULL])), (arr_33 [i_10])))) && (((/* implicit */_Bool) arr_35 [i_9] [i_9]))))))))));
                        }
                        for (long long int i_14 = 2; i_14 < 15; i_14 += 1) 
                        {
                            arr_46 [i_9] [i_10] [i_9] [i_12] [i_9] |= ((/* implicit */int) arr_39 [i_10] [i_10] [i_10] [i_14 + 2] [i_10]);
                            var_31 = ((/* implicit */short) arr_25 [i_12]);
                            var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 4294967284U)) ? (arr_40 [i_9] [i_9] [(unsigned short)3] [15LL] [i_9]) : (((/* implicit */int) (short)-29688)))) + (((/* implicit */int) var_8)))))));
                            var_33 = ((/* implicit */long long int) (+((~((-(((/* implicit */int) arr_27 [i_9]))))))));
                            arr_47 [13ULL] [i_10] = ((/* implicit */unsigned long long int) (((+((-(-757644270686176741LL))))) < (arr_34 [i_9] [i_9])));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 2) 
                        {
                            var_34 = ((/* implicit */unsigned short) ((int) arr_26 [i_9]));
                            var_35 = ((/* implicit */long long int) (short)-19259);
                            var_36 |= ((/* implicit */long long int) (-(arr_33 [i_11])));
                            var_37 &= ((/* implicit */unsigned char) arr_39 [i_9] [i_9] [i_11] [i_12] [i_15]);
                            var_38 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-29238))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) 2147483648U)) : (arr_34 [i_10] [i_15])))) : ((~(arr_36 [i_15] [i_15] [i_15] [i_15] [i_15])))));
                        }
                        arr_51 [i_9] [i_9] [i_11] [i_10] = ((/* implicit */int) (~(arr_49 [15] [15] [i_11] [13LL] [i_11] [i_11] [13LL])));
                    }
                } 
            } 
        } 
        arr_52 [i_9] |= ((/* implicit */unsigned int) var_7);
    }
    var_39 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) % (((/* implicit */int) (short)4267))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_8)))) : (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_2))))))))));
}
