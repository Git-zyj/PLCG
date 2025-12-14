/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52678
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) >= (((/* implicit */int) (unsigned short)8191))));
    var_19 = ((/* implicit */_Bool) var_4);
    var_20 = ((/* implicit */_Bool) min((((/* implicit */int) var_1)), (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_11))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) max((arr_1 [i_0] [i_0 + 1]), (arr_1 [i_0] [i_0 - 1]))))))))))));
        var_22 -= ((/* implicit */unsigned short) max((((/* implicit */int) arr_0 [(unsigned char)1])), ((~(((/* implicit */int) (_Bool)0))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_23 -= arr_0 [i_1];
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
                    {
                        var_24 *= ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) arr_6 [i_0 - 2]))));
                        arr_9 [i_0] [(unsigned char)14] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) ((unsigned char) ((((((/* implicit */_Bool) (unsigned char)184)) || ((_Bool)1))) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)43582))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_4 = 3; i_4 < 21; i_4 += 1) 
                        {
                            var_25 |= ((/* implicit */short) arr_2 [i_0 + 2] [i_4 - 2] [i_1 - 2]);
                            var_26 += ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_3 [i_0 - 3] [i_1] [i_4 - 1]))))));
                        }
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
                    {
                        arr_14 [(unsigned short)7] [i_1] [i_1] [i_2] [i_1] [i_5] = arr_7 [(_Bool)1] [i_2];
                        var_27 = ((/* implicit */unsigned char) arr_2 [i_5] [i_0] [i_0]);
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            arr_17 [i_0] [i_0] [(unsigned short)20] [i_5] [(short)19] [i_6] = ((/* implicit */unsigned short) (!((_Bool)0)));
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 1] [i_1 - 2] [i_0 + 1] [i_6] [i_0])) : (((((/* implicit */_Bool) (short)248)) ? (((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 1] [(unsigned char)3] [(unsigned char)16] [(unsigned short)8] [i_6])) : (((/* implicit */int) arr_7 [i_6] [(unsigned char)13])))))))));
                            arr_18 [i_0] [i_0] = (short)1;
                        }
                        arr_19 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((arr_16 [i_0] [(unsigned char)2] [i_2] [i_0 - 3] [(short)8] [i_1 + 1]) || (((/* implicit */_Bool) (unsigned short)29397))));
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 1; i_8 < 24; i_8 += 4) 
                        {
                            var_29 = ((((arr_21 [i_0 - 1] [i_7] [(unsigned short)4]) ? (((/* implicit */int) arr_21 [i_8 + 1] [i_1] [i_0])) : (((/* implicit */int) (unsigned char)73)))) == (((/* implicit */int) arr_22 [i_0] [(unsigned short)17] [(short)1] [(short)11] [(short)0] [i_2] [(short)1])));
                            var_30 -= (unsigned short)45955;
                        }
                        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            var_31 += ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_0 + 2] [i_1 - 1] [i_7]))));
                            var_32 = ((/* implicit */short) (((((_Bool)0) && (((/* implicit */_Bool) (unsigned short)65535)))) ? (((/* implicit */int) (short)-27)) : (((/* implicit */int) (short)248))));
                        }
                        arr_27 [i_0] [(unsigned short)14] [i_2] [i_7] = ((/* implicit */unsigned char) ((unsigned short) arr_22 [(_Bool)1] [i_1 + 2] [i_0 - 1] [i_7] [i_1 + 2] [i_1] [i_0]));
                    }
                    var_33 = ((/* implicit */unsigned short) min(((short)-2), ((short)-249)));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
        {
            arr_30 [i_0] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_8 [(_Bool)1] [i_0 - 3] [i_0 - 2] [i_0 - 3] [i_0 - 1] [i_0]))) ? (((/* implicit */int) min((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_25 [i_10])))), (((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (unsigned short)0))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)9)))))));
            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((short) ((arr_3 [i_0 + 1] [(_Bool)1] [i_0]) ? (((/* implicit */int) arr_20 [i_0 + 1] [i_10] [i_0] [i_10])) : (((/* implicit */int) arr_20 [i_0 - 2] [i_10] [i_10] [i_0]))))))));
            arr_31 [i_10] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) % (((/* implicit */int) (unsigned short)65535)))))));
        }
        for (unsigned char i_11 = 0; i_11 < 25; i_11 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_12 = 0; i_12 < 25; i_12 += 2) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        arr_43 [i_11] [i_12] &= ((/* implicit */unsigned short) min((((/* implicit */int) arr_38 [(unsigned short)4] [i_11] [i_0 - 1])), (((((/* implicit */int) arr_25 [i_12])) << (((((/* implicit */int) (unsigned short)10653)) - (10622)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                        {
                            var_35 = ((/* implicit */_Bool) ((((((((/* implicit */int) (short)-8095)) >= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) arr_13 [i_14] [i_11] [i_0 - 1] [i_14 - 1] [i_14 - 1] [(unsigned short)13])) : (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) arr_29 [i_0]))));
                            var_36 = ((/* implicit */_Bool) min((((/* implicit */int) max(((_Bool)1), ((_Bool)0)))), ((+((~(((/* implicit */int) arr_7 [i_0] [i_0 - 3]))))))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_15 = 0; i_15 < 25; i_15 += 1) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        var_37 ^= ((/* implicit */unsigned short) ((_Bool) (short)3522));
                        arr_51 [i_11] [(unsigned short)16] [(unsigned short)16] [i_11] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) arr_44 [i_0 + 2] [i_11] [i_11] [i_15] [i_15] [(unsigned short)0]))))) || ((_Bool)1)))));
                        arr_52 [(unsigned char)15] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) (unsigned short)18431);
                    }
                } 
            } 
        }
    }
}
