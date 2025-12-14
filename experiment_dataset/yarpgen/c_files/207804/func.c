/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207804
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
    var_19 += ((/* implicit */unsigned char) ((short) (-(((/* implicit */int) (short)-28642)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_20 = ((/* implicit */int) ((((7943954899903385330LL) * (((/* implicit */long long int) ((/* implicit */int) var_4))))) % (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
        var_21 = ((/* implicit */_Bool) max((var_21), (((((((((/* implicit */int) (unsigned char)1)) * (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) (unsigned short)46955)))) < (((/* implicit */int) (((~(-17))) > (((/* implicit */int) (unsigned char)230)))))))));
        arr_3 [i_0] = (!(((/* implicit */_Bool) (short)32764)));
    }
    var_22 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_23 ^= ((/* implicit */short) ((((/* implicit */int) var_15)) % (((/* implicit */int) var_15))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            for (unsigned int i_3 = 3; i_3 < 11; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 2; i_4 < 11; i_4 += 2) 
                    {
                        for (short i_5 = 1; i_5 < 10; i_5 += 3) 
                        {
                            {
                                arr_20 [i_1] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */long long int) -9);
                                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)16384)) * (((/* implicit */int) (unsigned char)160))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) > (var_13)))) : ((+(((/* implicit */int) var_10))))));
                                var_25 ^= ((/* implicit */short) var_17);
                                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (-(((/* implicit */int) (signed char)126)))))));
                                var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_0)))))));
                        var_29 = ((/* implicit */unsigned char) var_12);
                        arr_25 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (unsigned char)147))))) : ((+(-1)))));
                    }
                    for (int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */long long int) var_3)) < (var_13))))));
                            arr_30 [i_1] [i_2] [i_1] [i_3] [i_3] [i_8] [i_2] = ((/* implicit */_Bool) var_1);
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_31 ^= ((/* implicit */_Bool) var_12);
                            var_32 |= ((/* implicit */_Bool) ((((/* implicit */int) var_17)) << (((var_13) - (3949972166532707620LL)))));
                            var_33 = ((/* implicit */unsigned char) min((var_33), ((unsigned char)204)));
                            arr_33 [i_9] [6LL] [i_2] &= ((/* implicit */unsigned short) (+(var_1)));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
                        {
                            arr_38 [i_1] [i_2] [i_3 + 1] [i_3] [i_10] = ((/* implicit */_Bool) var_16);
                            arr_39 [i_1] [i_2] [i_3] [i_7] [i_10] = ((/* implicit */unsigned char) (+(var_3)));
                            arr_40 [i_3] [i_7] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) var_17)) : (15)));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_34 += ((/* implicit */unsigned short) (+(((/* implicit */int) var_11))));
                            arr_44 [i_11] [i_3] [i_3 + 1] [i_3] [i_1] = ((/* implicit */_Bool) var_2);
                        }
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_52 [i_3] [i_12] [i_3] [i_3] [i_2] [i_3] = ((((((((/* implicit */int) (signed char)-89)) + (2147483647))) << (((3642496740U) - (3642496740U))))) / ((+(((/* implicit */int) var_10)))));
                            arr_53 [i_1] [i_2] [i_3 - 2] [i_1] [i_13] [(unsigned char)8] |= ((/* implicit */_Bool) ((((/* implicit */int) var_18)) * (((/* implicit */int) var_0))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_35 = var_8;
                            var_36 = ((/* implicit */unsigned int) var_9);
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_37 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_8))));
                            var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_4))) | (((/* implicit */int) ((((/* implicit */long long int) -135474744)) == (var_16)))))))));
                            arr_61 [i_3] [i_3] [i_3] [i_12] [i_15] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */int) (unsigned char)48))));
                            var_39 ^= ((/* implicit */unsigned short) var_13);
                        }
                        var_40 = ((/* implicit */short) ((((/* implicit */int) var_0)) >> (((((/* implicit */int) var_15)) - (31661)))));
                        var_41 *= ((/* implicit */unsigned char) (-(((((/* implicit */int) var_17)) % (var_3)))));
                    }
                }
            } 
        } 
        arr_62 [i_1] |= ((/* implicit */int) ((((/* implicit */int) var_4)) < (((((/* implicit */int) var_0)) - (((/* implicit */int) (unsigned char)54))))));
    }
}
