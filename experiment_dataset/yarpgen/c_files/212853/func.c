/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212853
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) max((var_13), (((short) ((((/* implicit */_Bool) (unsigned char)129)) || (((/* implicit */_Bool) 257400912)))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) max((((/* implicit */int) arr_5 [i_0] [i_1] [i_2])), (arr_4 [i_0] [i_1])));
                    arr_9 [i_2] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) var_0));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_3]);
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                {
                    arr_20 [i_3] [i_3] [i_4] [i_5] = ((/* implicit */short) arr_7 [i_3]);
                    var_14 = ((((/* implicit */_Bool) arr_0 [i_4])) ? (arr_0 [i_3]) : (arr_0 [i_4]));
                    var_15 = ((/* implicit */long long int) var_0);
                    arr_21 [i_5] = ((/* implicit */_Bool) ((signed char) arr_10 [i_4]));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -257400912)) * (arr_17 [11])))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)15843))))) : (((((/* implicit */_Bool) -257400908)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15844))) : (8335836712524110461LL)))));
    }
    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 15; i_7 += 4) 
        {
            for (signed char i_8 = 2; i_8 < 14; i_8 += 3) 
            {
                {
                    arr_29 [i_6] [i_7] [i_8] = ((/* implicit */_Bool) arr_27 [i_6] [i_6] [i_8 + 1] [i_6]);
                    arr_30 [i_6] [11ULL] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_8 - 2] [i_7] [i_8])) + (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_22 [i_8])) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)15843)))))))));
                    var_17 = ((/* implicit */_Bool) 18446744073709551592ULL);
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            for (short i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                {
                    var_18 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((var_1) ? (arr_2 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_6]))))) > (((/* implicit */long long int) -257400889))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1647)) ? (((/* implicit */int) (_Bool)0)) : (arr_25 [i_9] [i_9])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_36 [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_5)) : (arr_2 [i_10])))))));
                    var_19 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_2)) ? (arr_0 [i_10]) : (((/* implicit */long long int) var_2)))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) <= (((/* implicit */long long int) ((arr_32 [i_10]) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-1)) <= (((/* implicit */int) arr_23 [i_6]))))) : (((/* implicit */int) arr_37 [i_6] [i_9] [i_10])))))));
                    var_20 = ((/* implicit */signed char) max((((max((534489718U), (((/* implicit */unsigned int) var_2)))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_10] [14U])) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) var_12))))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_9])) + (arr_25 [12U] [i_9]))))));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((_Bool) max((((((/* implicit */int) (signed char)-122)) + (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) ((short) 6950095779666015467ULL)))))))));
                }
            } 
        } 
        arr_39 [i_6] [i_6] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_38 [i_6] [i_6])) ? (arr_38 [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2698)))))));
    }
    for (unsigned short i_11 = 0; i_11 < 15; i_11 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_12 = 0; i_12 < 15; i_12 += 4) 
        {
            for (long long int i_13 = 0; i_13 < 15; i_13 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) var_11))));
                    arr_49 [i_11] [i_12] [i_13] [i_12] = ((/* implicit */long long int) ((unsigned char) arr_44 [i_13]));
                }
            } 
        } 
        var_23 = ((/* implicit */int) (((~(((((/* implicit */_Bool) (unsigned char)97)) ? (arr_41 [i_11] [i_11]) : (((/* implicit */long long int) 257400888)))))) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */int) arr_42 [(_Bool)1] [i_11])) : (((/* implicit */int) (short)30761)))))))));
    }
    /* vectorizable */
    for (unsigned short i_14 = 0; i_14 < 15; i_14 += 2) /* same iter space */
    {
        var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_14])) ? (((/* implicit */int) ((288230376151711743ULL) >= (((/* implicit */unsigned long long int) -257400888))))) : (((/* implicit */int) ((unsigned char) (signed char)-40)))));
        arr_52 [(unsigned char)6] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_14])) ? (((/* implicit */int) arr_22 [i_14])) : (((/* implicit */int) ((-257400888) > (((/* implicit */int) arr_35 [i_14] [i_14])))))));
        /* LoopNest 2 */
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    var_25 = ((/* implicit */short) (signed char)100);
                    var_26 = ((var_8) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)));
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_15])) ? (((/* implicit */int) (short)15272)) : (var_2)))) ? (((int) arr_23 [i_15 - 1])) : (((/* implicit */int) arr_35 [i_15 - 1] [i_15 - 1])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_17 = 0; i_17 < 15; i_17 += 2) 
                    {
                        for (int i_18 = 0; i_18 < 15; i_18 += 1) 
                        {
                            {
                                var_28 -= ((/* implicit */unsigned long long int) arr_7 [i_18]);
                                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 2501393313971278934ULL)) ? (18446744073709551577ULL) : (((/* implicit */unsigned long long int) 0)))))));
                                arr_64 [i_14] [i_15 - 1] [i_18] [i_17] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_37 [i_15 - 1] [i_15 - 1] [i_15 - 1])) >> (((((/* implicit */int) arr_37 [i_15 - 1] [i_15 - 1] [i_15 - 1])) - (19132)))));
                                arr_65 [i_17] [i_18] [i_17] [i_16] [5U] [i_18] [i_14] = ((/* implicit */int) (+(arr_58 [i_14] [i_15 - 1])));
                            }
                        } 
                    } 
                    arr_66 [i_14] [i_15 - 1] [i_16] [i_16] |= ((/* implicit */signed char) ((((/* implicit */int) var_7)) >= (((/* implicit */int) ((_Bool) arr_36 [4LL] [i_15] [i_16] [4U])))));
                }
            } 
        } 
        arr_67 [i_14] = ((/* implicit */long long int) ((signed char) (short)-15844));
        var_30 = ((/* implicit */unsigned char) ((long long int) arr_59 [i_14] [i_14] [i_14] [i_14]));
    }
    var_31 |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) >= (((((var_5) > (((/* implicit */int) (unsigned char)255)))) ? (max((((/* implicit */long long int) var_8)), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) max((var_11), (((/* implicit */short) (_Bool)0))))))))));
}
