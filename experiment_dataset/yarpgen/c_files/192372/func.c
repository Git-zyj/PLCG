/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192372
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_14 *= ((/* implicit */unsigned char) arr_2 [i_3] [i_0] [i_0]);
                        var_15 = ((/* implicit */short) (_Bool)1);
                        var_16 = ((/* implicit */int) max((var_16), (max(((+(((/* implicit */int) (unsigned char)135)))), ((-(((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) (unsigned short)30260))))))))));
                        var_17 = var_3;
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned char) ((unsigned long long int) arr_5 [i_0 + 1]));
        var_19 = ((/* implicit */short) ((((/* implicit */int) max((arr_7 [i_0] [i_0] [i_0 + 1] [i_0 + 2] [i_0 + 2]), (((/* implicit */unsigned short) (unsigned char)160))))) << (((((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0 + 2])), ((unsigned short)618)))) - (187)))));
    }
    /* vectorizable */
    for (signed char i_4 = 1; i_4 < 20; i_4 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_3 [i_4] [i_4]))) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) var_8)))))));
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 2; i_7 < 20; i_7 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 2; i_8 < 20; i_8 += 4) 
                        {
                            var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_6 [i_4] [i_7 + 2] [i_6] [i_8])) : (((/* implicit */int) arr_6 [i_4] [i_7 - 1] [i_6] [i_8]))));
                            var_22 = ((/* implicit */unsigned short) ((arr_11 [i_4 + 2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4 + 2])))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_4 - 1])) ? (((/* implicit */int) arr_18 [i_6])) : (arr_8 [i_4 + 1] [i_5] [i_5] [i_7 - 2])));
                            var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_26 [i_4] [i_5] [i_4] [i_7] [i_5]))))) ? (arr_28 [i_4 + 2] [i_4 + 2] [i_4] [4LL] [i_4]) : (((/* implicit */int) var_2))))));
                            arr_29 [(short)6] [i_5] [i_6] [i_7] [i_6] = ((/* implicit */int) arr_21 [i_4] [i_6] [i_7] [i_9]);
                            arr_30 [i_6] [i_5] [i_6] [i_6] [i_7] [i_9] = ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) 19ULL)))));
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((arr_11 [i_4 - 1]) != (((/* implicit */unsigned long long int) arr_1 [i_4 + 2] [i_4])))))));
                        }
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_7 + 2] [i_4 + 2])) : (((/* implicit */int) arr_3 [i_7 - 2] [i_4 - 1]))));
                        var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_4 - 1]))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_10 = 1; i_10 < 20; i_10 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_11 = 0; i_11 < 23; i_11 += 1) 
        {
            arr_36 [i_11] = ((/* implicit */unsigned char) var_1);
            var_28 = ((/* implicit */short) ((signed char) arr_34 [i_10] [i_11]));
        }
        for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                for (long long int i_14 = 2; i_14 < 19; i_14 += 3) 
                {
                    for (short i_15 = 2; i_15 < 22; i_15 += 4) 
                    {
                        {
                            arr_48 [i_10] [i_14] = ((/* implicit */int) min((min((var_7), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)24983)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35101))) : (arr_42 [i_13])))))), (((/* implicit */long long int) var_13))));
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (-(((unsigned int) arr_45 [i_15] [i_15] [i_15 - 2] [i_14] [(short)18] [i_12])))))));
                            arr_49 [i_10 + 2] [i_10 + 2] [i_13] [i_14] [i_15] = ((/* implicit */unsigned int) arr_47 [i_10] [i_12] [i_13] [i_14] [i_15]);
                            var_30 = ((/* implicit */unsigned char) arr_40 [i_10] [i_10] [i_10 + 2] [i_10 + 3]);
                        }
                    } 
                } 
            } 
            var_31 = ((((((/* implicit */_Bool) arr_47 [i_10 + 3] [i_12] [i_10] [i_12] [i_12])) && (((/* implicit */_Bool) arr_47 [i_10 + 1] [i_10] [i_10 + 3] [i_10 - 1] [i_10 - 1])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_32 [i_10 + 2]))))) : (((unsigned long long int) arr_32 [i_10 + 3])));
        }
        for (unsigned char i_16 = 1; i_16 < 20; i_16 += 1) 
        {
            var_32 = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) arr_40 [i_10 + 2] [i_10 - 1] [i_16] [i_16])))));
            var_33 = ((/* implicit */_Bool) arr_31 [i_10]);
            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)6229)), (1693126664U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [(unsigned char)18] [i_10] [(unsigned char)18]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-7)) ? (arr_50 [i_16] [i_16]) : (((/* implicit */int) (signed char)86))))) : (((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
        }
        arr_53 [i_10] [i_10] = max((((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_10 + 1] [i_10 + 1] [i_10 + 3] [i_10 - 1] [i_10])) && (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0)))))))), (arr_40 [i_10 - 1] [i_10 + 2] [i_10 + 3] [i_10 + 1]));
        arr_54 [i_10 + 2] = ((((/* implicit */unsigned long long int) var_4)) & (((((/* implicit */_Bool) arr_52 [i_10 - 1] [i_10 + 2] [i_10 - 1])) ? (((((/* implicit */_Bool) arr_51 [i_10] [i_10])) ? (15663812365366292450ULL) : (((/* implicit */unsigned long long int) arr_42 [i_10])))) : (((/* implicit */unsigned long long int) min((680105103), (((/* implicit */int) arr_39 [i_10] [i_10]))))))));
    }
    var_35 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (var_6)))) * ((-(var_10))))) + (((/* implicit */unsigned long long int) min((-1531490161), (-1352385083))))));
    var_36 = (((_Bool)1) ? (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4))), (((/* implicit */unsigned int) var_2)))) : (max((var_4), (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))))));
    var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) (-(455430526))))));
    var_38 = ((/* implicit */unsigned int) (short)32749);
}
