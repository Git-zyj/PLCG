/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48715
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) max((((unsigned char) arr_0 [i_0])), (((/* implicit */unsigned char) ((((/* implicit */int) var_2)) <= (((/* implicit */int) arr_0 [i_0])))))));
        var_12 -= ((/* implicit */unsigned char) (~((((+(1994347085))) >> (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (arr_1 [i_0])))))));
        var_13 = (-(((/* implicit */int) ((signed char) ((arr_1 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))));
        var_14 -= ((/* implicit */short) (+(var_7)));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_15 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-12677)) || (((/* implicit */_Bool) arr_0 [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) arr_4 [i_1]))))), (2251799813685247ULL)));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            arr_9 [i_1] [i_1] = ((/* implicit */signed char) (unsigned short)4745);
            var_16 &= ((/* implicit */short) (~(min((((1994347085) >> (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) || (((/* implicit */_Bool) var_1)))))))));
            arr_10 [i_1] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */int) var_2)) + (((/* implicit */int) var_10)))), (((/* implicit */int) min((((/* implicit */short) arr_3 [i_1])), (arr_6 [i_1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) : (((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) arr_0 [i_1]))))) : (max((((/* implicit */unsigned long long int) var_3)), (var_5)))))));
            arr_11 [i_1] = ((/* implicit */int) ((var_11) ? (min((var_8), (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)0)))))));
        }
        for (unsigned char i_3 = 4; i_3 < 14; i_3 += 4) 
        {
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (arr_13 [i_3] [i_1] [i_1])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) / (var_9))))))))));
            arr_16 [i_1] [i_3 - 2] [i_3] = ((/* implicit */signed char) (+(min((((var_7) & (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) ((unsigned short) var_7)))))));
            var_18 = ((/* implicit */signed char) (~((((+(((/* implicit */int) arr_4 [i_1])))) & ((-(((/* implicit */int) var_4))))))));
        }
    }
    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            var_19 *= ((/* implicit */unsigned char) (~(max((arr_17 [i_5 - 1] [i_5 - 1]), (((/* implicit */unsigned long long int) arr_22 [2U] [10LL] [2U]))))));
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_5 [i_5 - 1]))));
            var_21 = ((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_5])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_4))))) < ((+(var_8))))))));
            arr_23 [(unsigned char)4] [i_5] = ((/* implicit */unsigned long long int) var_8);
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            var_22 = (+((+(((/* implicit */int) var_4)))));
            var_23 += ((/* implicit */unsigned long long int) ((arr_12 [i_4]) ? (((/* implicit */int) (!(var_11)))) : (((/* implicit */int) arr_0 [i_4]))));
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                arr_28 [i_4] [i_6] [i_7] [i_7] = ((/* implicit */signed char) arr_12 [i_4]);
                /* LoopSeq 3 */
                for (short i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    arr_31 [i_4] = ((/* implicit */int) (~(((((/* implicit */_Bool) 2251799813685247ULL)) ? (2251799813685247ULL) : (((/* implicit */unsigned long long int) 2147483647))))));
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        var_24 = (-(var_5));
                        arr_35 [(signed char)4] [i_6] [i_7] [i_8] [i_8] [i_8] [(short)0] |= (~(((var_5) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_7]))))));
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_5)) ? (arr_30 [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */int) var_3)))))))));
                        var_26 -= ((/* implicit */int) var_11);
                    }
                    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
                        var_28 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_32 [i_4] [i_6] [i_6] [i_8] [i_8] [i_10] [i_4])) + (2147483647))) >> (((((/* implicit */int) var_1)) + (9733)))))) <= ((+(var_5)))));
                        var_29 = ((/* implicit */int) ((var_5) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_6] [i_4])))));
                        var_30 -= ((/* implicit */unsigned long long int) var_8);
                        var_31 = ((/* implicit */int) var_2);
                    }
                    arr_38 [i_4] [i_6] [i_7] [i_7] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_4] [i_6] [i_7] [i_8] [i_8]))) < (11151517208099970777ULL)))) & (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))));
                }
                for (long long int i_11 = 1; i_11 < 10; i_11 += 3) 
                {
                    arr_42 [i_7] = (signed char)-72;
                    var_32 -= ((/* implicit */unsigned char) ((_Bool) arr_13 [i_4] [i_7] [i_4]));
                    var_33 = ((/* implicit */int) (((+(var_9))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_11 - 1])))));
                }
                for (unsigned char i_12 = 0; i_12 < 11; i_12 += 4) 
                {
                    var_34 |= ((/* implicit */short) ((((/* implicit */int) arr_6 [i_4])) == (arr_24 [i_12])));
                    var_35 = ((unsigned long long int) arr_32 [i_4] [i_6] [i_6] [i_7] [i_7] [i_7] [i_12]);
                }
            }
            var_36 = ((/* implicit */int) arr_19 [i_4]);
        }
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 4) 
        {
            for (long long int i_14 = 0; i_14 < 11; i_14 += 2) 
            {
                {
                    arr_53 [i_13] = ((/* implicit */unsigned int) max(((+(var_7))), (((/* implicit */long long int) ((((var_6) > (((/* implicit */int) var_10)))) || (((/* implicit */_Bool) (~(((/* implicit */int) (short)7))))))))));
                    arr_54 [i_14] [i_13] [i_4] [i_4] |= ((/* implicit */short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_0 [i_13]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_4]))))) ? (((var_3) ? (arr_52 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) var_8)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 0; i_15 < 11; i_15 += 2) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 11; i_16 += 2) 
                        {
                            {
                                var_37 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_4] [i_13])) ? ((-(max((((/* implicit */unsigned long long int) (short)2461)), (7295226865609580838ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4])))));
                                arr_61 [i_4] [(short)7] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) <= (((7295226865609580838ULL) / (arr_1 [i_13]))))) && (((/* implicit */_Bool) max((arr_45 [i_4]), (((/* implicit */unsigned short) ((((/* implicit */long long int) arr_26 [i_16] [i_4] [i_4])) < (var_7)))))))));
                                var_38 ^= max((((/* implicit */int) ((((/* implicit */int) arr_48 [i_4] [i_4] [i_4])) < (((((/* implicit */_Bool) arr_59 [i_4] [i_4] [(_Bool)1] [i_15] [i_16] [i_4])) ? (((/* implicit */int) arr_36 [i_4] [i_4])) : (((/* implicit */int) arr_51 [i_4] [i_13] [i_4]))))))), (((((var_7) < (((/* implicit */long long int) arr_57 [i_4] [9U] [i_4] [8])))) ? (var_6) : (((1926253076) & (((/* implicit */int) arr_4 [(unsigned char)14])))))));
                                arr_62 [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_21 [i_4] [i_13] [i_13]);
                                var_39 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) ? ((((_Bool)1) ? (-1994347085) : (((/* implicit */int) (signed char)0)))) : (((((/* implicit */_Bool) (+(var_5)))) ? ((-(((/* implicit */int) arr_36 [i_15] [(_Bool)0])))) : (((((/* implicit */_Bool) (unsigned char)128)) ? (2018318953) : (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    var_40 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((unsigned long long int) (unsigned char)207))))) ? (arr_44 [i_4] [i_13] [i_13] [i_4] [i_14]) : ((~(((/* implicit */int) var_11))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 2) 
    {
        for (unsigned int i_18 = 0; i_18 < 11; i_18 += 2) 
        {
            {
                var_41 = ((/* implicit */long long int) var_11);
                /* LoopSeq 1 */
                for (unsigned int i_19 = 0; i_19 < 11; i_19 += 2) 
                {
                    var_42 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (var_4)))) ^ (((var_6) << (((((/* implicit */int) arr_8 [i_17] [i_17])) - (154)))))))) ? ((+(arr_13 [(short)7] [i_18] [9]))) : ((-(((/* implicit */int) (_Bool)0))))));
                    arr_71 [i_17] [i_17] [i_18] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) (short)192)) ? (((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL))))) : (6500536699036731023ULL)))));
                    arr_72 [i_17] = ((/* implicit */unsigned long long int) var_6);
                }
                arr_73 [i_17] = max((((/* implicit */int) ((((/* implicit */int) arr_46 [(short)10] [i_17] [i_18] [i_18])) < (((/* implicit */int) arr_19 [i_17]))))), ((+(((((/* implicit */_Bool) 8216073749309693074ULL)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (unsigned char)70)))))));
            }
        } 
    } 
}
