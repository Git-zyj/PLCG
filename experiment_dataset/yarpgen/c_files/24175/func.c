/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24175
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
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    arr_6 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (arr_5 [i_0 - 1] [i_1] [i_2] [i_2])))) ? (((unsigned int) arr_3 [2U] [(signed char)0])) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)52425)))))));
                    arr_7 [i_1] = ((/* implicit */_Bool) (-(arr_4 [i_0 + 2])));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_4] [i_0] [i_3 - 2] [i_0] [(unsigned short)14] = (~(((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_4]))));
                                arr_15 [i_3] [i_2] = ((/* implicit */unsigned char) (-(arr_10 [i_2] [i_1] [i_0 + 1] [i_2])));
                                arr_16 [i_4] [i_3 - 2] [i_2] [i_1] [9ULL] = ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) arr_1 [i_1])));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 2; i_5 < 20; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (int i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            arr_22 [i_0] [i_5] [i_5] [i_5] [i_0] = ((/* implicit */int) ((3911994777U) | (((/* implicit */unsigned int) 469911477))));
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) 198458861)) : (arr_12 [i_1] [i_5] [i_5] [i_5] [i_5 - 2] [i_5])));
                        }
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_0 - 1] [i_5 + 1] [i_5]))));
                            arr_27 [i_5] [15U] [15U] [(unsigned char)4] [i_1] [i_5] = ((/* implicit */signed char) (unsigned short)29);
                        }
                        arr_28 [i_0] [i_5] [i_2] [i_5] = ((/* implicit */unsigned char) ((arr_2 [i_0 + 2] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)79)))));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0 - 3] [i_5 + 1]))) + (var_8)));
                    }
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) /* same iter space */
                    {
                        var_20 ^= ((/* implicit */_Bool) ((unsigned short) arr_25 [i_0] [i_0] [i_0]));
                        arr_31 [i_0] [i_1] [i_1] [i_8] [i_8] [i_8] = ((/* implicit */short) (+(-469911487)));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_13 [4U] [i_0 - 2] [i_0 + 2] [i_0] [i_0 + 1])));
                        var_22 = ((/* implicit */int) 8140893940156726703LL);
                    }
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (arr_13 [i_0 + 2] [i_0 + 1] [i_2] [i_0 + 2] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_1))))))));
                        var_24 = ((/* implicit */unsigned short) arr_18 [i_0] [i_1]);
                    }
                    var_25 = ((/* implicit */unsigned short) arr_19 [i_0] [i_2] [i_2]);
                }
                /* LoopNest 2 */
                for (signed char i_10 = 1; i_10 < 20; i_10 += 1) 
                {
                    for (int i_11 = 1; i_11 < 20; i_11 += 1) 
                    {
                        {
                            var_26 ^= ((/* implicit */long long int) min(((+(-469911516))), (((/* implicit */int) (unsigned char)22))));
                            /* LoopSeq 1 */
                            for (long long int i_12 = 3; i_12 < 20; i_12 += 4) 
                            {
                                var_27 = ((/* implicit */short) ((unsigned char) (unsigned short)53611));
                                arr_43 [i_10] = ((/* implicit */signed char) var_14);
                                var_28 = ((/* implicit */int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_23 [i_10] [i_1] [i_0 - 3] [i_0] [i_0 - 1] [i_10]))))), ((~(arr_23 [i_10] [i_10] [i_0 - 3] [i_0] [i_0] [i_10])))));
                                var_29 = ((unsigned char) arr_36 [i_0] [i_10] [i_11 + 1] [i_12]);
                            }
                            var_30 |= ((/* implicit */signed char) max(((unsigned char)22), (((/* implicit */unsigned char) (_Bool)1))));
                        }
                    } 
                } 
                arr_44 [i_0] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-30))));
                var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) min((((/* implicit */signed char) ((arr_25 [i_0] [i_0 + 2] [i_0 + 2]) >= (arr_25 [i_0] [i_0 - 1] [i_0 + 2])))), (arr_18 [i_0 + 1] [i_0 + 1]))))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned int) ((unsigned short) var_14));
    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) max(((unsigned char)9), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))))))))));
    var_34 = ((/* implicit */signed char) ((unsigned int) ((unsigned long long int) ((4294967288U) + (((/* implicit */unsigned int) var_2))))));
}
