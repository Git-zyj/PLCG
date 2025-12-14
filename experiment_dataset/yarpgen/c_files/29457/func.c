/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29457
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_11 [(unsigned short)1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0]))));
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (-(2147483647)))) ? (((/* implicit */int) arr_9 [i_0] [i_1])) : (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned short) (_Bool)1);
    }
    /* LoopSeq 4 */
    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (((((~(((/* implicit */int) (short)13766)))) + (2147483647))) >> (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (12710959508645286599ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))))))))));
        var_18 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_3] [i_3] [i_3 - 2]))) ? (((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_3] [i_3 - 2] [i_3 - 1])))) : ((-(((/* implicit */int) var_14))))))));
        var_19 = arr_13 [i_3];
        arr_15 [i_3 - 2] [i_3 - 1] &= ((/* implicit */unsigned long long int) arr_0 [i_3] [i_3 - 1]);
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) ((int) var_4));
        arr_19 [i_4] [i_4] = ((/* implicit */short) (-(((((/* implicit */int) arr_18 [i_4])) << (((((/* implicit */int) (short)31116)) - (31106)))))));
        var_21 = ((/* implicit */unsigned int) ((unsigned short) (((_Bool)1) || (var_12))));
        var_22 = ((/* implicit */_Bool) max((var_22), (((arr_17 [i_4] [i_4]) || (((/* implicit */_Bool) arr_16 [i_4]))))));
    }
    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)19429)) + (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) || (((/* implicit */_Bool) arr_21 [i_5])))))));
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                for (unsigned char i_8 = 1; i_8 < 19; i_8 += 3) 
                {
                    for (short i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        {
                            arr_32 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((unsigned long long int) 18446744073709551615ULL)) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_30 [(unsigned char)5] [i_7] [i_5] [i_7] [i_7]), (((/* implicit */short) arr_22 [(_Bool)1] [i_9]))))))))) ? (var_8) : (12710959508645286599ULL)));
                            arr_33 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_5] [i_5]))) | (var_7)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)170))))) : (max((arr_21 [i_5]), (var_4)))))) || ((!(((/* implicit */_Bool) (unsigned char)22))))));
                            arr_34 [i_5] [i_7] [i_5] [i_5] [i_8 + 1] [i_7] = ((((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (_Bool)1)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_8 - 1] [i_8 - 1]))) : (arr_20 [i_5] [i_8 - 1])))));
                        }
                    } 
                } 
            } 
            var_24 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_27 [i_5] [i_5] [i_6])) ? (((/* implicit */int) arr_23 [i_5] [(_Bool)1])) : (((/* implicit */int) arr_25 [i_5] [i_6] [i_6])))), (((/* implicit */int) (_Bool)1))));
            arr_35 [i_5] [i_6] [i_5] = var_11;
            arr_36 [i_5] [6] [i_6] = ((/* implicit */_Bool) var_4);
        }
        for (int i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
        {
            arr_39 [i_5] = ((/* implicit */int) max((((((((/* implicit */unsigned long long int) arr_27 [i_5] [i_10] [i_10])) / (var_10))) < (((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */int) (short)20345)) : (((/* implicit */int) (_Bool)0))))))), ((_Bool)1)));
            arr_40 [i_5] [i_5] = ((/* implicit */int) (_Bool)1);
            var_25 = (_Bool)1;
            arr_41 [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) arr_27 [i_5] [i_5] [i_5]))), (((((/* implicit */int) var_5)) ^ (arr_27 [i_10] [i_10] [16U])))));
        }
    }
    /* vectorizable */
    for (unsigned char i_11 = 2; i_11 < 23; i_11 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (unsigned short i_13 = 0; i_13 < 24; i_13 += 2) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (_Bool)1))));
                    arr_49 [i_12] [i_12] [i_13] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)19429)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10803))) : (262016ULL))));
                    /* LoopNest 2 */
                    for (short i_14 = 1; i_14 < 23; i_14 += 3) 
                    {
                        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                        {
                            {
                                arr_55 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */short) var_6);
                                arr_56 [i_11] [i_12] [i_14] [i_12] = ((/* implicit */short) ((((/* implicit */int) arr_52 [i_12] [i_14 - 1] [i_15] [i_15 - 1] [i_15 - 1])) + (arr_43 [i_11])));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */_Bool) arr_45 [i_11 - 2]);
                    var_28 += ((/* implicit */unsigned short) (-(((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234)))))));
                }
            } 
        } 
        var_29 = ((/* implicit */_Bool) arr_51 [i_11] [i_11] [i_11]);
        arr_57 [i_11 + 1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) - (14893778387549641531ULL)));
        /* LoopNest 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (unsigned char i_17 = 0; i_17 < 24; i_17 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 4) 
                        {
                            {
                                arr_66 [i_16] [i_16] [i_17] = ((/* implicit */unsigned char) (_Bool)1);
                                var_30 = ((/* implicit */_Bool) 12710959508645286596ULL);
                                var_31 += ((/* implicit */_Bool) arr_60 [i_11] [i_19] [i_11 - 2]);
                                var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_47 [i_11] [i_16]))))) ? (((((/* implicit */int) arr_64 [i_16] [i_11 - 2] [i_16] [i_16] [i_16] [i_19] [i_17])) & (((/* implicit */int) (unsigned short)65513)))) : (((/* implicit */int) arr_48 [i_16] [i_11 + 1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_20 = 0; i_20 < 24; i_20 += 1) 
                    {
                        for (unsigned int i_21 = 1; i_21 < 23; i_21 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_70 [i_21 + 1] [i_11 - 2] [i_21 + 1] [7]) : (-1596301446)));
                                var_34 -= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_48 [(_Bool)1] [i_16])) ? (((/* implicit */int) (unsigned char)65)) : (((/* implicit */int) var_2))))));
                                var_35 = ((/* implicit */_Bool) ((((-2131193651) & (((/* implicit */int) (unsigned char)254)))) | (((/* implicit */int) ((unsigned char) arr_63 [i_11] [i_16] [i_16] [i_21 + 1])))));
                            }
                        } 
                    } 
                    arr_72 [i_16] [i_16] [i_16] [i_16] = ((/* implicit */unsigned short) (-(arr_42 [i_11 - 2])));
                    arr_73 [i_16] [i_16] [i_17] [i_17] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_50 [i_11 + 1]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_22 = 4; i_22 < 21; i_22 += 2) 
                    {
                        var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((((var_4) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_76 [i_11] [i_11] [i_11] [i_11 - 1]))) < (arr_60 [i_11] [i_22] [i_11]))))) : (arr_42 [i_11]))))));
                        /* LoopSeq 1 */
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_16]))) : (((((/* implicit */_Bool) 4294967295U)) ? (1879048192U) : (((/* implicit */unsigned int) 0))))));
                            arr_80 [i_11] [i_11] [i_11] [i_11] [(unsigned char)5] [i_11] [i_16] = ((/* implicit */_Bool) (unsigned char)0);
                        }
                    }
                }
            } 
        } 
    }
}
