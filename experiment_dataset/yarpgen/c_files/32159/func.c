/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32159
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
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (var_1)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), (var_2)))) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)127))) : (15593743821581122697ULL)))))))));
    var_16 &= ((/* implicit */unsigned int) (~(var_14)));
    var_17 = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)127))))), (var_3))), (((/* implicit */unsigned int) var_13))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [16U]))) | (var_8))))) ? ((((_Bool)0) ? ((+(((/* implicit */int) (short)127)))) : (max((var_1), (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (short)-128))));
        var_18 ^= ((var_10) % (((/* implicit */long long int) (-((~(((/* implicit */int) arr_0 [i_0]))))))));
        var_19 += (~(((/* implicit */int) max(((unsigned short)7908), (arr_0 [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) var_3);
        var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)0)) : (max((((((/* implicit */int) arr_0 [8U])) ^ (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-127))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            var_21 = ((short) ((((/* implicit */int) (_Bool)0)) >> (((arr_7 [i_2]) - (4783752896905793278ULL)))));
            /* LoopSeq 3 */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_10 [i_5]))) * (((/* implicit */int) ((((((/* implicit */int) arr_9 [i_3])) / (((/* implicit */int) arr_11 [i_2])))) == (((/* implicit */int) ((unsigned short) arr_15 [(_Bool)1]))))))));
                            var_23 = ((/* implicit */long long int) min((var_23), ((-(((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_3] [i_4 + 1] [i_5] [i_6]))) - (arr_18 [i_6] [i_2] [i_4 + 1] [i_5])))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
                {
                    arr_23 [i_2] [20LL] [i_4] [i_4 + 1] [i_7] [i_7] |= ((/* implicit */short) (((+(((/* implicit */int) (short)126)))) <= (((((/* implicit */int) arr_19 [i_7] [i_7] [(unsigned short)14] [(unsigned short)14] [i_2])) * (((/* implicit */int) arr_16 [i_2] [i_2] [i_4] [i_4] [i_2]))))));
                    var_24 -= ((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_4 + 1]))));
                    arr_24 [(unsigned short)0] [(unsigned short)0] [i_4 + 1] [(unsigned short)0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)8677)) : (((((/* implicit */int) (unsigned short)2622)) ^ (((/* implicit */int) (_Bool)0))))));
                    var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_4] [i_4 + 1])) ? (3807125624740114727LL) : (3807125624740114727LL)));
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2853000252128428918ULL)) ? (((/* implicit */int) (short)-127)) : (((/* implicit */int) (_Bool)1)))) <= (((((/* implicit */_Bool) (short)126)) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) (signed char)127)))))))));
                }
                for (signed char i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
                {
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_8 [(unsigned char)8]) * (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4]))))) : (((/* implicit */int) (_Bool)1))));
                    var_28 |= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_2] [i_3] [i_4] [i_8] [i_8] [i_8]))))) >= (var_8))))));
                    var_29 *= ((/* implicit */unsigned char) (-((-(((long long int) 8796093022176ULL))))));
                    var_30 = ((/* implicit */_Bool) ((max(((-(((/* implicit */int) (_Bool)0)))), ((+(((/* implicit */int) (short)-8678)))))) * ((+(((/* implicit */int) var_9))))));
                    arr_27 [i_2] = ((/* implicit */unsigned int) ((min((18446735277616529439ULL), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_12 [i_2])), (8658179894441168414LL)))))) >> (((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) / (16095964576558637533ULL)))) ? (((/* implicit */int) arr_16 [i_2] [i_3] [i_4] [i_2] [i_4])) : ((+(-1043223601))))) + (1043223659)))));
                }
                for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    var_31 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_28 [i_2] [(_Bool)1] [i_4] [i_4 + 1]))))));
                    var_32 ^= ((/* implicit */unsigned int) (short)-128);
                    var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (((-((-(((/* implicit */int) (_Bool)1)))))) != (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0)))))))))))));
                }
            }
            /* vectorizable */
            for (unsigned char i_10 = 1; i_10 < 21; i_10 += 1) 
            {
                var_34 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_34 [i_10 + 1] [(unsigned short)1] [i_10 + 1] [i_10 - 1]))));
                var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (+(arr_25 [i_2] [i_3] [i_10] [i_10]))))));
                arr_35 [i_2] [i_10 + 2] [(_Bool)1] [i_10] = ((/* implicit */unsigned short) (-((+(arr_17 [i_2] [6] [i_2] [(unsigned char)16] [i_2] [i_2] [i_2])))));
            }
            for (unsigned int i_11 = 0; i_11 < 23; i_11 += 1) 
            {
                var_36 += ((/* implicit */unsigned char) arr_3 [(_Bool)1]);
                /* LoopSeq 1 */
                for (signed char i_12 = 1; i_12 < 21; i_12 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_13 = 0; i_13 < 23; i_13 += 4) 
                    {
                        arr_47 [i_2] [3] [i_11] [i_12] [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_12 + 1])) % (((/* implicit */int) var_12))))) ? ((+(arr_45 [(unsigned short)19] [(unsigned short)19]))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_22 [i_2] [i_3] [i_2] [i_3] [i_13] [11]))))))));
                        var_37 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)65535)), (((((/* implicit */_Bool) -5849356578795677572LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)8677)))))))));
                    }
                    arr_48 [i_2] [i_3] [(unsigned short)22] [i_12] |= ((/* implicit */short) arr_45 [i_3] [i_3]);
                    var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_12 - 1] [i_3] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_33 [21ULL] [i_3] [10]))))) / ((-(((arr_25 [(unsigned short)9] [i_3] [i_11] [i_12]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_2] [i_3] [i_12] [i_12] [i_2] [i_2]))))))))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 23; i_14 += 4) 
                {
                    for (int i_15 = 0; i_15 < 23; i_15 += 3) 
                    {
                        {
                            var_39 |= ((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2]);
                            var_40 += ((/* implicit */short) (+(max((((/* implicit */long long int) arr_16 [(_Bool)1] [i_2] [i_11] [i_3] [i_2])), (arr_18 [i_3] [i_11] [i_14] [i_15])))));
                            var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) arr_4 [i_2]))));
                        }
                    } 
                } 
            }
            var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2])) - (((/* implicit */int) arr_9 [i_2]))))) ? ((~(((((/* implicit */int) var_7)) - (((/* implicit */int) arr_26 [i_2] [i_2] [i_2] [i_3])))))) : (((/* implicit */int) ((short) max((arr_19 [i_2] [i_3] [(_Bool)1] [i_2] [i_2]), (((/* implicit */unsigned char) arr_10 [i_2]))))))));
        }
        var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_3 [i_2]), (((/* implicit */unsigned long long int) arr_11 [i_2]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2]))) * (0ULL)))));
        var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) (+(((/* implicit */int) (!((_Bool)1)))))))));
    }
}
