/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195276
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
    var_16 = ((/* implicit */unsigned char) (~(((int) (-(((/* implicit */int) var_6)))))));
    var_17 = ((/* implicit */unsigned short) ((var_4) && (((/* implicit */_Bool) var_6))));
    var_18 = ((/* implicit */signed char) (short)-19209);
    var_19 = ((/* implicit */signed char) (~((-((-(((/* implicit */int) var_7))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (~(((unsigned int) 27913082))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                arr_11 [(signed char)10] [i_0] [i_0] [i_0] = ((/* implicit */int) var_12);
                /* LoopSeq 2 */
                for (long long int i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
                {
                    var_20 *= ((/* implicit */unsigned char) -27913083);
                    arr_16 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) arr_1 [6]))))) || (((/* implicit */_Bool) var_14))));
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_19 [i_0] [i_0] [i_1] [i_2] [(signed char)2] [i_0] [i_4] = ((/* implicit */int) ((((-1570355413) + (((/* implicit */int) arr_2 [i_3])))) != (((/* implicit */int) ((((/* implicit */int) (unsigned char)92)) >= (((/* implicit */int) (_Bool)1)))))));
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) var_5);
                    }
                }
                for (long long int i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_9))));
                    arr_24 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_2] [i_5])) ? (((/* implicit */unsigned int) 1570355420)) : (var_10)));
                }
                arr_25 [i_0] [i_1] [i_2] &= ((/* implicit */_Bool) 279535701U);
                var_22 -= ((/* implicit */long long int) var_6);
            }
            for (long long int i_6 = 1; i_6 < 12; i_6 += 2) /* same iter space */
            {
                var_23 *= ((/* implicit */unsigned long long int) arr_9 [i_6] [i_6] [i_6] [i_6]);
                arr_28 [i_0] = ((/* implicit */unsigned char) (+(-1570355413)));
            }
            for (long long int i_7 = 1; i_7 < 12; i_7 += 2) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned int i_8 = 1; i_8 < 11; i_8 += 1) 
                {
                    arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */int) (unsigned char)92);
                    arr_36 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */unsigned long long int) -27913082);
                }
                for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_5))));
                    arr_40 [i_7] [(_Bool)1] [9ULL] = ((/* implicit */short) 88278667U);
                }
                for (unsigned char i_10 = 0; i_10 < 13; i_10 += 2) /* same iter space */
                {
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (~(var_10))))));
                    var_26 = ((/* implicit */int) ((unsigned long long int) var_4));
                    var_27 = ((/* implicit */_Bool) var_2);
                }
                arr_43 [i_0] [i_7] = ((/* implicit */int) var_10);
            }
            var_28 ^= ((/* implicit */signed char) ((((((-27913054) | (((/* implicit */int) arr_23 [i_0] [i_0] [2LL] [i_1])))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [(short)2] [i_0])))))));
            arr_44 [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) (-(-27913039))));
        }
        var_29 = ((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0]);
    }
    for (short i_11 = 0; i_11 < 13; i_11 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_12 = 0; i_12 < 13; i_12 += 2) 
        {
            for (short i_13 = 4; i_13 < 10; i_13 += 2) 
            {
                for (unsigned int i_14 = 1; i_14 < 11; i_14 += 3) 
                {
                    {
                        var_30 &= ((unsigned long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)7))))), (arr_52 [i_13 + 3])));
                        arr_57 [i_11] [i_11] [i_11] |= ((/* implicit */_Bool) 1570355412);
                        var_31 = ((/* implicit */short) (_Bool)0);
                        var_32 *= ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 3; i_15 < 11; i_15 += 3) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_17 = 1; i_17 < 11; i_17 += 4) 
                    {
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            {
                                arr_70 [i_11] [9U] [i_16] [i_17] [(short)2] &= ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-2094219770737614338LL)))))) ? (((((/* implicit */_Bool) 0LL)) ? ((-(((/* implicit */int) arr_41 [i_11] [i_11] [i_11] [i_11])))) : ((~(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */int) ((-1LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)-24168)))))) < (((((/* implicit */_Bool) arr_62 [(short)3])) ? (-763090122) : (((/* implicit */int) var_0))))))));
                                arr_71 [i_11] [3U] [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_9 [i_17 + 1] [(signed char)5] [i_17] [i_17])) + (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)214)))))), (1878544661)));
                            }
                        } 
                    } 
                    arr_72 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)24167)) ? (((/* implicit */int) arr_9 [i_11] [i_15 + 1] [i_15 + 1] [i_16])) : ((-(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
        arr_73 [i_11] = ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (((int) var_6)))))));
        arr_74 [i_11] [i_11] = ((unsigned long long int) (~(min((((/* implicit */long long int) var_3)), (var_1)))));
    }
}
