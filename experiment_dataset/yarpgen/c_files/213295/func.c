/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213295
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
    var_18 = ((/* implicit */unsigned short) 18446744073709551615ULL);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((unsigned int) var_9));
        var_19 = ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)234)), (min((((/* implicit */long long int) var_10)), (-8369991839964356727LL)))));
        var_20 = ((/* implicit */unsigned long long int) var_13);
        arr_5 [i_0] = ((/* implicit */unsigned short) ((unsigned char) 256500394427048720ULL));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_21 = (+(((arr_6 [i_1] [i_1]) ? (((/* implicit */long long int) var_11)) : (6699336446037742570LL))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    {
                        var_22 = ((/* implicit */long long int) var_2);
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_16))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6295))) : (var_5)))));
        /* LoopSeq 1 */
        for (unsigned short i_5 = 4; i_5 < 13; i_5 += 1) 
        {
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (unsigned short)15))));
            /* LoopSeq 3 */
            for (int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (1162915819974985496ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [2U])))))) ? (((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */int) (short)-32751)) : (((/* implicit */int) (unsigned short)61440)))) : (((/* implicit */int) (_Bool)1)))))));
                var_27 = (unsigned char)201;
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    for (short i_8 = 1; i_8 < 15; i_8 += 4) 
                    {
                        {
                            arr_29 [i_1] [i_7] [i_7] [i_6] [i_5 - 3] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) var_16));
                            var_28 -= var_14;
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_9 = 1; i_9 < 15; i_9 += 3) 
                {
                    var_29 *= ((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [6LL] [i_5] [6LL])))))) : (var_9));
                    var_30 &= ((/* implicit */unsigned char) 275215391U);
                    var_31 = ((/* implicit */long long int) ((unsigned char) ((unsigned short) var_12)));
                    var_32 = ((/* implicit */unsigned int) var_11);
                }
            }
            for (int i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
            {
                var_33 -= ((/* implicit */unsigned char) var_8);
                /* LoopSeq 3 */
                for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 1) 
                {
                    arr_37 [i_11] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) var_15))) ? ((~(var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_12))))));
                    var_34 = arr_10 [i_1] [(short)15];
                }
                for (unsigned int i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    var_35 *= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_20 [(unsigned short)0])) ? (arr_27 [i_1] [i_12] [i_10] [i_10] [i_5 + 3]) : (((/* implicit */int) var_6)))));
                    arr_40 [i_5 + 3] [i_5] [i_5] [i_5] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_9))))));
                    var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) 1371752027)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_19 [0LL] [i_5 - 1] [i_5])))))))));
                }
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                {
                    var_37 = (unsigned char)0;
                    /* LoopSeq 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 3) 
                    {
                        arr_46 [(short)13] [i_5] [i_10] [i_10] [i_1] [15U] = ((/* implicit */unsigned char) (~(18190243679282502872ULL)));
                        var_38 = ((/* implicit */unsigned short) 281474976710655LL);
                    }
                    for (unsigned short i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        var_39 *= ((/* implicit */_Bool) var_11);
                        arr_49 [i_1] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1686106369488069982ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))));
                    }
                    var_40 = ((/* implicit */signed char) var_9);
                }
                var_41 = ((/* implicit */int) ((unsigned short) (unsigned short)55595));
                var_42 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9986416184818814472ULL)) ? ((-(((/* implicit */int) arr_16 [(unsigned char)14] [(signed char)2] [(signed char)2] [i_1])))) : ((+(((/* implicit */int) (unsigned char)254))))));
                var_43 &= var_17;
            }
            for (signed char i_16 = 2; i_16 < 12; i_16 += 3) 
            {
                var_44 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)214))));
                var_45 = ((/* implicit */int) var_8);
                var_46 = ((/* implicit */short) var_17);
            }
        }
    }
}
