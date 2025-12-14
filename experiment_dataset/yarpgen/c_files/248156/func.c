/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248156
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)-8268))));
        arr_3 [i_0] = ((/* implicit */short) var_13);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_15 *= ((/* implicit */unsigned char) ((((var_0) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [16U]))))) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) > (((((/* implicit */_Bool) (short)-11916)) ? (((/* implicit */long long int) 2756011530U)) : (8412060662298610322LL)))));
            var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_0] [i_1]))));
        }
        for (unsigned char i_2 = 3; i_2 < 16; i_2 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_2 - 1])) ? (((/* implicit */int) arr_4 [i_2] [i_0])) : (((/* implicit */int) var_9))))) ? (min((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0])) : (arr_6 [i_2]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))))) : (((/* implicit */unsigned long long int) min((var_12), (((long long int) arr_0 [i_2])))))));
            var_19 = ((/* implicit */short) 2852667619057607016ULL);
            arr_9 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9155130435223277296LL)) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) 1565388119U))))) ? (((/* implicit */long long int) ((unsigned int) arr_4 [i_2 - 1] [i_2 + 1]))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (2745820701U)))), ((~(var_12)))))));
            var_20 &= ((/* implicit */short) arr_4 [i_0] [i_2]);
        }
        for (unsigned char i_3 = 3; i_3 < 16; i_3 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) (+(min((((/* implicit */long long int) arr_2 [i_3 - 1])), (var_8)))));
            arr_13 [i_0] [i_3] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_3])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2164299653U)) ? (arr_5 [i_0] [i_3 - 1]) : (arr_8 [i_0] [i_3])))))))));
            var_22 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) % (var_1)));
            var_23 += ((/* implicit */unsigned char) arr_1 [i_3]);
        }
        var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_5 [i_0] [i_0]), (((/* implicit */long long int) arr_2 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        var_25 = ((/* implicit */unsigned int) var_11);
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    {
                        arr_26 [i_4] [i_5] [i_6] [i_5] [i_7] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6])) ? (6112285017781793883LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_22 [i_4]))) || (((4290770444U) == (arr_16 [(unsigned char)2] [i_5])))));
                    }
                } 
            } 
        } 
    }
    var_27 += ((/* implicit */unsigned int) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))));
    var_28 = ((/* implicit */_Bool) (~(min((((/* implicit */long long int) min(((short)(-32767 - 1)), ((short)-1)))), (max((var_12), (((/* implicit */long long int) (short)-24923))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) 
    {
        var_29 += var_5;
        arr_31 [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((var_6) ? (((/* implicit */long long int) var_13)) : (var_12)))));
        arr_32 [(_Bool)1] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) > (var_0))))) : ((+(2668636402U)))));
        /* LoopSeq 3 */
        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            arr_36 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_8] [i_8])) ? (arr_29 [i_8] [i_9]) : (arr_29 [i_8] [i_9])));
            arr_37 [i_8] [i_8] [i_8] = ((/* implicit */short) (-(arr_23 [i_8] [i_9])));
            var_30 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
        }
        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_11 = 0; i_11 < 21; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    for (unsigned int i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */long long int) arr_45 [i_8] [i_8] [i_10] [i_11] [i_8] [i_13]);
                            var_32 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (arr_24 [i_10] [i_11] [i_11] [i_13]) : (arr_24 [i_10] [i_10] [i_12] [i_13])));
                            var_33 -= ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (arr_19 [i_12]));
                            arr_48 [i_8] [i_10] [i_11] [i_11] [i_11] [i_12] [i_10] = ((/* implicit */short) arr_43 [i_10] [i_11] [i_12]);
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
            }
            for (unsigned int i_14 = 0; i_14 < 21; i_14 += 4) 
            {
                var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) arr_23 [i_8] [i_8])) ? (var_0) : (((/* implicit */long long int) 985201610U)))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_41 [i_8] [i_10] [i_14])))))));
                var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))));
                var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_8])) ? (((/* implicit */long long int) 451442687U)) : (var_12)))) ? (7882618937301143433ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_8] [i_10] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_8] [i_8] [i_10] [i_8]))) : (var_8))))));
                /* LoopSeq 1 */
                for (unsigned char i_15 = 0; i_15 < 21; i_15 += 3) 
                {
                    arr_55 [i_10] [i_10] [i_10] = ((unsigned long long int) ((long long int) var_2));
                    var_38 = ((/* implicit */short) ((((/* implicit */_Bool) 1944787508947929864ULL)) ? (var_12) : (((/* implicit */long long int) arr_53 [i_8] [i_8] [i_8] [i_10] [i_8] [i_8]))));
                    arr_56 [i_10] [i_8] [i_10] = ((/* implicit */unsigned int) var_6);
                    var_39 += ((((/* implicit */_Bool) var_9)) ? (4227858432U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_45 [i_8] [i_8] [i_8] [i_14] [i_15] [i_15]))) == (var_12))))));
                    var_40 -= ((((/* implicit */_Bool) arr_46 [i_8] [i_8] [i_14] [i_8] [i_14] [i_14] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_8] [i_10] [i_14]))) : (arr_29 [i_8] [i_8]));
                }
                arr_57 [i_10] = ((/* implicit */unsigned int) (+(arr_24 [i_8] [i_10] [i_14] [i_14])));
            }
            for (short i_16 = 4; i_16 < 20; i_16 += 2) 
            {
                var_41 ^= ((/* implicit */unsigned int) ((short) ((((/* implicit */long long int) ((/* implicit */int) arr_45 [(short)11] [i_8] [i_10] [i_10] [i_8] [i_8]))) <= (-4040425745764680251LL))));
                arr_61 [i_8] [i_10] [i_8] = ((/* implicit */unsigned int) (short)-17904);
                var_42 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_16 - 2] [i_16 - 1] [i_16 - 3])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_16 - 2] [i_16 - 1] [i_16 - 3])))));
            }
            var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_8] [i_8]))) : (arr_21 [i_10])));
            var_44 = ((/* implicit */short) ((unsigned long long int) var_8));
        }
        for (short i_17 = 0; i_17 < 21; i_17 += 4) 
        {
            var_45 = ((/* implicit */long long int) (~(((/* implicit */int) ((short) arr_38 [i_8] [i_8] [(_Bool)0])))));
            arr_65 [i_17] &= ((/* implicit */short) var_1);
            arr_66 [i_8] [i_17] [i_17] = ((/* implicit */_Bool) arr_47 [i_8] [i_17]);
            arr_67 [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_2) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_0))))));
        }
        arr_68 [i_8] [i_8] = ((/* implicit */unsigned char) arr_27 [i_8] [i_8]);
    }
    for (long long int i_18 = 0; i_18 < 12; i_18 += 2) 
    {
        var_46 = ((/* implicit */short) var_2);
        var_47 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_18] [i_18])) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_9)), (var_1)))) : (min((arr_28 [i_18]), (((/* implicit */unsigned long long int) 590363978U))))))) || ((!(((/* implicit */_Bool) var_1))))));
        /* LoopSeq 2 */
        for (unsigned int i_19 = 0; i_19 < 12; i_19 += 3) 
        {
            var_48 -= ((/* implicit */long long int) ((max((arr_40 [i_18] [i_19] [i_18]), (arr_40 [i_18] [i_18] [i_19]))) == (min((((3916209154U) << (((2810200130U) - (2810200129U))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_72 [i_18] [i_18]))) <= (var_8))))))));
            var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) (+(((/* implicit */int) (((+(((/* implicit */int) (short)-1)))) < (((((/* implicit */int) var_4)) / (((/* implicit */int) arr_4 [i_18] [i_19]))))))))))));
            var_50 = ((/* implicit */unsigned long long int) max((var_50), (((/* implicit */unsigned long long int) ((unsigned int) (~(((unsigned int) var_2))))))));
        }
        for (short i_20 = 0; i_20 < 12; i_20 += 3) 
        {
            arr_76 [i_18] [i_20] = var_12;
            var_51 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_75 [i_18] [i_18])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) + (9223372036854775807LL))) >> (((((unsigned int) var_1)) - (3715454646U)))));
        }
    }
    var_52 -= ((/* implicit */_Bool) 2017612633061982208LL);
}
