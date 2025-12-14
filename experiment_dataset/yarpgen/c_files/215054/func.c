/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215054
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
    var_10 &= var_0;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_12 [(_Bool)1] [i_1] [i_1] [(signed char)4] [(_Bool)1] &= ((/* implicit */_Bool) ((arr_0 [i_0]) - (arr_0 [i_2])));
                        var_11 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [(unsigned char)4] [i_3 + 1])) && (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [(signed char)8] [i_3]))));
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 4; i_4 < 18; i_4 += 4) 
                        {
                            var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((-1220829015) + (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_3] [i_3] [i_0])))) : (((/* implicit */int) arr_8 [i_4 - 2] [i_4 - 2] [i_3 + 1] [i_1]))));
                            var_13 = ((/* implicit */_Bool) min((var_13), (((((/* implicit */long long int) ((/* implicit */int) var_1))) > (((var_0) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))));
                        }
                        for (unsigned int i_5 = 3; i_5 < 16; i_5 += 4) 
                        {
                            arr_18 [i_1] [12ULL] [(unsigned short)17] [i_3] = ((((/* implicit */_Bool) ((arr_13 [i_0] [i_0] [i_0] [i_3] [i_5] [i_5] [i_3]) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) arr_15 [i_0] [i_3] [i_2] [i_3 + 1] [4U] [i_5 + 3] [16U]))))) || (((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_0 [i_3])))));
                            arr_19 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) var_6);
                            var_14 *= ((/* implicit */unsigned long long int) arr_17 [i_1] [i_1] [i_3] [i_3 + 1] [(_Bool)1] [i_5 + 3]);
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) arr_2 [i_0]))));
                            var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(signed char)12] [i_2] [i_3] [i_5 + 1]))) : (arr_11 [i_0] [(unsigned char)12])));
                        }
                        var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_3 + 1] [i_3 + 1])) ? (((((/* implicit */int) (unsigned char)126)) / (((/* implicit */int) arr_7 [i_0] [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (arr_16 [i_0] [i_1] [i_0] [i_3] [(_Bool)1]))))));
                        var_18 = ((/* implicit */signed char) (-(((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_3 + 1]))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            var_19 += min((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)234))) >= (-2385543718070689292LL))))) & (var_6))), (((/* implicit */unsigned int) arr_1 [i_0])));
                            var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */unsigned char) arr_13 [i_0] [(signed char)4] [i_0] [i_2] [i_2] [i_6] [i_7])), ((unsigned char)255))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_30 [i_0] [i_1] [i_2] [(_Bool)1] = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) (_Bool)1)), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (6215339593677979334LL)))))));
                            var_21 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (((~(var_0))) % (((/* implicit */long long int) ((int) (_Bool)1)))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_6] [i_8])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))) * (((var_4) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
                            var_22 = ((((/* implicit */_Bool) min((((/* implicit */unsigned char) max(((_Bool)1), ((_Bool)1)))), ((unsigned char)236)))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) max((arr_28 [(signed char)8] [i_6] [i_2] [i_1] [i_0]), (((/* implicit */unsigned short) (_Bool)0))))));
                        }
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)55683)) ^ (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) arr_27 [i_0] [i_1] [i_2] [i_6] [i_2] [(signed char)14] [i_1])))) : (((/* implicit */int) (_Bool)1)))))));
                        var_24 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((10432900107548161435ULL) << (((((/* implicit */int) arr_28 [i_0] [i_1] [i_2] [i_6] [i_0])) - (57400)))))) ? (((((/* implicit */_Bool) arr_24 [i_0] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)107)))) : ((~(((/* implicit */int) var_5))))))));
                        var_25 *= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((186394379U) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [(short)18] [i_0] [i_6])) / (((/* implicit */int) var_3))))) : ((+(arr_6 [(signed char)12] [(signed char)12] [i_2])))))));
                    }
                    var_26 = ((/* implicit */_Bool) arr_4 [i_1] [i_1]);
                    var_27 *= ((/* implicit */_Bool) ((max((arr_21 [i_0]), (arr_21 [i_0]))) ? (((/* implicit */unsigned int) ((arr_21 [i_2]) ? (((/* implicit */int) arr_21 [i_2])) : (((/* implicit */int) arr_21 [i_0]))))) : (var_8)));
                    var_28 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_24 [(_Bool)1] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_2])) : ((~(((/* implicit */int) arr_27 [i_0] [i_1] [i_2] [i_1] [i_0] [i_1] [i_2]))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_9 = 1; i_9 < 14; i_9 += 4) 
    {
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) << (((((/* implicit */int) (unsigned char)224)) - (211)))));
        /* LoopSeq 1 */
        for (signed char i_10 = 3; i_10 < 13; i_10 += 3) 
        {
            arr_35 [i_10] [i_9] [i_10] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_7)) != ((+(((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (!(((4108572916U) > (var_6)))))) : (((/* implicit */int) min((arr_7 [i_10 - 3] [i_9 + 1]), (((/* implicit */unsigned char) (_Bool)1)))))));
            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_4 [(unsigned char)12] [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)21)))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (signed char)-50))))));
            /* LoopNest 2 */
            for (unsigned int i_11 = 1; i_11 < 14; i_11 += 2) 
            {
                for (signed char i_12 = 1; i_12 < 12; i_12 += 2) 
                {
                    {
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (+(((((/* implicit */int) ((signed char) (unsigned char)75))) / (((/* implicit */int) ((var_9) != (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))))))));
                        var_32 -= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_11 - 1] [i_11 - 1] [i_11 - 1]))) & (max((((/* implicit */unsigned int) arr_16 [i_9] [i_10] [i_11 - 1] [i_11] [(_Bool)1])), (var_6)))))));
                        var_33 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2606594010U))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_37 [i_10])) : (((/* implicit */int) (signed char)-1))))) ? (min((((/* implicit */unsigned int) arr_38 [i_9 - 1] [i_10 + 2] [i_11] [i_11 - 1] [i_12 - 1] [i_12 + 3])), (1688373266U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        arr_41 [i_12 + 1] [i_10] [i_10] [i_9 + 1] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)224))))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [(short)0] [(short)0] [(unsigned char)12] [(short)0]))));
                    }
                } 
            } 
        }
        arr_42 [i_9] = ((/* implicit */signed char) (~(var_0)));
        var_34 *= ((/* implicit */signed char) (-(min((max((-5495511141875893869LL), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) (+(((/* implicit */int) arr_38 [i_9] [i_9] [i_9] [i_9] [i_9] [13U])))))))));
        var_35 = ((/* implicit */_Bool) var_6);
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
        {
            for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
            {
                {
                    arr_50 [(unsigned short)8] [i_15] [i_14] [i_15 + 1] = min((((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_48 [i_13] [i_14] [i_13])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_46 [i_13] [(signed char)5]))))), ((+(arr_44 [i_13] [8LL])))))), (((var_0) / (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_14 + 1]))))));
                    arr_51 [i_14] [i_13] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((arr_43 [i_13]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_14 + 1]))) : (1688373241U))))))));
                    var_36 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) var_6)), (-1LL))), (((var_0) * (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_15] [i_13] [i_13])))))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (~(var_6)))) : (((((/* implicit */unsigned long long int) arr_44 [i_13] [i_13])) + (var_4))))) : (((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */long long int) arr_49 [i_13] [i_14] [i_15])), (var_0)))))));
                    var_37 -= ((/* implicit */unsigned char) max((max((var_4), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (!((_Bool)0))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (short i_17 = 0; i_17 < 25; i_17 += 2) 
            {
                for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                {
                    {
                        var_38 = ((/* implicit */_Bool) var_1);
                        var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((((_Bool) var_1)) ? ((+(((((/* implicit */_Bool) 10432900107548161435ULL)) ? (var_0) : (((/* implicit */long long int) var_9)))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                        var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [i_13] [i_16])) ? ((((!(((/* implicit */_Bool) 200445135U)))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)52)))) : (((/* implicit */int) arr_52 [i_13] [i_17] [i_13])))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
    {
        var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) ((((/* implicit */int) arr_45 [i_19] [(_Bool)1])) != (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) 536870912)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))))))))));
        var_42 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_59 [i_19] [i_19] [i_19 + 1] [i_19])) ? (((/* implicit */int) arr_62 [i_19])) : (((/* implicit */int) (_Bool)1))))))));
    }
}
