/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45106
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
                {
                    var_11 ^= arr_1 [i_1];
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        arr_9 [i_3] [i_2] = ((/* implicit */long long int) ((unsigned long long int) arr_2 [i_0] [i_1] [i_3]));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            var_12 = arr_11 [i_0] [i_1] [i_2] [i_3] [i_4 - 2];
                            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3 + 3] [i_3 + 4])) ? (arr_5 [i_3 + 4] [i_3 + 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3 + 1] [i_3 - 2] [i_3 - 1] [i_3 - 2])))));
                            arr_14 [i_0] [i_0] [i_4] [i_0] [i_0] |= ((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1]);
                        }
                    }
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        var_14 ^= ((/* implicit */unsigned int) ((unsigned long long int) (+((-(((/* implicit */int) arr_1 [i_5])))))));
                        var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))));
                        var_16 ^= ((/* implicit */unsigned char) ((arr_8 [i_5] [i_1] [i_5]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) (unsigned char)225))))))));
                    }
                }
                /* vectorizable */
                for (short i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_7 = 1; i_7 < 15; i_7 += 4) 
                    {
                        arr_21 [i_0] [(unsigned short)9] [i_6] [i_7] = (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)233))))));
                        /* LoopSeq 3 */
                        for (short i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */int) (-(3254220018U)));
                            arr_25 [i_6] [i_0] [i_0] [(short)13] [i_6] [i_6] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) arr_24 [i_6] [i_7 - 1] [(short)1] [i_7 + 1] [i_8] [i_8] [i_8])) % (((/* implicit */int) (unsigned char)29))));
                            var_18 ^= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned char)21)))) >> (((((((/* implicit */_Bool) 18014398509481983ULL)) ? (((/* implicit */unsigned long long int) arr_4 [(signed char)15])) : (18014398509481983ULL))) - (1739778206ULL)))));
                            arr_26 [i_0] [i_1] [i_6] [i_6] [i_6] [i_0] = ((((/* implicit */_Bool) 2603518755U)) ? (18428729675200069623ULL) : (18014398509481983ULL));
                            var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(2235649193981807758ULL))))));
                        }
                        for (short i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
                        {
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((-1LL) * (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_7 + 1] [i_7 + 1] [6U] [i_1]))))))));
                            var_21 = ((/* implicit */signed char) ((unsigned int) ((unsigned int) arr_3 [i_0])));
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) arr_0 [i_6] [i_9])) : (arr_2 [i_0] [i_1] [i_6])));
                        }
                        for (short i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
                        {
                            var_23 -= ((/* implicit */_Bool) (~(18428729675200069633ULL)));
                            var_24 = ((/* implicit */unsigned short) ((long long int) arr_8 [i_6] [i_7 + 1] [i_6]));
                            var_25 = ((/* implicit */unsigned short) (~((~(arr_22 [i_0] [i_0] [i_0] [i_7 + 1] [i_0] [i_10])))));
                            var_26 = ((/* implicit */unsigned char) (+((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)212))) : (18014398509482001ULL)))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 2; i_11 < 14; i_11 += 2) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 16; i_12 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(arr_27 [i_0] [i_0] [i_6] [i_6] [i_12])))) & (((var_2) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31)))))));
                                var_28 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((int) arr_30 [(short)12] [i_1] [i_6] [i_1] [i_0])) : ((~(((/* implicit */int) arr_37 [i_12] [i_12] [i_11] [i_6] [i_1] [i_0]))))));
                                arr_38 [i_6] = ((/* implicit */unsigned int) (unsigned char)77);
                                var_29 *= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((unsigned long long int) (unsigned char)6)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_11] [i_11 - 2] [i_11] [i_11 + 1] [i_11 + 1])))));
                                arr_39 [i_0] [i_0] [i_6] [5ULL] [i_6] = ((/* implicit */unsigned long long int) ((((unsigned int) 597155189U)) ^ (((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_12] [i_0] [i_0] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (int i_13 = 3; i_13 < 12; i_13 += 4) 
                {
                    for (long long int i_14 = 0; i_14 < 16; i_14 += 3) 
                    {
                        for (unsigned int i_15 = 1; i_15 < 14; i_15 += 2) 
                        {
                            {
                                var_30 |= ((/* implicit */unsigned long long int) ((unsigned char) (-(((unsigned long long int) (unsigned short)65535)))));
                                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (unsigned char)227))));
                            }
                        } 
                    } 
                } 
                var_32 |= ((/* implicit */int) arr_49 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_16 = 0; i_16 < 12; i_16 += 4) 
    {
        for (short i_17 = 2; i_17 < 9; i_17 += 3) 
        {
            {
                arr_57 [i_17 - 2] = ((/* implicit */unsigned int) (unsigned char)118);
                /* LoopNest 2 */
                for (unsigned char i_18 = 0; i_18 < 12; i_18 += 3) 
                {
                    for (unsigned short i_19 = 0; i_19 < 12; i_19 += 3) 
                    {
                        {
                            arr_63 [i_16] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_16] [(unsigned char)9] [i_18] [i_17] [7ULL] [i_16])))))) : ((~(1771603299U))))));
                            arr_64 [i_16] [i_17] [i_17] [i_19] = (-((+(((((/* implicit */_Bool) var_1)) ? (16211094879727743858ULL) : (16211094879727743879ULL))))));
                            var_33 = ((/* implicit */unsigned int) arr_16 [i_19] [i_18] [i_16]);
                            arr_65 [9U] [i_16] [i_16] [i_16] [i_18] [i_16] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_5 [i_17] [i_17 - 1]))))));
                        }
                    } 
                } 
                var_34 -= ((/* implicit */int) (signed char)-93);
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned int) var_6);
}
