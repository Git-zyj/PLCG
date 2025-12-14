/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245955
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
    var_15 = ((/* implicit */signed char) (+(var_5)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_9 [i_1] [i_1] [i_3 + 1] [(unsigned char)4] |= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_5 [i_2 + 1] [(short)13])))) ? ((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)16380)) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16370))))))))));
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 32768)) ? (((/* implicit */int) (short)-28274)) : (((/* implicit */int) (short)28292))))))) ? ((~((~(arr_7 [i_0] [i_1]))))) : (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 3])) ? (8411441552962682472LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((var_13) ? (((/* implicit */long long int) 1694675930U)) : (arr_7 [i_0] [i_1])))))));
                            arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3] [i_0] [i_0])))))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] |= ((/* implicit */short) ((((/* implicit */_Bool) 2600291360U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_5 [i_0 - 2] [i_0 + 1])));
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((var_13) ? (((/* implicit */int) (unsigned short)16380)) : (((/* implicit */int) arr_1 [i_4]))));
                            }
                            for (int i_5 = 0; i_5 < 19; i_5 += 4) /* same iter space */
                            {
                                var_18 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_4 [i_0 - 3])) ? (((/* implicit */int) arr_4 [i_0 - 3])) : (((/* implicit */int) var_6))))));
                                var_19 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (short)17767)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))));
                            }
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(2600291351U)))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) 32754)) : (16074262910219609320ULL))) : ((+(var_2))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16369)) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) arr_16 [i_0 - 3] [i_0] [i_0 - 2] [i_0 - 1] [i_0] [i_0] [i_0 + 1]))));
                    arr_21 [i_0] [(unsigned char)11] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0U)) ? (var_2) : (((/* implicit */unsigned long long int) 32768))));
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))));
                    arr_22 [i_0] [i_1] [i_1] = (~(((/* implicit */int) (_Bool)1)));
                }
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_7] [i_1] [i_0 - 3] [i_0 - 3])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)62))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18))) : ((+(arr_7 [i_1] [i_1])))));
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        var_24 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) var_12))));
                        /* LoopSeq 4 */
                        for (unsigned int i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            arr_31 [i_0] [i_1] [i_0] [i_8] [(unsigned char)17] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0 - 1] [i_1] [i_0]))) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28061))))))));
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)124))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_3 [i_0 - 3] [i_0 + 1])))))));
                        }
                        for (short i_10 = 4; i_10 < 16; i_10 += 1) 
                        {
                            arr_34 [i_0] = ((((/* implicit */_Bool) 4294967291U)) ? (((/* implicit */int) (unsigned short)16355)) : (var_8));
                            var_26 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_16 [i_0 - 3] [i_1] [i_10] [i_0 - 3] [i_10 - 1] [i_7] [i_8]))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
                            var_28 = ((/* implicit */short) (+(((/* implicit */int) arr_32 [i_0 - 1] [i_0 - 1] [i_0] [8ULL]))));
                            var_29 = (-(((/* implicit */int) (_Bool)0)));
                        }
                        for (long long int i_12 = 0; i_12 < 19; i_12 += 3) 
                        {
                            var_30 = ((/* implicit */long long int) (~(4294967295U)));
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_0] [i_7] [i_0 - 2] [i_0] [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [(unsigned char)8] [i_12] [i_0 - 2] [i_0 - 3] [i_0]))) : (arr_18 [(signed char)8] [i_0])));
                        }
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (+(arr_26 [i_1] [i_0 + 1] [(unsigned char)2] [i_1]))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_24 [i_0 - 2] [i_0] [i_0]))));
                        var_34 |= ((((/* implicit */_Bool) 4619068460505378026LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_1] [16U] [i_1])))))) : ((+(var_9))));
                    }
                    arr_43 [i_7] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(1774748268U)));
                }
            }
        } 
    } 
}
