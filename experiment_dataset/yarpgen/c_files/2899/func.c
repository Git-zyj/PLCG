/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2899
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
    var_15 = ((/* implicit */unsigned char) var_12);
    var_16 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)65530), (var_11))))) : ((-(var_13)))))) + (-9223372036854775803LL)));
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_10))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_18 += ((/* implicit */unsigned long long int) min((((((/* implicit */int) var_10)) * (((/* implicit */int) (unsigned char)0)))), ((+((+(((/* implicit */int) (unsigned char)0))))))));
        var_19 = var_7;
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) arr_4 [i_2 + 3] [i_1 + 1] [i_0]);
                    arr_7 [i_0] = ((((arr_3 [i_0]) / (var_1))) > (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) (_Bool)1))));
                    arr_8 [i_0] [i_1] [i_2] [i_0] = (_Bool)1;
                    var_21 = ((/* implicit */unsigned int) var_9);
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) (((-(((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
        arr_11 [i_3] = ((min((arr_0 [i_3]), (arr_0 [i_3]))) && (((/* implicit */_Bool) ((arr_9 [i_3]) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (var_4))) - (1992ULL)))))));
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            arr_16 [i_3] [i_3] = ((/* implicit */short) ((var_13) ^ (((/* implicit */unsigned int) (~(((((/* implicit */int) var_3)) << (((var_7) - (1814201124U))))))))));
            var_23 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) max((var_10), (((/* implicit */short) arr_15 [i_4])))))))) - (((((((/* implicit */long long int) var_13)) | (arr_9 [8U]))) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_3])) ^ (-1941327000))))))));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    for (signed char i_7 = 4; i_7 < 12; i_7 += 1) 
                    {
                        {
                            arr_24 [i_3] [14LL] [i_7] [i_6] [i_7 + 2] = ((/* implicit */unsigned int) (_Bool)1);
                            var_24 ^= var_10;
                        }
                    } 
                } 
                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((unsigned short) (_Bool)1)))));
                var_26 = ((/* implicit */_Bool) (((-((-(((/* implicit */int) (unsigned char)205)))))) * (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (short)759)) & (((/* implicit */int) (_Bool)1))))))));
            }
        }
        for (int i_8 = 1; i_8 < 14; i_8 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_9 = 0; i_9 < 15; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    for (long long int i_11 = 1; i_11 < 13; i_11 += 2) 
                    {
                        {
                            arr_35 [i_9] [i_9] = ((/* implicit */long long int) (!((_Bool)1)));
                            arr_36 [i_3] [i_8] [i_9] [i_9] = ((/* implicit */long long int) -122475869);
                            var_27 = ((/* implicit */int) arr_31 [i_11] [i_11] [i_9] [i_9] [i_3] [i_3]);
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */long long int) var_9)) > ((+(arr_22 [8] [i_3] [i_9] [8] [4LL] [i_9]))))))));
                            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((var_13) + (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) + (((/* implicit */unsigned int) 1604012063)))))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)248)) > (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && ((_Bool)0))))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 15; i_12 += 3) 
                {
                    for (long long int i_13 = 3; i_13 < 14; i_13 += 4) 
                    {
                        {
                            arr_42 [i_9] [i_9] [i_13 - 2] = ((/* implicit */unsigned char) arr_1 [i_9]);
                            arr_43 [(_Bool)1] [i_8 - 1] [i_9] [i_8 - 1] [i_13] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_8 - 1] [i_9] [i_8 + 1] [i_8 - 1])) && (((/* implicit */_Bool) arr_30 [i_8 - 1] [i_9] [i_8 - 1] [i_8 + 1]))));
                        }
                    } 
                } 
                var_31 += ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)65532)) + (((/* implicit */int) arr_10 [i_3])))) + (((/* implicit */int) var_11))));
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 3) 
                {
                    for (unsigned int i_15 = 2; i_15 < 13; i_15 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_8] [i_8 + 1] [i_9]))))) ? ((-(((/* implicit */int) (signed char)75)))) : (((/* implicit */int) ((var_13) > (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                            arr_48 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(14427609939918693411ULL)))) ? (arr_30 [i_8] [i_9] [i_14] [i_15 + 2]) : (((/* implicit */unsigned long long int) arr_22 [i_8] [i_9] [(signed char)13] [i_8] [i_8 + 1] [i_8]))));
                            var_33 = ((/* implicit */signed char) ((((arr_5 [i_3] [i_9]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_7))) >= ((-(var_7)))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 2) 
            {
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) << (((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_3] [i_3] [i_3] [i_3] [i_3]))) > (5154296096301648245ULL))) ? ((+(1632621635333344287ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_3] [i_3] [5ULL] [i_16]))) : (var_13)))))) - (4294967172ULL)))));
                arr_52 [i_3] [(unsigned short)1] [i_3] [(unsigned short)1] = arr_39 [i_3] [i_3] [i_3] [i_16] [i_3];
            }
            /* LoopNest 3 */
            for (unsigned char i_17 = 4; i_17 < 14; i_17 += 1) 
            {
                for (int i_18 = 1; i_18 < 11; i_18 += 4) 
                {
                    for (int i_19 = 1; i_19 < 13; i_19 += 1) 
                    {
                        {
                            var_35 *= ((/* implicit */unsigned int) (_Bool)1);
                            var_36 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(var_14)))) ? (((((/* implicit */long long int) var_9)) + (var_1))) : (((/* implicit */long long int) ((int) var_12))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_13)) - (14427609939918693403ULL)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)0)), ((unsigned short)12336)))) : (arr_13 [i_3] [i_3]))))));
                            arr_62 [i_3] [i_8] [i_17] [(unsigned short)0] [9U] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
                            arr_63 [i_3] [i_3] [i_3] [i_17] [i_3] [i_18] [i_19 + 1] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_54 [14LL] [i_17])) * (((/* implicit */int) (signed char)0)))));
                            var_37 = ((/* implicit */signed char) ((((/* implicit */unsigned int) arr_50 [i_3] [i_3] [i_3] [i_3])) - (((((/* implicit */unsigned int) ((-1626632458) + (((/* implicit */int) var_11))))) - (var_14)))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned long long int i_20 = 0; i_20 < 15; i_20 += 2) /* same iter space */
    {
        arr_68 [i_20] = ((/* implicit */unsigned short) (+((-(arr_47 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] [i_20])))));
        arr_69 [i_20] |= ((max((284534109703344350ULL), (((/* implicit */unsigned long long int) arr_57 [i_20] [i_20] [(_Bool)1] [(_Bool)1])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)225))));
    }
    for (unsigned long long int i_21 = 0; i_21 < 15; i_21 += 2) /* same iter space */
    {
        var_38 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((~(var_7))) : (((/* implicit */unsigned int) arr_13 [i_21] [i_21]))))) ? (var_9) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_25 [i_21] [i_21]))))))));
        /* LoopNest 3 */
        for (int i_22 = 3; i_22 < 14; i_22 += 3) 
        {
            for (unsigned short i_23 = 2; i_23 < 14; i_23 += 2) 
            {
                for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                {
                    {
                        arr_79 [i_24] [i_24] [i_23] [i_24] = ((/* implicit */_Bool) (-(((((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_5))))) * (((/* implicit */int) ((var_9) > (((/* implicit */int) arr_54 [i_21] [i_24])))))))));
                        arr_80 [i_24] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_24 - 1] [i_24 - 1] [i_24])) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) var_11))))) && (((/* implicit */_Bool) var_9))));
                    }
                } 
            } 
        } 
        var_39 = ((/* implicit */unsigned char) var_12);
    }
    var_40 = ((/* implicit */unsigned short) (-((~(135291469824ULL)))));
}
