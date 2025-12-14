/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222831
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 4; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */signed char) ((((arr_2 [i_0]) ? (((/* implicit */int) arr_6 [i_1] [i_2] [i_2])) : (((/* implicit */int) min(((_Bool)1), (arr_5 [i_2])))))) ^ (((/* implicit */int) arr_3 [i_0] [i_0]))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_14 [i_1] [i_1] [i_3] = ((/* implicit */signed char) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1 - 1]);
                                arr_15 [(unsigned short)13] [i_1] [i_2] [i_3 - 3] [i_4] = ((/* implicit */unsigned short) arr_9 [i_3] [i_3] [i_3 + 2] [i_3]);
                                var_14 = ((/* implicit */unsigned char) (_Bool)1);
                                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) var_11))));
                            }
                            for (unsigned char i_5 = 1; i_5 < 13; i_5 += 1) 
                            {
                                arr_18 [(_Bool)1] [i_0] [i_1] [i_1] [i_2] [i_3] [i_1] = (_Bool)1;
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-638668561375937801LL))), (((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) 281474976710652ULL)))))))) ? (2216615441596416ULL) : (4703871231488164966ULL))))));
                                var_17 = ((/* implicit */unsigned short) arr_13 [i_2] [i_2]);
                            }
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((2216615441596438ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])))), (((/* implicit */unsigned long long int) (~(1859438143))))))) ? (arr_12 [i_0] [4] [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                                var_19 = ((/* implicit */unsigned char) min((12389917857393002651ULL), (((/* implicit */unsigned long long int) 1757592436))));
                                arr_22 [i_0] [i_1] [i_1] [i_3] [8LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_1] [i_1]))));
                            }
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)12288)) ? (((/* implicit */int) (short)-12275)) : (-222378274))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) 18444527458267955203ULL)) ? (536870912LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45729))))))));
                arr_23 [i_0] [i_0] [i_1] = (_Bool)1;
                arr_24 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((8372224U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_7 = 1; i_7 < 15; i_7 += 2) 
                {
                    arr_28 [i_0] [i_0] [i_1] [i_7] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_8 [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1658406467U)))))));
                                arr_33 [i_8] [i_8] [i_8] [i_1] [i_8] = ((/* implicit */signed char) (-(((/* implicit */int) arr_7 [i_1 + 3] [i_1]))));
                                arr_34 [i_0] [i_1] [i_7] [i_8] [i_1] = ((/* implicit */unsigned char) ((_Bool) ((var_2) ? (((/* implicit */int) (short)-20689)) : (((/* implicit */int) arr_7 [i_0] [i_1])))));
                                var_23 = arr_7 [i_1] [i_1];
                                arr_35 [i_0] [i_0] [i_1] [i_1] [i_7] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 991732786244293143ULL)) ? (((arr_30 [i_0]) ? (4042210287398476789LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128)))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) (+((((_Bool)1) ? (((/* implicit */int) (short)12288)) : (((/* implicit */int) (unsigned short)65532))))));
                    var_25 += ((/* implicit */long long int) var_5);
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_1])) - ((+(((/* implicit */int) (short)-20689))))));
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((575334852396580864ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) min((1105012151), (((/* implicit */int) (_Bool)0))))) : (((arr_9 [i_1 + 3] [i_1] [i_1] [i_1 + 3]) ^ (arr_9 [i_1 + 3] [2LL] [i_1 + 1] [i_1 + 1])))));
                }
                for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    arr_40 [i_0] [i_0] [i_11] |= ((/* implicit */signed char) min((var_2), ((!(((/* implicit */_Bool) arr_26 [4ULL] [i_0]))))));
                    arr_41 [(signed char)2] [i_1] [i_11] = ((/* implicit */long long int) min(((~(((unsigned long long int) 4609434218613702656LL)))), (((/* implicit */unsigned long long int) (short)12274))));
                    var_28 = ((/* implicit */long long int) arr_26 [i_1] [i_1]);
                }
                for (unsigned short i_12 = 0; i_12 < 16; i_12 += 1) 
                {
                    arr_45 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) var_5);
                    arr_46 [i_1] [2LL] [(signed char)4] [i_12] = ((/* implicit */short) 4503599623176192ULL);
                }
            }
        } 
    } 
    var_29 &= ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)1680)) : (min((((((/* implicit */_Bool) 4258682876U)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) (signed char)15)))), (((/* implicit */int) (short)-31645))))));
}
