/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28928
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (max((((/* implicit */unsigned int) 2147483647)), (var_8)))))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-32744))) | (var_6))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_14 = ((/* implicit */signed char) ((unsigned short) arr_3 [i_0]));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) (-(((2337882492U) << (((-4483279233663251972LL) + (4483279233663251987LL)))))));
                            var_16 = ((/* implicit */unsigned long long int) ((arr_3 [i_0]) < (arr_3 [i_0])));
                            var_17 = ((/* implicit */int) arr_11 [i_0] [i_2] [(short)8] [i_4]);
                            var_18 = ((/* implicit */short) (unsigned short)5463);
                            var_19 = (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9))) : (arr_3 [i_0]))));
                        }
                    } 
                } 
                var_20 = arr_8 [i_0];
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_2))));
            }
            for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max((max((min((((/* implicit */unsigned int) (signed char)-9)), (arr_3 [i_0]))), (((/* implicit */unsigned int) arr_12 [i_1] [i_5] [i_6])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1957084804U)) ? (((/* implicit */int) max(((short)32767), ((short)8441)))) : ((~(((/* implicit */int) arr_14 [(unsigned char)12] [i_1] [i_5] [i_6] [i_7]))))))))))));
                            arr_24 [5U] [i_7] [i_7] [5] [i_1] [5] = ((/* implicit */unsigned char) ((short) (~(arr_18 [i_0] [10U] [i_0] [i_0] [1ULL]))));
                            arr_25 [i_1] = ((/* implicit */signed char) 8605575940352283496ULL);
                            arr_26 [i_1] [(unsigned char)7] [i_5] [i_6] = ((/* implicit */short) min((max((((/* implicit */long long int) var_12)), (4483279233663251970LL))), (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (4628624044514505285LL) : (((/* implicit */long long int) arr_0 [i_0] [i_7]))))));
                            arr_27 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) arr_0 [i_1] [1U]);
                        }
                    } 
                } 
                arr_28 [i_1] [i_0] [i_1] = ((/* implicit */short) max((min((((/* implicit */long long int) (unsigned char)177)), (-4628624044514505285LL))), (((/* implicit */long long int) (signed char)-52))));
            }
            /* vectorizable */
            for (short i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                var_23 = ((/* implicit */int) ((signed char) arr_0 [i_0] [i_8]));
                arr_33 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((arr_2 [i_0] [i_0]) % (((/* implicit */long long int) 3670016))));
                /* LoopSeq 2 */
                for (unsigned int i_9 = 0; i_9 < 16; i_9 += 3) 
                {
                    var_24 = ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0])) >= (((/* implicit */int) arr_12 [i_1] [i_8] [i_9]))));
                    arr_38 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [i_0]);
                    arr_39 [i_0] [15] [i_8] [i_1] = ((/* implicit */unsigned int) ((-4628624044514505286LL) / (((/* implicit */long long int) arr_4 [i_0]))));
                    arr_40 [i_0] [i_0] [6LL] [6LL] [i_9] &= ((/* implicit */unsigned char) 1957084783U);
                }
                for (short i_10 = 1; i_10 < 13; i_10 += 2) 
                {
                    arr_43 [i_1] [i_0] [i_1] [i_0] [i_0] [(signed char)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((/* implicit */long long int) arr_18 [0U] [0U] [i_0] [i_0] [i_0])) : (arr_2 [i_8] [12U])));
                    arr_44 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
                    arr_45 [1] [i_1] [1] [i_1] [i_1] = ((/* implicit */unsigned int) 760494228);
                    arr_46 [i_0] [i_1] [(short)1] [i_0] = ((short) (unsigned char)51);
                }
                arr_47 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_0] [i_8] [i_8]))) : (arr_13 [i_0] [i_0] [i_0] [i_0] [(short)13])));
            }
            var_25 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 2985535185U)) ? (((/* implicit */int) (short)-15933)) : (((/* implicit */int) (unsigned char)75)))), (((/* implicit */int) max((arr_20 [i_0] [i_0] [i_0] [i_0]), (arr_20 [i_0] [i_0] [i_1] [i_1]))))));
        }
        /* vectorizable */
        for (unsigned short i_11 = 0; i_11 < 16; i_11 += 1) 
        {
            arr_50 [i_0] = ((/* implicit */unsigned int) ((short) (unsigned char)0));
            arr_51 [i_0] [i_0] [i_0] &= ((/* implicit */signed char) (unsigned char)111);
        }
        for (short i_12 = 2; i_12 < 15; i_12 += 3) 
        {
            arr_55 [i_12] = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) arr_17 [i_12 - 2] [i_12 - 2] [1LL])), (arr_1 [i_12 - 1] [i_12 + 1])))));
            arr_56 [i_12] = ((/* implicit */int) (~(((unsigned int) var_11))));
        }
        var_26 = (signed char)72;
    }
    for (int i_13 = 0; i_13 < 16; i_13 += 1) 
    {
        var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_13] [i_13])) ? (arr_13 [i_13] [i_13] [11] [10LL] [i_13]) : (((/* implicit */unsigned int) ((int) -2022373333)))))) ? (((/* implicit */int) (unsigned char)158)) : (((((/* implicit */_Bool) arr_52 [i_13] [i_13])) ? (arr_52 [i_13] [(short)9]) : (arr_52 [i_13] [i_13]))));
        var_28 = ((/* implicit */long long int) (+(arr_30 [i_13] [i_13] [i_13])));
        arr_59 [i_13] = ((/* implicit */unsigned char) max(((+(8605575940352283496ULL))), (((/* implicit */unsigned long long int) arr_29 [(short)6] [(unsigned char)14] [(short)6]))));
    }
    var_29 = ((/* implicit */short) ((unsigned int) min((((/* implicit */unsigned int) (short)1023)), (var_6))));
}
