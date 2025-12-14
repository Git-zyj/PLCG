/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220413
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [22ULL] = arr_1 [18LL];
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (long long int i_3 = 3; i_3 < 22; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_0] = arr_8 [i_3 - 3] [i_1] [i_0] [5ULL];
                        arr_13 [i_0] [i_1] [i_1] &= ((/* implicit */_Bool) ((signed char) (signed char)3));
                        arr_14 [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_1])) * (((/* implicit */int) arr_0 [i_3 + 1]))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)24576))) | (min((arr_4 [i_3] [i_1] [i_0]), (((/* implicit */long long int) (signed char)127)))))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-4)))))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] = ((/* implicit */long long int) var_2);
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                arr_21 [i_0] [i_5] [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_8))))) != (arr_11 [i_0])));
                arr_22 [i_0] [i_0] = ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))) != (arr_11 [i_0])));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    for (long long int i_7 = 4; i_7 < 22; i_7 += 3) 
                    {
                        {
                            arr_28 [i_0] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)65535))));
                            arr_29 [i_0] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */long long int) arr_16 [i_0] [i_0]);
                        }
                    } 
                } 
                arr_30 [i_0] [i_0] = ((/* implicit */long long int) ((short) (+(((/* implicit */int) arr_7 [i_0] [i_0])))));
            }
            for (signed char i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                arr_33 [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                arr_34 [i_8] = ((_Bool) arr_25 [i_0] [i_0] [i_8] [i_8] [i_8]);
                arr_35 [i_0] [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) var_2))))));
            }
            arr_36 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))) != (var_6)));
            arr_37 [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_16 [i_0] [i_4]))));
            /* LoopNest 2 */
            for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                for (unsigned char i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    {
                        arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)15)) / (((/* implicit */int) arr_10 [i_0]))));
                        arr_43 [i_0] [(unsigned short)22] [22LL] [(unsigned short)22] [i_10] [i_10] = arr_25 [i_0] [i_4] [(unsigned short)22] [i_10] [i_0];
                    }
                } 
            } 
            arr_44 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */int) arr_19 [i_0] [i_4])) : (((/* implicit */int) (unsigned char)255))))) ? ((~(((/* implicit */int) arr_17 [i_0] [(unsigned short)3])))) : (((/* implicit */int) arr_0 [i_4]))));
        }
        arr_45 [(short)18] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)63815)) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)(-127 - 1)))))) : (((long long int) arr_40 [i_0] [i_0] [21ULL] [i_0] [(unsigned short)15] [i_0])))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-51)) - (((/* implicit */int) (_Bool)1)))))));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        arr_48 [(unsigned short)6] [i_11] = ((/* implicit */short) ((((/* implicit */long long int) ((unsigned int) (unsigned short)24576))) % (max((max((((/* implicit */long long int) arr_32 [i_11] [i_11] [i_11] [i_11])), (-7939468607135694388LL))), (((/* implicit */long long int) (unsigned short)35898))))));
        arr_49 [i_11] [i_11] = ((/* implicit */short) max((((/* implicit */int) (signed char)62)), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-1)) <= (((/* implicit */int) (unsigned short)1))))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)65535)))))))));
        arr_50 [i_11] = ((/* implicit */unsigned short) arr_5 [i_11] [i_11]);
        /* LoopNest 2 */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    arr_56 [i_11] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)31))))), (((long long int) 4398046511103LL))))) ? ((+(((/* implicit */int) ((((/* implicit */int) (unsigned short)46518)) <= (((/* implicit */int) arr_55 [i_11] [i_12 - 1] [i_13]))))))) : (((/* implicit */int) ((_Bool) (-(((/* implicit */int) (_Bool)1))))))));
                    arr_57 [8LL] [i_12] [(signed char)10] = ((/* implicit */long long int) ((unsigned short) ((unsigned short) (~(((/* implicit */int) (_Bool)1))))));
                    arr_58 [(signed char)8] [(signed char)8] [i_13] [i_11] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((arr_39 [i_12 - 1] [i_13] [i_12 - 1] [i_13]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [(unsigned char)22] [i_12 - 1])))))), (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1485111702U)) + (1LL)))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46518))) | (arr_26 [(unsigned short)0] [i_11] [i_12 - 1] [(unsigned char)20] [i_12] [(unsigned short)0] [i_13])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 16; i_14 += 3) 
                    {
                        for (long long int i_15 = 3; i_15 < 12; i_15 += 1) 
                        {
                            {
                                arr_65 [i_11] [(_Bool)1] [i_11] [i_13] [i_13] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) arr_60 [i_11] [3LL] [i_13] [i_14] [i_15 + 1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_60 [i_11] [i_11] [i_13] [(unsigned short)7] [i_15 - 3])) : (((/* implicit */int) arr_60 [i_11] [i_11] [i_11] [i_14] [i_15 - 3])))))));
                                arr_66 [(unsigned char)0] [i_12 - 1] [i_13] [(_Bool)1] [i_15 + 2] = ((/* implicit */unsigned long long int) min((-1LL), (((/* implicit */long long int) (unsigned short)15))));
                            }
                        } 
                    } 
                    arr_67 [i_13] [i_12] [i_13] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) min((((/* implicit */unsigned char) arr_60 [i_12] [i_12] [i_12] [i_12 - 1] [i_12 - 1])), (arr_7 [i_12] [i_13])))), (max(((unsigned short)46518), (((/* implicit */unsigned short) var_9))))));
                }
            } 
        } 
    }
    var_11 = ((/* implicit */unsigned long long int) ((var_7) <= (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (var_7))))))));
}
