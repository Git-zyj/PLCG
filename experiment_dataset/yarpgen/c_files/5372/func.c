/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5372
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
    var_18 = ((/* implicit */unsigned short) var_15);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */int) arr_0 [(unsigned short)6] [i_0])), (var_16))) : (((((/* implicit */int) var_14)) - (((/* implicit */int) var_10)))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) (short)-4)) | (((/* implicit */int) arr_7 [i_2] [i_1] [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) / (var_16)))) : (((((/* implicit */_Bool) var_16)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_2] [i_2]))));
                    var_21 = ((/* implicit */long long int) (short)-7);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */short) var_4);
                                var_22 |= ((/* implicit */unsigned short) (~(((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_0] [(unsigned char)13] [0LL])))))));
                                arr_14 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */short) arr_4 [i_1] [i_2] [(signed char)5]);
                                var_23 = ((/* implicit */unsigned char) var_1);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_0] [i_1] [i_2])) << ((((((_Bool)1) ? (((/* implicit */int) (unsigned short)59786)) : ((-2147483647 - 1)))) - (59781))))) | ((~(((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) arr_11 [i_2]))))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            {
                                arr_19 [i_2] [i_2] [i_2] [i_5] [i_6] = ((/* implicit */unsigned short) var_2);
                                var_25 &= ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_1)) >> (((var_4) - (4007177032U)))))) <= (min((arr_15 [i_0] [i_1] [i_2] [i_5] [i_6]), (var_2)))))), (((((/* implicit */_Bool) (unsigned short)62889)) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) (short)-9917))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_20 [i_0] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) (_Bool)1)), ((-(var_7))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_25 [i_7] = arr_4 [0U] [i_7] [0U];
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) 
            {
                for (short i_9 = 0; i_9 < 15; i_9 += 3) 
                {
                    {
                        arr_32 [i_0] [i_7] [4U] [i_9] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) (short)6))))) ? ((~(((/* implicit */int) arr_22 [i_0] [i_0] [i_0])))) : ((+(((/* implicit */int) arr_0 [i_0] [(short)13])))))) * ((+(((/* implicit */int) ((signed char) var_8)))))));
                        /* LoopSeq 3 */
                        for (short i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            arr_36 [4LL] [4LL] [i_7] [i_9] [i_9] = arr_28 [i_10];
                            var_26 = ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_9] [i_10]))) % (13724722691133876133ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_22 [(_Bool)1] [(_Bool)1] [i_8])) : (((/* implicit */int) arr_17 [i_0] [i_7] [6U] [i_9] [i_10])))))))) ? ((+((~(((/* implicit */int) arr_22 [i_7] [i_7] [i_8])))))) : (((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) var_13))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_8] [i_10]))))))));
                            var_27 = ((/* implicit */unsigned int) var_0);
                        }
                        /* vectorizable */
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            var_28 = ((/* implicit */_Bool) ((((((/* implicit */int) var_13)) >> (((((/* implicit */int) var_1)) - (36310))))) >> (((((/* implicit */int) (unsigned short)8191)) - (8163)))));
                            arr_39 [i_0] [10ULL] [i_8] [i_9] [i_7] = ((/* implicit */_Bool) var_16);
                            arr_40 [i_0] [i_0] [i_7] [i_0] [i_8] [i_9] [i_7] = ((/* implicit */signed char) (~(var_4)));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_29 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)3584)) + (16760832)))) ? (min((((int) (short)21605)), ((+(((/* implicit */int) (_Bool)1)))))) : ((-((-(((/* implicit */int) arr_11 [i_0]))))))));
                            var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((-956411324836211415LL) > (((/* implicit */long long int) ((/* implicit */int) var_13))))))) : ((-(18446744073709551615ULL))))))));
                            arr_43 [i_0] [i_7] [i_0] [(unsigned short)3] [i_0] = ((/* implicit */short) ((signed char) (unsigned char)228));
                            arr_44 [i_7] [0] [i_0] = ((/* implicit */short) var_15);
                        }
                    }
                } 
            } 
            arr_45 [i_7] [i_7] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned long long int) (~(1996413463U)))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_27 [i_0] [12ULL] [12ULL] [i_0]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [(short)9] [i_0] [i_0]))) ^ (var_12))) : ((~(var_15)))))));
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 15; i_13 += 1) 
            {
                for (long long int i_14 = 0; i_14 < 15; i_14 += 3) 
                {
                    for (signed char i_15 = 0; i_15 < 15; i_15 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */int) min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) min((-1487594600291466647LL), (((/* implicit */long long int) (unsigned short)65514))))) : (7ULL))), (((/* implicit */unsigned long long int) var_16))));
                            arr_53 [i_13] [i_7] [i_13] [i_13] [i_13] = ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned char)254)) ? (2147483637) : (((/* implicit */int) (short)-21605))))));
                            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_4)) : (var_12)))) ? (((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_7] [i_13] [13] [i_15]))))) : (var_3))))))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_41 [0LL] [i_7]))) == (((((((/* implicit */long long int) ((/* implicit */int) arr_18 [(unsigned char)14] [i_0] [1U] [(_Bool)0] [(_Bool)0]))) + (arr_26 [i_7] [i_7] [i_7]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_7] [i_7] [3U] [i_7] [i_7] [3U] [i_7])))))))));
        }
        /* vectorizable */
        for (long long int i_16 = 0; i_16 < 15; i_16 += 4) 
        {
            var_34 = ((/* implicit */unsigned char) var_10);
            arr_56 [i_0] [i_16] [3ULL] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_50 [i_0] [i_16])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)61976)))) >> (((/* implicit */int) ((unsigned char) 2748305181871311630LL)))));
        }
    }
}
