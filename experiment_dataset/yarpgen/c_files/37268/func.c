/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37268
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
    var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) (+(106551281U)))) : (((((/* implicit */_Bool) (unsigned short)44632)) ? (((/* implicit */long long int) -709454827)) : (var_14))))), (((/* implicit */long long int) ((min((240), (((/* implicit */int) (unsigned short)65535)))) + (((/* implicit */int) (signed char)127)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_21 |= ((/* implicit */unsigned long long int) (~((+(min((621542663), (((/* implicit */int) arr_0 [i_0 - 2]))))))));
                arr_5 [i_0] &= ((/* implicit */_Bool) (((((~(709454818))) != (max((arr_1 [i_0] [i_1]), (((/* implicit */int) (signed char)-123)))))) ? ((+((~(((/* implicit */int) (short)(-32767 - 1))))))) : (arr_4 [i_1] [i_1] [7])));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (int i_4 = 4; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((-8306731986995396100LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)109))))))))) - (((/* implicit */int) (_Bool)1)))))));
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+((-(2147483647)))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_5 = 1; i_5 < 15; i_5 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */short) 709454826);
                    arr_17 [i_0] [i_5] = -626027030;
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)58162)) * (((/* implicit */int) var_8))))) ? ((~(arr_13 [i_0] [i_0 - 1] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((var_3) + (((/* implicit */int) (signed char)-106)))))));
                    var_26 -= ((/* implicit */unsigned short) ((unsigned int) var_15));
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 15; i_6 += 2) /* same iter space */
                {
                    var_27 = ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_1])) ? (var_16) : (((/* implicit */int) ((7161160689068318583ULL) == (((/* implicit */unsigned long long int) -1166275182))))));
                    var_28 = ((/* implicit */signed char) 4398046511040ULL);
                    /* LoopSeq 2 */
                    for (int i_7 = 2; i_7 < 13; i_7 += 1) 
                    {
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -2147483641)) ^ (18446739675663040576ULL)))) ? (((var_5) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [i_6 - 1])))));
                        arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (~(((/* implicit */int) (signed char)-75)));
                        var_30 = ((/* implicit */int) min((var_30), (((((((/* implicit */int) (signed char)75)) + (-1414742766))) / ((+(((/* implicit */int) (signed char)-31))))))));
                    }
                    for (unsigned short i_8 = 2; i_8 < 15; i_8 += 1) 
                    {
                        arr_26 [i_8] [i_6] [i_1] [i_8] = ((/* implicit */unsigned short) -510784073);
                        var_31 |= ((/* implicit */signed char) ((395179179) - (arr_3 [i_0 - 1] [i_8 - 2])));
                    }
                    var_32 += (~(((/* implicit */int) var_8)));
                    /* LoopSeq 3 */
                    for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        var_33 |= ((/* implicit */signed char) (~((+(18446744073709551615ULL)))));
                        var_34 = ((/* implicit */signed char) arr_15 [i_1] [i_1]);
                    }
                    for (int i_10 = 2; i_10 < 14; i_10 += 4) 
                    {
                        var_35 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)31)) || (((/* implicit */_Bool) (unsigned short)50729)))))));
                        arr_31 [i_0 + 1] [i_1] [i_6] [i_6] [i_6] [i_10] = ((/* implicit */long long int) arr_3 [i_10 - 1] [i_10 - 2]);
                    }
                    for (int i_11 = 2; i_11 < 16; i_11 += 1) 
                    {
                        var_36 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_1] [(signed char)8])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [6] [i_6 + 1]))))) : (((/* implicit */int) arr_16 [i_0 + 1] [i_0] [(_Bool)0]))));
                        var_37 = ((/* implicit */int) (-(4398046511040ULL)));
                    }
                }
                for (int i_12 = 1; i_12 < 15; i_12 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 17; i_13 += 2) 
                    {
                        for (short i_14 = 1; i_14 < 16; i_14 += 3) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_16)), (arr_18 [i_0] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((int) arr_15 [i_14] [i_14]))) : (min((((/* implicit */unsigned long long int) arr_10 [i_0] [(unsigned char)6] [i_14] [i_13] [(unsigned char)6])), (17351747929031287137ULL)))))) || (((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 452025474)) ? (-3183291376955321234LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                                var_39 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((3032255593U), (((/* implicit */unsigned int) (unsigned char)58))))), ((-(16495994512807920962ULL)))));
                                var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_36 [i_12 + 2] [i_12] [3] [i_12 + 2])))) ? (((18446739675663040576ULL) - (((/* implicit */unsigned long long int) min((var_13), (((/* implicit */long long int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-42))))) ? (((((/* implicit */_Bool) (signed char)-104)) ? (401263288U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-25))))) : (((/* implicit */unsigned int) (+(1397550722))))))))))));
                                arr_41 [i_0] [i_1] [i_12] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) -1LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-30)) ? (352984510) : (-920635849)))) : (((((/* implicit */_Bool) arr_36 [4] [i_12] [(unsigned char)2] [i_0])) ? (var_13) : (((/* implicit */long long int) 1907683937))))))) ? (((min((arr_36 [i_12] [i_12] [i_12] [(signed char)14]), (((/* implicit */long long int) arr_35 [i_0] [i_0])))) >> (((min((((/* implicit */long long int) var_17)), (arr_13 [i_1] [i_1] [(signed char)16] [i_13] [i_13]))) + (804905384701405818LL))))) : (((/* implicit */long long int) max((min((arr_28 [(_Bool)1] [(_Bool)1] [i_13]), (-452025475))), (((/* implicit */int) (unsigned short)46360)))))));
                            }
                        } 
                    } 
                    var_41 = ((/* implicit */signed char) max((min((((/* implicit */int) (unsigned short)34634)), ((~(((/* implicit */int) var_1)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_18)), (2659330880825814698ULL)))) ? (((((/* implicit */int) (unsigned char)255)) - (604051536))) : ((-(((/* implicit */int) (signed char)31))))))));
                    arr_42 [i_0 - 1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)0))))));
                }
            }
        } 
    } 
    var_42 = ((/* implicit */long long int) (unsigned short)42865);
}
