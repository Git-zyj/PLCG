/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226126
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) var_9))))) <= ((+(((((/* implicit */_Bool) (unsigned char)0)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
    var_11 = ((/* implicit */_Bool) var_8);
    var_12 = ((/* implicit */_Bool) min((var_12), (((max((var_1), (((/* implicit */long long int) var_5)))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
    var_13 = ((/* implicit */_Bool) ((((var_6) / (((/* implicit */int) var_2)))) | (var_5)));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_14 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)255))))) >> (((-6767574822725517967LL) + (6767574822725517983LL))))))));
            /* LoopNest 2 */
            for (signed char i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        arr_8 [20LL] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) arr_5 [14LL] [i_1]);
                        arr_9 [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) arr_0 [i_1 - 1] [i_1 - 1]);
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 2; i_4 < 20; i_4 += 1) 
                        {
                            arr_13 [i_3] [i_3] [i_1] [i_3] [i_3] = ((/* implicit */signed char) var_3);
                            arr_14 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) | ((~(((/* implicit */int) arr_2 [i_1]))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 1; i_5 < 21; i_5 += 3) 
                        {
                            arr_18 [i_1] [i_5 - 1] [i_2 + 3] [i_2 + 3] [12LL] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_1] [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_15 [i_1] [i_1 - 1] [i_1])) : (((/* implicit */int) arr_15 [i_1] [i_1 - 1] [i_1]))));
                            arr_19 [i_5] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (+((-(-6767574822725517964LL)))));
                            var_15 = ((/* implicit */_Bool) max((var_15), (((((((/* implicit */int) arr_11 [(unsigned char)16] [i_1 - 1] [i_1] [i_3] [i_5] [2] [i_5])) & (((/* implicit */int) (unsigned short)65535)))) <= (((/* implicit */int) arr_7 [i_2 + 3] [i_5] [i_5 + 1] [i_5 - 1] [i_2 + 3]))))));
                        }
                        for (unsigned char i_6 = 4; i_6 < 19; i_6 += 4) 
                        {
                            var_16 = ((/* implicit */_Bool) arr_10 [i_0] [i_1 - 1] [(signed char)11] [21] [i_6] [i_0] [i_2]);
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) max(((unsigned short)1), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) ((unsigned char) arr_21 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_0])))))) ? (((/* implicit */int) ((arr_20 [i_6] [i_6 + 1] [i_6] [i_6 + 2] [i_1]) == (arr_20 [i_6 - 2] [i_6 - 4] [i_6] [i_6 + 3] [i_0])))) : (((((((/* implicit */int) (short)-17540)) >= (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */int) (unsigned char)24)) << (((((/* implicit */int) var_7)) + (76))))) : (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_3]))))))));
                        }
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) 10LL)) && (((/* implicit */_Bool) var_9)))) || (((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [i_1 - 1])))))));
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned char) (short)7883);
        }
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_24 [i_7] [i_7] [i_0 + 1])) == (((/* implicit */int) arr_17 [i_0] [i_0] [(_Bool)1] [i_7] [i_7])))) ? (((/* implicit */int) var_7)) : (((arr_1 [i_7]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_7] [i_7] [i_0])))))))));
            arr_27 [i_0 + 1] [i_0 + 1] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))));
            var_21 *= arr_17 [i_7] [i_7] [i_0] [i_7] [i_0];
            var_22 = ((/* implicit */long long int) ((((((((/* implicit */int) arr_10 [i_0] [i_0] [i_7] [i_7] [i_7] [i_7] [i_7])) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) ((((/* implicit */int) (unsigned short)65521)) > (arr_20 [i_7] [i_7] [i_7] [0] [i_7]))))));
        }
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0 - 1] [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_17 [i_0] [i_0 - 1] [i_0] [(_Bool)1] [i_0 + 1])) : (((/* implicit */int) (unsigned short)0))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)0))))) ? ((-(arr_26 [i_0 + 1] [13ULL]))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0] [i_0]))))))))))));
        var_24 = ((/* implicit */unsigned char) max((2863683010U), (((/* implicit */unsigned int) (signed char)12))));
        /* LoopSeq 2 */
        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            arr_32 [i_8] [i_0 + 2] [i_0] = ((/* implicit */unsigned char) ((max(((~(2072184897))), (((/* implicit */int) (signed char)13)))) * ((~(((/* implicit */int) (unsigned short)52543))))));
            arr_33 [i_0] [i_0] [i_8] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_7 [(unsigned char)3] [i_0 - 1] [i_0 - 1] [i_8] [i_8])) | (((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0])))), (((((/* implicit */int) arr_7 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2])) / (((/* implicit */int) (_Bool)1))))));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) & (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))))));
            arr_34 [i_0] = ((/* implicit */_Bool) max((arr_3 [i_0]), (((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_8])) != (((/* implicit */int) (unsigned char)255)))))));
        }
        for (long long int i_9 = 1; i_9 < 21; i_9 += 2) 
        {
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (3558622461U))))));
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 22; i_10 += 3) 
            {
                for (unsigned char i_11 = 2; i_11 < 21; i_11 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 1; i_12 < 19; i_12 += 4) 
                        {
                            arr_44 [i_9] [i_9] [i_9] [i_9] [i_10] [i_9] [i_9] = ((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) arr_3 [i_12 + 3]))))));
                            var_27 = ((/* implicit */unsigned char) (!(((((/* implicit */int) (unsigned char)207)) <= (((/* implicit */int) (_Bool)1))))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_13 = 3; i_13 < 21; i_13 += 4) 
                        {
                            arr_49 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0 - 1])) > (((/* implicit */int) (unsigned char)254))));
                            arr_50 [i_11] [i_11] [8] |= ((/* implicit */unsigned int) ((unsigned char) (unsigned short)39903));
                        }
                        arr_51 [i_0] [i_11] |= ((/* implicit */long long int) ((((/* implicit */long long int) min((3392088651U), (((/* implicit */unsigned int) (~(var_3))))))) != (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0)) && ((_Bool)0))))) / (max((((/* implicit */long long int) var_2)), (17LL)))))));
                    }
                } 
            } 
        }
    }
}
