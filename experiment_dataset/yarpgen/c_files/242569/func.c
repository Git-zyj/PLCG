/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242569
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
    var_19 &= ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_16)) ? (((unsigned long long int) var_1)) : (((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39249))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)18536)) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_1))))) : (((((/* implicit */_Bool) arr_7 [i_3])) ? (6504207614585728246ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))))))));
                        var_21 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_3] [i_1] [i_1])) / (((/* implicit */int) (_Bool)1))))) ? (arr_2 [i_1]) : (((((/* implicit */unsigned long long int) var_18)) * (var_6))))), (((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned int) arr_0 [i_0]))))) : (arr_1 [i_0])))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
                    {
                        arr_16 [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((int) 1386766927U))) : ((~(var_2))));
                        var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0 + 1]))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned int) var_5);
                        arr_20 [i_2 - 1] [i_1] = ((/* implicit */unsigned char) ((short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) < (0ULL))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)49)), (1048575U)))) : (((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_1] [i_2] [i_5])) ? (arr_2 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_5]))))))));
                    }
                    var_24 = ((/* implicit */unsigned int) max((((((((/* implicit */int) arr_10 [i_0 + 1] [i_1])) <= (((/* implicit */int) var_17)))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)130)))) : (((((/* implicit */int) (unsigned char)130)) / (((/* implicit */int) var_17)))))), (((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) < (4294967295U)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned short) 596757378U)));
                                var_26 *= ((((((/* implicit */_Bool) arr_19 [i_7] [i_7] [i_2 - 1] [i_0 + 1] [i_7] [i_0 + 1])) ? (((var_6) / (var_9))) : (((((/* implicit */_Bool) var_6)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_2 - 1] [i_6]))))))) % (((unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_8))))));
                                var_27 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) == (max((23U), (((/* implicit */unsigned int) (_Bool)1)))))) ? (((((/* implicit */_Bool) ((var_15) / (arr_14 [i_7])))) ? (((/* implicit */int) min(((unsigned char)126), ((unsigned char)3)))) : (((/* implicit */int) ((((/* implicit */int) var_3)) == (-8)))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)18872)) | (((/* implicit */int) (unsigned short)17403))))) >= (((unsigned int) (short)(-32767 - 1))))))));
                                arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0 + 1] [i_1] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_21 [i_0 + 1] [i_0 + 1] [i_1]))))) : (((((/* implicit */_Bool) var_10)) ? (min((782500433726303966ULL), (((/* implicit */unsigned long long int) 596757378U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))))));
                            }
                        } 
                    } 
                    arr_27 [i_1] [i_1] = ((((/* implicit */_Bool) ((1048575U) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) >= (4402239257707814804ULL)))) : (((((/* implicit */int) arr_0 [i_0 + 1])) / (((/* implicit */int) arr_0 [i_0 + 1])))));
                    arr_28 [i_0] [i_1] [i_1] [i_1] = ((unsigned char) 1048575U);
                }
            } 
        } 
        arr_29 [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_3 [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -1004332610137218657LL)) >= (min((var_2), (((/* implicit */unsigned long long int) -1781329670253389348LL)))))))) : (5847536561443385721ULL)));
        var_28 = max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1)));
        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) 4367485311989106717LL))));
    }
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_9 = 1; i_9 < 11; i_9 += 3) 
        {
            for (int i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                {
                    arr_39 [i_10] [i_9 - 1] [i_9] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [(_Bool)1] [i_8 + 1] [11U] [i_8 + 1] [i_9 + 1])) ? (((/* implicit */int) arr_22 [i_8] [i_8 + 1] [i_10] [i_9] [i_9 - 1])) : (((/* implicit */int) arr_22 [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_9 - 1]))))) == (0ULL)));
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) ((((/* implicit */unsigned long long int) 7)) > (562949953421311ULL))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 72057594037927935ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_34 [1])))) ? (arr_7 [8]) : ((+(arr_15 [i_8] [i_9] [i_9 - 1] [i_10])))))) : (min((arr_3 [i_9] [i_9 + 1]), (arr_3 [i_8] [i_8 + 1])))));
                    arr_40 [i_8 + 1] [i_8 + 1] [i_10] &= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((unsigned char) arr_25 [i_8] [i_8] [i_8] [(unsigned char)0] [i_10] [i_10]))), (((var_6) >> (((/* implicit */int) (_Bool)1)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_14 [i_8 + 1]) >= (arr_1 [i_9 - 1])))))));
                }
            } 
        } 
        var_31 = arr_18 [i_8] [i_8 + 1] [i_8 + 1] [i_8] [i_8];
        /* LoopNest 3 */
        for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) 
        {
            for (short i_12 = 1; i_12 < 10; i_12 += 1) 
            {
                for (int i_13 = 3; i_13 < 11; i_13 += 4) 
                {
                    {
                        arr_50 [i_8] [i_8 + 1] = ((/* implicit */unsigned short) ((min((max((((/* implicit */unsigned long long int) arr_44 [i_8] [i_8] [i_13 + 1])), (arr_1 [i_12]))), (((/* implicit */unsigned long long int) max(((unsigned short)39933), (var_10)))))) >> (((((/* implicit */_Bool) -7096122335664592970LL)) ? (0ULL) : (((/* implicit */unsigned long long int) 2147483647LL))))));
                        var_32 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned long long int) var_5)));
                    }
                } 
            } 
        } 
    }
    for (long long int i_14 = 0; i_14 < 12; i_14 += 4) 
    {
        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_14)) ? (arr_2 [i_14]) : (((/* implicit */unsigned long long int) var_18)))))))));
        var_34 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) -1930410347)) ? (arr_45 [7ULL] [i_14]) : (((/* implicit */int) arr_46 [i_14] [i_14] [i_14] [i_14]))))))) ? ((((!(((/* implicit */_Bool) var_16)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) ^ (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) arr_36 [i_14] [i_14] [i_14]))));
    }
    var_35 = ((/* implicit */unsigned char) (-(((unsigned int) var_17))));
    var_36 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((unsigned int) 0ULL))))) : ((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (18446744073709551597ULL)))))));
}
