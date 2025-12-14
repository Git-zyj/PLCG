/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37592
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_0 [i_0]))))), (min((min((var_13), (((/* implicit */long long int) (unsigned short)8301)))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) >= (arr_1 [i_0]))))))));
                arr_6 [i_1] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-93))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) ((unsigned short) var_10))) : (max((1846639032), (((/* implicit */int) (unsigned short)57745)))))), (((int) min((5057491982719636314ULL), (((/* implicit */unsigned long long int) arr_8 [i_4] [i_0] [i_0]))))))))));
                                var_21 = ((/* implicit */_Bool) ((long long int) (unsigned char)144));
                                var_22 = ((long long int) ((((/* implicit */int) arr_12 [i_0])) >> ((((+(((/* implicit */int) var_18)))) - (8994)))));
                                arr_13 [i_3] [3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)7] [i_4])) ? (((/* implicit */unsigned int) (+((+(((/* implicit */int) (short)-13466))))))) : ((-(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (var_0)))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-15656)))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (var_8))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) var_19)) | (((arr_2 [i_0] [i_1] [i_2]) / (((/* implicit */int) arr_0 [i_0]))))));
                        arr_19 [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_2] [i_5]);
                        arr_20 [i_0] = ((/* implicit */short) (+(arr_4 [i_0] [i_0] [i_5])));
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)7712)) ? (943250019U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_25 |= ((/* implicit */unsigned int) ((unsigned short) (-(((((/* implicit */int) var_10)) << (((var_7) - (2628386508957644709LL))))))));
                        var_26 = ((/* implicit */int) max((((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) >= (((/* implicit */int) arr_9 [(unsigned short)5] [i_1] [(unsigned short)5] [i_0])))), ((!(((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_0]))))));
                        var_27 &= ((/* implicit */long long int) -2060927678);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            var_28 = ((/* implicit */long long int) ((short) var_18));
                            arr_25 [i_0] [i_1] [i_2] [i_2] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_7)))) ? (((-936300739) / (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_12)))))));
                        }
                        for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((arr_18 [i_6] [i_6] [(unsigned short)1] [i_0]), (((/* implicit */int) arr_0 [i_0]))))), (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_2] [i_6] [i_8])) ? (max((((/* implicit */unsigned int) (_Bool)1)), (arr_21 [i_0] [i_0] [i_0]))) : (303468502U)))));
                            var_29 |= ((/* implicit */long long int) ((unsigned long long int) arr_10 [i_8] [i_1] [i_1] [i_1]));
                            var_30 = ((/* implicit */_Bool) (~(((int) arr_7 [i_0] [i_2] [i_6]))));
                            arr_29 [i_0] [i_0] [i_1] [i_0] [i_6] [(_Bool)1] [i_0] = ((/* implicit */long long int) (((+(((/* implicit */int) ((short) var_5))))) + ((((((+(((/* implicit */int) (signed char)-66)))) + (2147483647))) << ((((((~(var_9))) + (5205933003304419700LL))) - (11LL)))))));
                        }
                        for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            var_31 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_9])) ? (var_0) : (((/* implicit */unsigned int) arr_2 [i_1] [i_1] [i_6])))) * (((/* implicit */unsigned int) ((arr_2 [i_1] [i_2] [i_1]) % (arr_2 [i_9] [i_1] [i_2]))))));
                            arr_32 [i_9] [i_6] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned int) min((((var_17) % (arr_3 [i_0] [7ULL] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_6])) && (((/* implicit */_Bool) var_8))))))));
                        }
                    }
                }
                var_32 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) < (min((((/* implicit */long long int) (short)-13466)), (var_14)))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_11 [i_0] [i_1] [i_1] [i_0])), (var_14)))) ? (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_12))))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) >= (((/* implicit */int) arr_27 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 3) 
    {
        for (short i_11 = 3; i_11 < 16; i_11 += 3) 
        {
            for (unsigned char i_12 = 0; i_12 < 19; i_12 += 3) 
            {
                {
                    arr_41 [i_12] [i_11] [i_11] [i_10] = 2941953439U;
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 19; i_13 += 2) 
                    {
                        for (long long int i_14 = 0; i_14 < 19; i_14 += 4) 
                        {
                            {
                                var_33 = ((/* implicit */int) ((((/* implicit */_Bool) 4042494614U)) ? (((/* implicit */long long int) ((303468498U) % (((/* implicit */unsigned int) -896082530))))) : (((((var_9) - (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_10] [i_10] [i_11] [i_10] [i_10]))))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
                                var_34 |= ((unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (arr_43 [i_11 - 1] [i_12] [i_13] [i_13]))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_10] [(signed char)4] [i_12] [(unsigned short)8] [i_13])))));
                                var_35 = ((/* implicit */unsigned char) arr_36 [i_11] [(unsigned char)12]);
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((((max((((/* implicit */long long int) var_10)), (var_9))) >> (((/* implicit */int) ((_Bool) var_19))))) << (((3991498793U) - (3991498792U))))))));
                }
            } 
        } 
    } 
    var_37 = ((/* implicit */_Bool) var_17);
    var_38 = ((/* implicit */int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (var_6))) | (((/* implicit */unsigned long long int) var_8)))) == (((/* implicit */unsigned long long int) min((((-1195372294961637248LL) % (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)31067)) : (((/* implicit */int) var_10))))))))));
}
