/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247166
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 3; i_3 < 8; i_3 += 2) 
                    {
                        var_19 &= ((/* implicit */unsigned int) var_15);
                        var_20 = ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) < (var_15))))) : (var_6))) : (((((/* implicit */_Bool) var_18)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))));
                        arr_13 [i_0] [i_0] [(unsigned short)8] [i_2] &= ((/* implicit */unsigned short) ((((((/* implicit */int) var_7)) == (((/* implicit */int) var_17)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_18)) : (var_15)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_0)))));
                        var_21 = var_15;
                        arr_14 [i_0] [i_3] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((var_6) > (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) : (((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_7)))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_4 = 3; i_4 < 6; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */long long int) var_5);
                        var_23 = ((/* implicit */long long int) ((((var_0) >> (((((((/* implicit */_Bool) var_7)) ? (var_1) : (var_6))) - (1742101255U))))) / (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))) % (((/* implicit */int) var_9)))))));
                    }
                    for (long long int i_5 = 4; i_5 < 8; i_5 += 2) 
                    {
                        arr_20 [i_1] [i_0] = ((/* implicit */unsigned char) var_4);
                        arr_21 [i_0] [i_1] [i_0] [i_0] = var_5;
                    }
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_0))));
                        arr_24 [i_6] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_6);
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_2))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (var_12)))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
                    }
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_17))))) ? (((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_7))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 4) 
    {
        arr_27 [i_7] [i_7] &= ((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) | (var_4))) + (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) var_16))))) | (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) < (var_6))))))));
        /* LoopNest 3 */
        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 4) 
        {
            for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    {
                        arr_36 [i_7] [i_7] [i_7] [1U] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_18)) ? (var_1) : (((/* implicit */unsigned int) var_5))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_16)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_8)))))))));
                        arr_37 [i_7] [(unsigned short)10] [9LL] [i_9] [i_9] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_16)) < (var_13)))))));
                    }
                } 
            } 
        } 
        var_27 = var_3;
        arr_38 [(unsigned char)10] = ((/* implicit */unsigned char) var_13);
    }
    /* vectorizable */
    for (unsigned short i_11 = 0; i_11 < 15; i_11 += 2) 
    {
        var_28 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_10)) <= (((/* implicit */int) var_16)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))));
        arr_41 [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
    }
    for (unsigned char i_12 = 1; i_12 < 20; i_12 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_13 = 0; i_13 < 21; i_13 += 3) 
        {
            for (unsigned short i_14 = 4; i_14 < 18; i_14 += 4) 
            {
                for (unsigned short i_15 = 0; i_15 < 21; i_15 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_16 = 1; i_16 < 20; i_16 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) / (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_6)));
                            var_30 |= ((/* implicit */unsigned short) var_5);
                        }
                        for (unsigned short i_17 = 0; i_17 < 21; i_17 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_16)))) | (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_18))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29646))) % (17094476478016551534ULL)));
                            arr_59 [i_12] [i_12] [i_12] [i_13] [i_12] = var_9;
                        }
                        for (unsigned char i_18 = 0; i_18 < 21; i_18 += 4) 
                        {
                            arr_64 [i_12 + 1] [i_12] [i_12] [17LL] [0U] [i_12] [i_12] = ((/* implicit */unsigned char) var_15);
                            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) 11800958218023401680ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31321))) : (16U)));
                            var_34 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))) != (((((/* implicit */int) var_10)) | (((/* implicit */int) var_11))))));
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12288))) & (1101359038U))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_8)))))))) ? (((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_6)))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                        }
                        for (unsigned short i_19 = 2; i_19 < 18; i_19 += 3) 
                        {
                            var_36 = ((/* implicit */unsigned short) var_6);
                            var_37 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                        }
                        var_38 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45161))) & (281466386776064ULL)))) ? (((((/* implicit */unsigned long long int) var_5)) - (var_12))) : (((((/* implicit */_Bool) (unsigned short)15872)) ? (2233785415175766016ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49663)))))));
                        arr_68 [i_12] [i_12 + 1] [3U] [i_12] [i_14 - 3] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_13) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (var_12))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) (unsigned short)16384)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49675))) : (281466386776064ULL))) : (var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) << (((((var_5) + (1682360564))) - (16))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_20 = 3; i_20 < 20; i_20 += 4) 
                        {
                            var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4194303ULL)) ? (((/* implicit */int) (unsigned short)41965)) : (((/* implicit */int) (unsigned short)15861))));
                            var_40 = ((/* implicit */unsigned short) ((var_4) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (var_13))))));
                        }
                        for (long long int i_21 = 2; i_21 < 17; i_21 += 3) 
                        {
                            var_41 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) - (var_5)))) : (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_6))) : (((((/* implicit */_Bool) var_13)) ? (var_0) : (var_4)))))));
                            arr_73 [i_13] [i_13] [i_12] [i_15] [i_14] [i_21] |= ((/* implicit */int) var_2);
                            var_42 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_12)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) != (((/* implicit */int) var_7)))))) : (((var_12) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                        }
                        var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) & (var_15)))) ? (var_13) : (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) var_9))));
                    }
                } 
            } 
        } 
        arr_74 [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) == (var_15)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_13)))))));
        arr_75 [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_13)) == (var_1)))) : (((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_8)))))))) ? (var_13) : (((((/* implicit */_Bool) var_16)) ? (var_13) : (((/* implicit */int) var_2))))));
    }
}
