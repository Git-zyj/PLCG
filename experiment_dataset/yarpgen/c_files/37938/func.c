/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37938
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_19 = ((((/* implicit */_Bool) arr_10 [i_0] [(_Bool)1] [i_2] [i_0] [i_3] [i_4 + 1])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [(short)11])) : (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_2] [i_3]))))) && (((/* implicit */_Bool) ((short) var_13)))))));
                                var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_4 + 2] [i_4 + 2]))))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)246))))), ((-(((/* implicit */int) (short)32767))))))));
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32763))) ^ ((+((+(18446744073709551615ULL)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_2] [i_5] = (((+(((/* implicit */int) var_14)))) * ((-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))));
                        var_22 += (+(((/* implicit */int) arr_8 [20U])));
                        arr_15 [i_0] [i_1] [i_2] [i_1] [10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((1788505724U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)82))))) ? (((((/* implicit */int) var_15)) / (((/* implicit */int) var_7)))) : (((((/* implicit */int) (short)-32767)) / (((/* implicit */int) var_14))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2506461571U)))))) : (2506461571U)));
                    }
                    for (int i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_2] [0U] [i_2] [(unsigned char)6] = ((/* implicit */short) (~(16645843310347373211ULL)));
                        /* LoopSeq 3 */
                        for (int i_7 = 3; i_7 < 22; i_7 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) min((var_15), (((/* implicit */short) var_9))))), (((((/* implicit */_Bool) arr_3 [12ULL] [i_0])) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32763)))))))));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) arr_8 [i_0]))));
                            arr_22 [i_0] [i_1] [i_2] [i_6] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((~(((/* implicit */int) var_15)))) & ((~(((/* implicit */int) arr_5 [i_2] [8])))))))));
                            arr_23 [i_2] [i_2] [i_2] = (short)-32756;
                        }
                        for (int i_8 = 3; i_8 < 22; i_8 += 2) /* same iter space */
                        {
                            var_25 = max((((var_1) << (((14289416195139485138ULL) - (14289416195139485083ULL))))), (((/* implicit */unsigned long long int) ((unsigned char) (short)-4197))));
                            arr_26 [i_0] [i_2] [i_0] [i_0] [i_0] = (_Bool)1;
                            var_26 = ((/* implicit */unsigned int) 14ULL);
                        }
                        /* vectorizable */
                        for (int i_9 = 3; i_9 < 22; i_9 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */short) ((((((/* implicit */_Bool) -810776057)) ? (15ULL) : (7ULL))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2506461592U)) ? (((/* implicit */int) (short)-11206)) : (((/* implicit */int) var_6)))))));
                            var_28 = ((/* implicit */unsigned short) var_18);
                            var_29 = (-(var_0));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        for (unsigned char i_11 = 3; i_11 < 21; i_11 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(arr_10 [i_11 - 2] [i_11 - 1] [i_11 + 1] [i_11] [i_11] [i_11 - 2]))))));
                                var_31 |= ((((((((/* implicit */int) (!(((/* implicit */_Bool) 5066467012135193419ULL))))) ^ (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) + (2147483647))) << (((((((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */int) arr_7 [i_2] [i_2] [19U])) : (((/* implicit */int) var_6)))) - (47861))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_32 ^= ((/* implicit */unsigned long long int) var_8);
    var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) var_17))));
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 17; i_12 += 4) 
    {
        for (int i_13 = 0; i_13 < 17; i_13 += 3) 
        {
            {
                var_34 = ((/* implicit */short) (~((+(((var_0) ^ (((/* implicit */int) (short)24086))))))));
                arr_41 [i_12] [(short)15] [i_13] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_10)) ? (arr_24 [i_12] [i_12] [i_12] [(unsigned short)18] [i_13] [(unsigned char)2] [i_13]) : (arr_24 [(unsigned short)9] [i_13] [i_12] [i_12] [i_12] [(unsigned char)19] [i_12])))));
                var_35 |= ((/* implicit */short) ((((/* implicit */int) (short)-32765)) * (((/* implicit */int) (short)-32765))));
                /* LoopSeq 2 */
                for (short i_14 = 3; i_14 < 15; i_14 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 0; i_15 < 17; i_15 += 4) 
                    {
                        for (unsigned char i_16 = 1; i_16 < 15; i_16 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */int) (short)-11216);
                                var_37 = ((/* implicit */_Bool) max((var_15), ((short)-32744)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 3) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 17; i_18 += 4) 
                        {
                            {
                                var_38 = ((/* implicit */int) (~((-(max((((/* implicit */unsigned int) (unsigned char)208)), (4272220930U)))))));
                                var_39 = ((/* implicit */unsigned int) (_Bool)1);
                                arr_56 [i_13] [i_13] [i_13] [6] [i_13] [i_13] = ((/* implicit */unsigned long long int) ((((3944803783U) + (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)58107))))))) * (((/* implicit */unsigned int) (((~(((/* implicit */int) (short)0)))) * (((/* implicit */int) arr_40 [i_13] [i_13])))))));
                            }
                        } 
                    } 
                    var_40 = ((/* implicit */int) min((var_40), (min((((/* implicit */int) var_6)), (max((((/* implicit */int) min(((short)11740), (((/* implicit */short) var_16))))), (((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) var_13))))))))));
                }
                for (unsigned int i_19 = 0; i_19 < 17; i_19 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_20 = 0; i_20 < 17; i_20 += 1) 
                    {
                        for (unsigned char i_21 = 0; i_21 < 17; i_21 += 2) 
                        {
                            {
                                arr_63 [i_12] [i_12] [i_13] [(unsigned char)12] [(short)4] [i_20] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) / (((/* implicit */int) arr_58 [i_13] [i_19] [i_20] [i_21])))))));
                                var_41 = ((/* implicit */_Bool) (((!(((((/* implicit */int) var_7)) == (((/* implicit */int) (short)32767)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-32748))))) : ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12750))) % (18446744073709551606ULL)))))));
                                var_42 += ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) ((((/* implicit */int) arr_2 [(short)15])) == (((/* implicit */int) var_3))))))))));
                                var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((short)-11752), ((short)-32747))))) & ((~(var_18))))))));
                            }
                        } 
                    } 
                    arr_64 [i_13] = ((/* implicit */int) var_1);
                    var_44 = ((/* implicit */short) max(((~(((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) (unsigned char)159))))))), (((((_Bool) var_10)) ? ((+(((/* implicit */int) (unsigned short)23992)))) : (((/* implicit */int) arr_40 [7] [i_13]))))));
                }
            }
        } 
    } 
}
