/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21187
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
    var_11 = ((/* implicit */_Bool) var_1);
    var_12 = ((/* implicit */short) ((unsigned int) var_0));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) | (arr_0 [18U]))))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) arr_0 [(unsigned char)6]))));
            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_5 [i_0]))));
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_4 [i_0]))));
            /* LoopSeq 3 */
            for (int i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 3; i_3 < 21; i_3 += 3) 
                {
                    for (unsigned char i_4 = 2; i_4 < 22; i_4 += 4) 
                    {
                        {
                            arr_18 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 124762221)) ? (-2140100247) : (arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_3] [i_1])) ? (((/* implicit */int) var_10)) : (arr_17 [i_0] [i_0] [i_2] [i_0] [i_4]))) : (var_3)));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_3] [i_4] [i_4]))));
                            var_17 = ((/* implicit */int) ((unsigned int) arr_9 [i_0] [i_2 + 1] [i_2 + 1] [i_4]));
                        }
                    } 
                } 
                var_18 &= ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) -2140100266)))));
                var_19 = ((/* implicit */short) arr_1 [i_0]);
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)12))))) ? (-2140100266) : (((((/* implicit */_Bool) (unsigned char)231)) ? (398409157) : (981927363))))))));
            }
            for (int i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_14 [i_0] [i_5] [i_5] [i_1] [i_1])) : (arr_7 [i_0] [i_1] [i_5]))))));
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((signed char) arr_7 [i_0] [i_1] [i_5])))));
            }
            for (int i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                var_23 = ((/* implicit */unsigned char) arr_16 [i_0] [i_0]);
                var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_0] [(signed char)10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_16 [0] [0])));
                /* LoopSeq 1 */
                for (unsigned int i_7 = 1; i_7 < 23; i_7 += 3) 
                {
                    var_25 += ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) == (((/* implicit */int) var_6)))) ? (-547562692) : (((/* implicit */int) ((signed char) var_2)))));
                    var_26 &= ((int) arr_0 [0]);
                }
            }
        }
        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            /* LoopSeq 3 */
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_10 = 4; i_10 < 20; i_10 += 3) 
                {
                    for (int i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) (~(arr_17 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1])));
                            var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) var_4)))));
                            arr_40 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_36 [i_0] [i_8] [i_0] [i_0])) : (((/* implicit */int) arr_29 [i_0]))))) ? (((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : ((-(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_10 + 1])) ? (arr_6 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_10 + 3]) : (((/* implicit */int) arr_30 [i_10 - 4] [i_10]))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_37 [i_8] [i_8] [i_0] [i_8] [i_8])) ? (((/* implicit */int) arr_8 [i_0] [i_8] [i_0] [i_0])) : (((/* implicit */int) arr_32 [i_9] [i_8] [i_8] [i_0]))))));
                var_31 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_8 [i_0] [i_8] [i_8] [i_9])) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) arr_12 [i_0])))) + (2147483647))) >> (((arr_23 [i_9 - 1] [i_9 - 1] [i_9]) - (7635429957576803359ULL)))));
            }
            for (signed char i_12 = 2; i_12 < 21; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 23; i_13 += 1) 
                {
                    for (signed char i_14 = 0; i_14 < 24; i_14 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */int) arr_12 [i_12])) : (((/* implicit */int) var_8)))))));
                            var_33 = ((((/* implicit */_Bool) arr_39 [i_13 + 1] [i_0] [i_13] [i_13 - 1] [i_13 - 1] [i_13] [i_13])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_12] [i_12])) : (((((/* implicit */int) var_1)) & (var_2))));
                            var_34 += ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
                        }
                    } 
                } 
                var_35 -= arr_4 [i_12];
                var_36 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
            }
            for (signed char i_15 = 1; i_15 < 23; i_15 += 2) 
            {
                var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_15 + 1] [i_0])) ? (arr_25 [i_15 - 1] [i_0]) : (arr_25 [i_15 - 1] [i_0])));
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 24; i_16 += 1) 
                {
                    for (int i_17 = 0; i_17 < 24; i_17 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_8] [i_15] [i_16] [i_8])) <= ((+(((/* implicit */int) arr_44 [i_8] [i_0]))))));
                            var_39 = ((/* implicit */int) (!(((/* implicit */_Bool) 2140100246))));
                            var_40 = ((/* implicit */signed char) arr_43 [i_17]);
                        }
                    } 
                } 
                var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_45 [i_15 - 1] [i_15] [i_15 - 1] [i_15])) ? ((~(var_2))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_41 [i_0] [(signed char)12])) : (var_0))))))));
            }
            var_42 = ((/* implicit */unsigned short) arr_0 [i_0]);
            var_43 *= ((/* implicit */_Bool) var_0);
        }
        for (unsigned short i_18 = 2; i_18 < 21; i_18 += 1) 
        {
            var_44 = ((/* implicit */signed char) (((~(-547562692))) << (((((((((/* implicit */_Bool) (unsigned char)231)) ? (-862371716) : (((/* implicit */int) (signed char)127)))) + (862371719))) - (2)))));
            arr_56 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_22 [i_18 + 3] [i_0] [i_0] [i_0])) ? (arr_51 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_18])));
            /* LoopNest 2 */
            for (unsigned short i_19 = 0; i_19 < 24; i_19 += 3) 
            {
                for (signed char i_20 = 0; i_20 < 24; i_20 += 3) 
                {
                    {
                        var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) -398409157))) ? (((/* implicit */int) arr_47 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_60 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) 5402974308076260038ULL)))))));
                        /* LoopSeq 1 */
                        for (short i_21 = 0; i_21 < 24; i_21 += 1) 
                        {
                            var_46 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_55 [i_0] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_0] [i_18] [i_19] [i_0] [i_21]))))))) + ((+(arr_62 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            arr_66 [i_0] = (~((~(var_3))));
                            var_47 += ((((/* implicit */_Bool) arr_16 [(signed char)4] [(signed char)4])) ? (arr_16 [4] [4]) : (arr_16 [8U] [8U]));
                        }
                    }
                } 
            } 
            arr_67 [i_0] [i_0] = (~(((/* implicit */int) var_8)));
        }
        var_48 += ((/* implicit */unsigned short) var_4);
    }
    /* LoopNest 2 */
    for (int i_22 = 0; i_22 < 13; i_22 += 2) 
    {
        for (int i_23 = 0; i_23 < 13; i_23 += 3) 
        {
            {
                var_49 = var_4;
                var_50 = ((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_22] [i_22])) ? (min((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-7691)) ? (((/* implicit */int) (short)7691)) : (-336292578)))))) : (((/* implicit */unsigned int) (~(((((/* implicit */int) (signed char)(-127 - 1))) * (((/* implicit */int) (unsigned char)184)))))))));
                var_51 ^= ((/* implicit */signed char) var_5);
            }
        } 
    } 
    var_52 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
}
