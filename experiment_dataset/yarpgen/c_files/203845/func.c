/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203845
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) * (((unsigned int) -7098781864729918857LL))));
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (+(((/* implicit */int) (_Bool)1)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) (short)5893)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)5893)))) : (((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) var_11))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        arr_8 [i_1] = ((((/* implicit */_Bool) (short)5893)) || (var_7));
        /* LoopSeq 1 */
        for (short i_2 = 2; i_2 < 14; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_13 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (656056853U))));
                arr_14 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-5870)) | (((/* implicit */int) (short)5891))));
                var_14 |= ((/* implicit */long long int) (signed char)-19);
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(-2834385489641735284LL)))) ? (((/* implicit */long long int) ((((((/* implicit */int) (short)-29249)) + (2147483647))) << (((arr_12 [i_1] [i_1]) - (5892112858512798711LL)))))) : (((((/* implicit */_Bool) (unsigned short)38637)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
            }
            for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    arr_20 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)74)) >= (((/* implicit */int) arr_13 [i_5] [i_4] [i_2] [i_1])))) ? (((/* implicit */long long int) arr_9 [i_5] [i_2 + 1])) : (arr_5 [i_2 - 2])));
                    /* LoopSeq 3 */
                    for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-19)) ? (((((/* implicit */_Bool) 1016675355261555370LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26898))) : (arr_10 [i_2]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) (unsigned short)26876)) : (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                        var_17 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3573585015U)) ? (((/* implicit */int) arr_23 [i_5] [i_2] [i_4] [i_5] [i_2] [i_6] [i_4])) : (((/* implicit */int) (short)5891))))) ? (((arr_6 [i_6]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_23 [i_1] [i_1] [i_2] [i_4] [i_5] [i_5] [i_6])))) : (((/* implicit */int) (signed char)-115))));
                    }
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        arr_26 [i_1] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_21 [i_1] [i_2] [i_4] [i_5] [i_7] [i_5] [i_2 + 2])) + (((/* implicit */int) arr_21 [i_1] [i_2] [i_4] [i_5] [i_7] [i_2] [i_2 + 2]))));
                        arr_27 [i_7] [i_5] [i_4] [i_2] [i_1] = ((/* implicit */short) arr_10 [i_1]);
                        var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_24 [i_1] [i_2]) || (((/* implicit */_Bool) arr_11 [i_2] [i_4])))))) > (((((/* implicit */_Bool) -61687388157109012LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_19 [i_1])))));
                    }
                    for (unsigned char i_8 = 1; i_8 < 15; i_8 += 2) 
                    {
                        arr_31 [i_1] [i_2] [i_4] [i_5] [i_5] [i_8] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))));
                        var_19 ^= ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_2 + 1]))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
                    {
                        var_20 *= ((/* implicit */short) (+(((/* implicit */int) (short)-5892))));
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 1152920954851033088LL)) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) (_Bool)0))))));
                        arr_34 [i_9] [i_5] [i_4] [i_2] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_23 [i_2] [i_2 - 2] [i_4] [i_4] [i_9] [i_9] [i_9]))));
                        var_22 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (short)-5892))))));
                    }
                    for (long long int i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
                    {
                        arr_37 [i_1] [i_2] [i_4] [i_5] = ((/* implicit */long long int) (signed char)12);
                        var_23 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)32767))) >= (((((/* implicit */_Bool) 20U)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_10] [i_10] [i_5] [i_4] [i_2] [i_1])))))));
                        arr_38 [i_1] [i_2] [i_4] [i_5] [i_10] |= ((/* implicit */short) ((_Bool) arr_9 [i_2] [i_2 + 2]));
                    }
                    arr_39 [i_1] [i_1] [i_4] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_1] [i_2] [i_2] [i_4] [i_4] [i_5] [i_5])))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        var_24 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) (short)-7361))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)134)) <= (((/* implicit */int) (_Bool)0)))))) : (arr_7 [i_2 - 2] [i_1])));
                        var_25 = (short)5907;
                        var_26 = ((/* implicit */short) ((unsigned short) (signed char)19));
                        arr_43 [i_1] [i_2] [i_4] [i_5] [i_11] [i_11] [i_4] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)0))));
                        var_27 &= ((/* implicit */short) (((((_Bool)0) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_23 [i_1] [i_2] [i_4] [i_4] [i_5] [i_5] [i_11])))) & (((/* implicit */int) (unsigned char)91))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_47 [i_1] [i_2] [i_4] [i_5] [i_12] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)164))));
                        var_28 |= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_1] [i_1] [i_2 - 2] [i_5]))));
                    }
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        arr_51 [i_1] [i_13] [i_2] [i_4] [i_5] [i_5] [i_13] = (!(((/* implicit */_Bool) arr_35 [i_2 - 2] [i_2] [i_2 - 2] [i_2] [i_2 - 2])));
                        arr_52 [i_13] [i_4] [i_13] = ((/* implicit */unsigned short) ((long long int) arr_5 [i_5]));
                    }
                }
                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) arr_24 [i_2] [i_4]))));
            }
            arr_53 [i_1] [i_2] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (arr_45 [i_1] [i_1] [i_2] [i_1] [i_1] [i_2]))));
            var_30 |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) + (((/* implicit */int) arr_21 [i_1] [i_2] [i_1] [i_2] [i_2] [i_1] [i_1]))));
        }
        arr_54 [i_1] &= ((/* implicit */unsigned short) ((unsigned char) var_4));
    }
    var_31 |= ((/* implicit */signed char) max((((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)38659))) & (var_3))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 3573585015U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))))), (((/* implicit */long long int) ((((/* implicit */int) var_7)) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (signed char)(-127 - 1))))))))));
    var_32 &= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)(-127 - 1))), (65535U)));
    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((var_2) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_7))))) : (var_3)))));
}
