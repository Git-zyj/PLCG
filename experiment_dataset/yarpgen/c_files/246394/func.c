/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246394
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
    var_17 ^= ((/* implicit */_Bool) ((((var_12) >= (((/* implicit */long long int) ((/* implicit */int) var_10))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((short) (unsigned short)65535)))));
    var_18 = ((/* implicit */short) (-(((unsigned int) (short)-27836))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)31374)) ? (arr_4 [i_1] [i_1 - 1] [i_0]) : (arr_4 [i_1] [(unsigned short)4] [i_1 + 1]))))));
            var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_0 - 1]))))));
            /* LoopSeq 4 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                arr_9 [i_0] [i_0 - 1] [i_0] = ((/* implicit */_Bool) var_4);
                var_21 = (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)16796))))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_22 += ((/* implicit */short) ((arr_2 [i_0 - 1]) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) (short)-29718))));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 1; i_5 < 8; i_5 += 1) 
                    {
                        var_23 = arr_14 [i_4] [i_1 + 2] [i_3] [i_4] [i_5];
                        arr_16 [i_0] [i_1] [i_0] [i_4] [i_4] [i_5 + 2] = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) (unsigned char)3)) < (((/* implicit */int) (unsigned short)30847)))));
                        arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 1] [i_5 + 1] [i_5 + 1] [i_5])) ^ (((/* implicit */int) (short)8955))));
                    }
                }
                for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)54159)) ? (((/* implicit */long long int) arr_5 [i_0 - 1] [i_1] [i_1 - 1])) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)182)))))));
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((unsigned short) ((short) arr_12 [0U] [i_3] [i_1 + 2] [2LL] [i_0]))))));
                }
                for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
                {
                    arr_24 [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) (short)-29296);
                    arr_25 [i_0] [i_1] [i_1 + 3] [i_3] [i_7] |= ((/* implicit */unsigned short) ((((/* implicit */int) (short)(-32767 - 1))) & (((/* implicit */int) (short)-15675))));
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) || (((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_0 - 1]))));
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)17963)) ? (((/* implicit */int) (short)-8968)) : (((/* implicit */int) (short)-29273))));
                }
                var_28 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45163))) >= (291298210U)));
                /* LoopSeq 2 */
                for (short i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
                {
                    arr_28 [(short)5] [(short)0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)23510))));
                    /* LoopSeq 1 */
                    for (short i_9 = 1; i_9 < 7; i_9 += 4) 
                    {
                        arr_31 [i_0] [i_9] [i_0] [i_0] [(unsigned char)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_27 [i_0] [4LL] [i_0] [i_0] [i_0 - 1]))));
                        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) arr_19 [i_0 - 1] [(short)6] [6LL] [i_0] [i_8]))));
                    }
                }
                for (short i_10 = 0; i_10 < 10; i_10 += 2) /* same iter space */
                {
                    arr_36 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_30 [(_Bool)1] [i_1] [i_1 - 2] [i_3] [i_0])) | (((((/* implicit */int) (short)-23014)) + (((/* implicit */int) (short)(-32767 - 1)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        var_30 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4878)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)65535)))))));
                        arr_39 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_11] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_30 [i_0] [i_1] [(unsigned short)9] [i_10] [i_0])) || (var_15))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8737))) : (0U)));
                        arr_40 [i_0] [i_1] [i_0] = ((/* implicit */short) ((unsigned short) (unsigned short)62126));
                        var_31 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                    }
                }
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_0 - 1] [i_1 + 3] [i_1])) ? (((/* implicit */int) arr_12 [i_0 - 1] [i_1 + 3] [i_1 - 1] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_12 [i_0 - 1] [i_1 + 3] [i_1] [i_1 + 1] [i_3]))));
            }
            for (long long int i_12 = 0; i_12 < 10; i_12 += 2) 
            {
                var_33 |= ((/* implicit */short) ((((/* implicit */int) (short)3109)) < (((/* implicit */int) (short)-20873))));
                var_34 = ((/* implicit */short) max((var_34), (arr_23 [i_12] [i_1 + 1])));
            }
            for (unsigned char i_13 = 0; i_13 < 10; i_13 += 2) 
            {
                var_35 = ((/* implicit */short) (-(((long long int) var_12))));
                var_36 = ((/* implicit */short) ((((/* implicit */int) (short)-1)) & (((/* implicit */int) (short)4))));
            }
        }
        for (unsigned short i_14 = 2; i_14 < 7; i_14 += 2) 
        {
            arr_48 [i_0] = ((/* implicit */short) (unsigned char)116);
            var_37 = ((/* implicit */short) ((unsigned short) (short)31));
            var_38 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)169))));
        }
        /* LoopSeq 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_39 = ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18201))) : (-4650503131120514898LL)))))));
            arr_52 [i_15] [i_0] = (short)2571;
        }
        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
        {
            var_40 = ((/* implicit */short) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_11))))))) ? (((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) ((short) 1273087835167107459LL))) : (((/* implicit */int) ((_Bool) (short)-1))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) ^ (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)549)) : (((/* implicit */int) (unsigned short)43812))))))));
            /* LoopSeq 2 */
            for (unsigned int i_17 = 0; i_17 < 10; i_17 += 1) 
            {
                var_41 = ((_Bool) (_Bool)0);
                var_42 ^= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-8574))))) > (((((/* implicit */_Bool) 1130677409197784783LL)) ? (((((/* implicit */_Bool) (unsigned short)27619)) ? (((/* implicit */int) (unsigned short)41285)) : (((/* implicit */int) (unsigned short)63633)))) : (((/* implicit */int) ((var_15) || (((/* implicit */_Bool) arr_4 [(unsigned char)0] [(unsigned char)0] [(unsigned char)0])))))))));
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                arr_62 [(unsigned short)9] [i_16] [i_0] [i_16 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_30 [i_0 - 1] [i_0] [i_16 - 1] [i_16 - 1] [i_0])) - (((/* implicit */int) (unsigned char)12)))) % ((-(((((/* implicit */int) (short)0)) - (((/* implicit */int) (short)28792))))))));
                var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) (-(((((/* implicit */_Bool) (short)26514)) ? (((/* implicit */int) (short)-30877)) : (((/* implicit */int) (short)32764)))))))));
                var_44 &= ((/* implicit */_Bool) arr_42 [i_0 - 1] [8LL] [i_16 - 1]);
            }
            arr_63 [i_0] = ((/* implicit */_Bool) (short)22094);
        }
    }
    var_45 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((6518894886744364837LL) >> (((((/* implicit */int) (unsigned short)11347)) - (11288))))) : (((-7103342351499124919LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-20027)))))))) ? (((((((/* implicit */_Bool) -4587430807094787069LL)) && (((/* implicit */_Bool) -5246504825164428964LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) var_4))));
}
