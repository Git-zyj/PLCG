/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24528
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-20440)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (_Bool)1))));
    var_15 = ((/* implicit */_Bool) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (var_12)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */int) (short)18)) & (((/* implicit */int) (unsigned char)253))));
        var_17 = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])) * (((/* implicit */int) arr_0 [i_0 - 3] [i_0]))))));
        var_18 ^= ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0] [i_0 + 4])), (arr_1 [i_0 - 1])))) ^ (((((/* implicit */int) arr_1 [i_0 + 2])) ^ (((/* implicit */int) (_Bool)1))))));
        var_19 += ((/* implicit */_Bool) (-((~(((((/* implicit */int) arr_0 [i_0] [i_0])) >> (((/* implicit */int) var_9))))))));
        var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) max((arr_0 [i_0 + 2] [i_0]), (((/* implicit */unsigned char) var_0))))) : ((((_Bool)1) ? (((/* implicit */int) (short)-19)) : (((/* implicit */int) var_2)))))), (((((/* implicit */int) (short)-1)) % (((/* implicit */int) var_4))))));
    }
    for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        var_21 += ((/* implicit */short) ((((/* implicit */int) min((max(((unsigned short)61331), (((/* implicit */unsigned short) arr_2 [(unsigned short)5])))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1 + 2])) && (((/* implicit */_Bool) arr_1 [(signed char)0])))))))) > (((((/* implicit */int) arr_3 [i_1 + 1] [(signed char)4])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [(unsigned short)10])))))))));
        var_22 -= ((/* implicit */unsigned char) arr_2 [i_1]);
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */int) (_Bool)0)), (((((/* implicit */int) ((signed char) arr_4 [i_1]))) ^ (((/* implicit */int) (unsigned char)240))))));
        var_23 ^= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) min(((unsigned char)140), ((unsigned char)143)))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) ((unsigned short) (short)-1))))));
    }
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_2 [i_2])))))));
        var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) arr_8 [i_2])))));
        arr_9 [(unsigned char)16] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_2] [i_2]))))) ? (((/* implicit */int) ((signed char) var_13))) : (((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_11))) >= (((/* implicit */int) arr_1 [i_2])))))));
    }
    for (signed char i_3 = 1; i_3 < 15; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            for (signed char i_5 = 1; i_5 < 14; i_5 += 2) 
            {
                {
                    arr_20 [(short)11] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_8 [(unsigned short)11])), (arr_6 [i_3])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (arr_7 [i_3])))) : ((~(((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_3 + 1]))))));
                    var_26 = ((/* implicit */unsigned char) max((var_26), (var_8)));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */short) ((_Bool) ((var_4) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)1349)))));
                                var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)4193)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) arr_2 [i_3 - 1])))) << (((((((((/* implicit */_Bool) (short)10)) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) (unsigned char)221)))) << (((((/* implicit */int) arr_7 [i_3])) - (49898))))) - (18411)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 3 */
        for (short i_8 = 3; i_8 < 15; i_8 += 3) 
        {
            arr_28 [i_3] [i_8] [i_3] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((short) (unsigned short)61333))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (signed char)21))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)107)))))))));
            var_29 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */int) arr_7 [i_3])) < (((/* implicit */int) arr_17 [i_8] [i_3] [i_8] [i_8]))))) - (((/* implicit */int) (short)64)))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_26 [i_8 - 1] [i_3] [i_3])) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) min((arr_13 [i_3] [i_3] [(unsigned char)6]), ((unsigned char)24)))) : (((((/* implicit */int) (unsigned short)50343)) / (((/* implicit */int) arr_23 [(short)9] [i_3] [i_8] [i_3]))))))));
            var_30 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)22))) ? ((((_Bool)0) ? (((/* implicit */int) arr_22 [i_3] [i_3] [(unsigned short)14] [i_8])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((_Bool) arr_10 [i_3]))))))));
        }
        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_10 = 2; i_10 < 14; i_10 += 1) 
            {
                for (unsigned char i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    for (unsigned short i_12 = 3; i_12 < 14; i_12 += 1) 
                    {
                        {
                            arr_39 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-27190)), (min((arr_1 [i_3]), (((/* implicit */unsigned short) (_Bool)1)))))))));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) ((unsigned short) arr_3 [i_11] [i_3]))) : ((+(((/* implicit */int) ((short) arr_33 [i_3] [i_9] [i_12])))))));
                            arr_40 [(signed char)8] [i_9] [i_10] [i_11] [i_3] [i_11] [(unsigned char)9] = ((/* implicit */_Bool) (signed char)-6);
                            arr_41 [i_3] [i_9] [i_10] [i_11] [i_3] = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */short) var_0)), (var_10)))) <= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)253)) || (((/* implicit */_Bool) (unsigned char)65)))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_13 = 0; i_13 < 16; i_13 += 3) 
            {
                for (unsigned short i_14 = 4; i_14 < 14; i_14 += 4) 
                {
                    {
                        var_32 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (short)30410)))) >= (((/* implicit */int) (unsigned short)65504))));
                        arr_47 [i_3] [i_9] [i_3] [i_9] [i_14] [(short)7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_2 [i_14])), (var_8)))) ? (((/* implicit */int) ((unsigned short) var_11))) : (((((/* implicit */_Bool) arr_18 [i_3])) ? (((/* implicit */int) (unsigned char)135)) : (((/* implicit */int) arr_2 [(unsigned char)18])))))))));
                    }
                } 
            } 
            var_33 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_10 [i_9])) != (((/* implicit */int) (short)13946)))) || (((_Bool) arr_3 [(unsigned short)11] [i_3]))));
        }
        /* vectorizable */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_34 ^= ((/* implicit */unsigned char) var_7);
            var_35 = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_10)))));
            var_36 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_34 [(short)0] [(unsigned char)10] [i_3 + 1] [i_3 + 1] [i_3 + 1])) > ((~(((/* implicit */int) (short)-8749))))));
            var_37 ^= ((/* implicit */unsigned short) ((unsigned char) (+(((/* implicit */int) arr_3 [(signed char)16] [(signed char)16])))));
            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_15 [i_3] [(unsigned char)13])) : (((/* implicit */int) arr_19 [i_3]))))) ? (((/* implicit */int) arr_18 [i_3])) : (((/* implicit */int) var_5))));
        }
        var_39 ^= ((/* implicit */signed char) min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) min((arr_1 [i_3 + 1]), (((/* implicit */unsigned short) var_8)))))));
    }
}
