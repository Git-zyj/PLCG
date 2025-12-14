/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27818
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) (signed char)42))))))) ? (max((67108863LL), (((/* implicit */long long int) (unsigned char)33)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((var_2) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_3 [i_0] [i_0])))) ? (var_3) : (((/* implicit */int) var_1))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) var_10);
        arr_6 [(_Bool)1] [i_0] = (!(((/* implicit */_Bool) (~(((/* implicit */int) var_9))))));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 1; i_2 < 21; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                var_13 = ((/* implicit */short) ((long long int) (-(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-42)), ((unsigned char)6)))))));
                arr_15 [i_3] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_10)))) ? (((long long int) arr_10 [i_1] [(signed char)11])) : (((/* implicit */long long int) ((arr_14 [i_1] [i_1] [i_2 - 1] [i_3]) << (((((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1])) - (21424))))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (var_3)))) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (var_3) : (((/* implicit */int) var_10)))) : (((/* implicit */int) max((var_0), (((/* implicit */short) var_1)))))))) : (((2147483648U) << (((((/* implicit */int) (signed char)-7)) + (22)))))));
            }
            var_14 = ((0) - (((/* implicit */int) (signed char)-1)));
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) (signed char)-77)) % (((/* implicit */int) (unsigned char)131))))))) ? (((((/* implicit */int) var_8)) << (((max((((/* implicit */unsigned int) arr_7 [3U] [i_1])), (var_2))) - (2455341200U))))) : (var_7)));
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            /* LoopSeq 4 */
            for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                var_16 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1]))))) < (((/* implicit */int) arr_20 [i_1] [i_4] [i_1])));
                /* LoopNest 2 */
                for (unsigned char i_6 = 1; i_6 < 21; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        {
                            arr_25 [i_1] [i_4] [i_1] [i_6] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (unsigned char)29))));
                            var_17 = ((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) (signed char)0)))));
                            var_18 = ((/* implicit */_Bool) var_9);
                        }
                    } 
                } 
                arr_26 [i_1] [i_4] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) var_4)))));
                var_19 ^= ((/* implicit */_Bool) arr_24 [i_1] [i_4] [i_1] [i_1] [i_1] [i_5]);
            }
            for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)184))))) >= ((-(((/* implicit */int) var_9))))));
                var_21 ^= ((/* implicit */unsigned char) var_0);
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_31 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))));
                arr_32 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))) & ((~(arr_30 [i_1])))));
            }
            for (long long int i_10 = 3; i_10 < 21; i_10 += 4) 
            {
                arr_35 [i_1] [i_1] [i_1] = ((/* implicit */long long int) var_1);
                /* LoopSeq 2 */
                for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_12 = 1; i_12 < 21; i_12 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) var_7))))))));
                        var_23 = ((((/* implicit */_Bool) (-(arr_14 [i_1] [i_4] [i_10] [i_10])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))) : (arr_21 [i_10 - 1] [i_10] [i_10 - 2] [i_12 - 1] [i_12 - 1] [i_12]));
                    }
                    for (signed char i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        var_24 = (-(((/* implicit */int) var_8)));
                        arr_43 [i_1] [i_1] [i_1] [i_11] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */int) var_9)))))));
                        arr_44 [2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((arr_30 [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                    }
                    for (signed char i_14 = 0; i_14 < 22; i_14 += 3) 
                    {
                        var_25 = ((/* implicit */signed char) (~(-2082653159188756589LL)));
                        var_26 = ((/* implicit */int) ((signed char) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_0)))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_27 = (((!(var_6))) ? ((-(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */int) var_5)))));
                        arr_51 [i_1] [i_4] [i_10 - 3] [i_1] [i_11] [i_11] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 0; i_16 < 22; i_16 += 4) 
                    {
                        var_28 = ((/* implicit */short) (+((-(((/* implicit */int) var_9))))));
                        arr_54 [i_1] [i_4] [i_10] [i_10] [i_11] [i_1] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) (short)-11698)) : (((/* implicit */int) (unsigned char)215))));
                        arr_55 [i_1] [i_4] [i_4] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_37 [i_1] [i_1]))) ? (((var_6) ? (((/* implicit */int) var_0)) : (var_7))) : (((var_7) & (var_7)))));
                    }
                }
                for (short i_17 = 2; i_17 < 20; i_17 += 4) 
                {
                    var_29 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_22 [i_1] [i_17 + 1] [i_10] [i_17] [i_10])) && (((/* implicit */_Bool) var_1)))) ? ((~(((/* implicit */int) (unsigned short)256)))) : (((/* implicit */int) var_9))));
                    var_30 -= ((/* implicit */_Bool) (-(((((((/* implicit */int) var_0)) + (2147483647))) << (((((/* implicit */int) var_5)) - (1)))))));
                }
            }
            /* LoopNest 2 */
            for (signed char i_18 = 0; i_18 < 22; i_18 += 4) 
            {
                for (int i_19 = 0; i_19 < 22; i_19 += 4) 
                {
                    {
                        arr_63 [i_1] [i_18] = ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (((unsigned int) var_6)));
                        arr_64 [i_1] [i_18] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_10)) ? (arr_14 [i_1] [i_1] [i_18] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                        arr_65 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_12 [i_18] [i_19])))) ? ((~(((/* implicit */int) (short)15)))) : (((/* implicit */int) ((_Bool) var_5)))));
                    }
                } 
            } 
            arr_66 [i_1] = ((var_7) + ((-(((/* implicit */int) var_1)))));
        }
        for (unsigned long long int i_20 = 0; i_20 < 22; i_20 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_21 = 0; i_21 < 22; i_21 += 4) 
            {
                arr_71 [i_1] [i_21] [i_21] [i_1] = ((/* implicit */_Bool) max(((((+(var_2))) >> (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))) - (228))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10)))))));
                var_31 = ((/* implicit */signed char) var_2);
                var_32 = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */int) var_9)) : ((+(var_7))))), (((((/* implicit */int) ((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) << (((arr_22 [i_1] [i_20] [i_20] [i_21] [i_21]) - (17224060590600798761ULL)))))))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */int) var_9)) : ((+(var_7))))), (((((/* implicit */int) ((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) << (((((arr_22 [i_1] [i_20] [i_20] [i_21] [i_21]) - (17224060590600798761ULL))) - (3050706851405516197ULL))))))));
            }
            arr_72 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (((~(arr_10 [i_1] [i_20]))) == (((/* implicit */int) max((((/* implicit */short) var_10)), (max((arr_18 [i_1]), (((/* implicit */short) var_11)))))))));
            var_33 |= ((/* implicit */int) max((var_2), (max(((~(var_2))), (((unsigned int) var_6))))));
            arr_73 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) max((max((((((/* implicit */unsigned long long int) var_7)) / (arr_22 [i_1] [i_20] [i_1] [i_1] [i_20]))), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_8)), (var_0)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_1] [i_1] [i_20] [i_1])) >> (((/* implicit */int) var_5)))))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_22 = 0; i_22 < 22; i_22 += 3) 
        {
            arr_76 [i_1] [i_1] [i_22] = ((/* implicit */unsigned short) max(((((+(var_7))) + (((/* implicit */int) ((short) arr_34 [i_1] [i_22] [i_1] [i_1]))))), ((~(((((/* implicit */int) var_10)) >> (((/* implicit */int) var_4))))))));
            arr_77 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) >= (6029353805547427759LL)));
            arr_78 [i_1] = ((/* implicit */_Bool) var_3);
        }
        for (unsigned int i_23 = 0; i_23 < 22; i_23 += 3) 
        {
            arr_82 [i_1] [i_1] [i_23] = ((/* implicit */_Bool) (~((((+(var_2))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (var_3))))))));
            var_34 -= var_0;
        }
        arr_83 [i_1] [(unsigned char)16] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_9))) + (((((/* implicit */_Bool) 3876001540U)) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) var_3)) ? ((~(((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */int) var_1)))))) : (((/* implicit */int) var_6))));
        var_35 ^= ((/* implicit */unsigned char) var_1);
        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_61 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))))) ? (max((((((/* implicit */_Bool) arr_70 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_62 [i_1] [i_1] [i_1] [i_1])) : (var_7)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (arr_53 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
    }
    var_37 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned int) (((~(2147483647))) + (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))))));
}
