/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215528
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
    var_18 = ((/* implicit */int) var_13);
    var_19 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) var_1))))));
    var_20 = ((/* implicit */int) var_13);
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) + (-908260097)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 2; i_1 < 9; i_1 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((((/* implicit */int) (signed char)106)) << (((((/* implicit */int) (unsigned char)171)) - (148)))))))), ((((_Bool)1) ? (16589413581328044031ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))));
            arr_5 [i_0] [i_1] [i_1 + 1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (signed char)114)), (16589413581328044031ULL)));
            arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 9025972202079517249LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 5432763076692111967LL)))))))) ? (max((((/* implicit */int) ((unsigned short) -9223372036854775803LL))), ((-(((/* implicit */int) arr_0 [i_0])))))) : (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_10))))))));
            var_23 = ((/* implicit */unsigned short) (+(((long long int) -9223372036854775803LL))));
            var_24 *= ((/* implicit */unsigned short) ((short) (signed char)72));
        }
        for (int i_2 = 2; i_2 < 9; i_2 += 4) /* same iter space */
        {
            var_25 *= ((/* implicit */long long int) ((min((9025972202079517249LL), (((/* implicit */long long int) var_15)))) >= (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)243)) ^ (1724938329))))));
            var_26 &= ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)246)));
        }
        for (int i_3 = 2; i_3 < 9; i_3 += 4) /* same iter space */
        {
            arr_14 [i_0] = ((/* implicit */unsigned char) max((3221225472U), (((/* implicit */unsigned int) (unsigned char)9))));
            var_27 = arr_12 [i_3 + 4] [i_3 + 4] [i_3 + 4];
            var_28 += ((/* implicit */long long int) min((((arr_13 [i_3 + 2] [i_3 + 1]) - (arr_13 [i_3 + 1] [i_3 + 4]))), (((/* implicit */int) ((arr_12 [i_3 + 2] [i_3 + 2] [i_3 - 2]) < (arr_12 [i_3 + 2] [i_3] [i_3 - 2]))))));
            /* LoopSeq 3 */
            for (int i_4 = 1; i_4 < 12; i_4 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_5 = 1; i_5 < 9; i_5 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 3; i_6 < 11; i_6 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned short) arr_16 [i_3] [i_4] [i_6 - 2] [i_5 + 4]);
                        var_30 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) 6008252999267139877ULL))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_22 [i_3] [i_3] [i_4] [i_5 + 2] [i_5 + 2])) : (((/* implicit */int) (unsigned char)255))))));
                        arr_23 [i_5] [i_4] [i_6] [i_5] [i_0] [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (arr_13 [i_5 + 2] [i_5]) : (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_9 [i_3] [i_3])))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_31 = ((/* implicit */_Bool) ((3681486456151926317LL) + (((/* implicit */long long int) -857448163))));
                        var_32 = (~(((/* implicit */int) arr_26 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] [i_7])));
                        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) var_6))));
                    }
                    var_34 *= ((((/* implicit */int) var_17)) + (((((/* implicit */int) var_17)) * (((/* implicit */int) var_13)))));
                }
                var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((2817208048U), (((/* implicit */unsigned int) (short)-19468))))) ? (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_0] [i_4]))))), (((short) arr_10 [i_0] [i_0]))))) : (min((((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_11))))), ((-(((/* implicit */int) arr_19 [i_4]))))))));
                arr_27 [i_0] [i_4] [i_4 - 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_15 [i_3 + 1] [i_3 + 1] [i_4 - 1] [i_4 + 1]))));
                var_36 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 603328404U)) && (((/* implicit */_Bool) (unsigned char)0)))) ? (min((((/* implicit */long long int) ((unsigned char) arr_7 [i_0] [i_4 - 1]))), (((9025972202079517249LL) >> (((((/* implicit */int) var_1)) - (16289))))))) : (max((3681486456151926317LL), (((/* implicit */long long int) (short)960))))));
                var_37 = arr_10 [i_3] [i_4];
            }
            /* vectorizable */
            for (int i_8 = 1; i_8 < 12; i_8 += 4) /* same iter space */
            {
                arr_30 [i_0] [i_8] = ((/* implicit */int) (-(((((/* implicit */_Bool) 1857330492381507557ULL)) ? (((/* implicit */unsigned int) 1)) : (603328404U)))));
                var_38 = (unsigned short)8019;
            }
            for (long long int i_9 = 0; i_9 < 13; i_9 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 3; i_10 < 9; i_10 += 4) 
                {
                    for (unsigned short i_11 = 3; i_11 < 12; i_11 += 4) 
                    {
                        {
                            var_39 = (_Bool)1;
                            var_40 = arr_19 [i_10];
                        }
                    } 
                } 
                arr_37 [i_9] = ((/* implicit */int) arr_1 [i_3 + 1] [i_3 - 2]);
                var_41 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (~(939524096)))) ? ((~(((/* implicit */int) (unsigned char)212)))) : (((/* implicit */int) arr_25 [i_3] [i_3] [i_3] [i_3] [i_3 + 2])))));
                arr_38 [i_0] [i_9] = ((/* implicit */_Bool) arr_4 [i_0] [i_9]);
            }
            var_42 = ((/* implicit */unsigned int) ((1857330492381507586ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
        }
        for (int i_12 = 2; i_12 < 9; i_12 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 13; i_13 += 4) 
            {
                for (int i_14 = 0; i_14 < 13; i_14 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_15 = 0; i_15 < 13; i_15 += 4) 
                        {
                            var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (_Bool)0))) ? (((long long int) ((3681486456151926317LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((arr_34 [i_0] [i_12] [i_12]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))))));
                            var_44 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)235))));
                        }
                        for (unsigned char i_16 = 2; i_16 < 12; i_16 += 4) 
                        {
                            arr_57 [i_16] = 939524096;
                            arr_58 [i_0] [i_12] [i_13] [i_13] [i_16 + 1] = max((((/* implicit */int) arr_17 [i_12 - 2] [i_12] [i_16 + 1] [i_14])), (((int) arr_17 [i_12 - 2] [i_12] [i_16 + 1] [i_16])));
                        }
                        for (long long int i_17 = 0; i_17 < 13; i_17 += 4) 
                        {
                            var_45 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((max((arr_34 [i_12] [i_12 - 1] [i_13]), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) arr_60 [i_13] [i_13])) : (((/* implicit */int) (_Bool)1))))))))));
                            arr_62 [i_0] [i_12] [i_12] [i_0] [i_12] [i_14] [i_17] = ((unsigned char) (short)29923);
                        }
                        var_46 = ((/* implicit */int) max((var_46), ((~(((/* implicit */int) max(((unsigned char)12), (((/* implicit */unsigned char) (_Bool)1)))))))));
                        var_47 = ((/* implicit */int) ((unsigned int) arr_49 [i_0] [i_13] [i_0]));
                        /* LoopSeq 1 */
                        for (int i_18 = 0; i_18 < 13; i_18 += 4) 
                        {
                            arr_65 [i_0] [i_12 + 1] [i_18] [i_14] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (arr_39 [i_12]))))) < (((/* implicit */unsigned long long int) max((61562820), (((/* implicit */int) (unsigned char)10)))))));
                            var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)192)) ? (550406769) : (-1062302457)))), (min((arr_45 [i_12 - 2] [i_12 + 4] [i_12]), (arr_45 [i_12 + 4] [i_12 + 4] [i_0]))))))));
                            arr_66 [i_0] [i_0] [i_13] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                            arr_67 [i_0] [i_0] [i_18] [i_13] [i_18] [i_13] = ((/* implicit */unsigned short) arr_43 [i_12] [i_14] [i_12]);
                        }
                    }
                } 
            } 
            var_49 *= ((/* implicit */long long int) min((arr_45 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_61 [i_0] [i_0] [i_0] [i_0] [i_12] [i_0]))));
        }
        var_50 = ((/* implicit */unsigned short) arr_19 [i_0]);
        arr_68 [i_0] = ((/* implicit */unsigned int) ((long long int) (-(arr_10 [i_0] [i_0]))));
    }
}
