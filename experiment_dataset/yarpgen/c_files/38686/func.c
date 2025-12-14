/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38686
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (-4631727411874997968LL) : (arr_3 [i_0] [(unsigned char)12])))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)10)), (2476855689U)))) : ((((!(((/* implicit */_Bool) arr_0 [i_1])))) ? (((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-16))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_15 = ((arr_9 [(_Bool)1] [i_3 - 2] [i_2] [i_1] [i_4]) / (arr_9 [i_3 - 1] [i_3 - 2] [i_2] [i_1] [i_4]));
                                var_16 = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_2] [i_1] [i_3 - 1] [i_4 - 1])) + (((/* implicit */int) arr_8 [i_2] [i_2] [i_3 - 1] [i_3 - 1] [i_3 - 1]))));
                                var_17 = ((arr_6 [i_4 + 2] [i_1] [i_1] [i_4 + 2]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [i_4 + 2] [i_1] [i_2] [i_3 - 1])));
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_0] [i_0]) > (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                }
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (long long int i_6 = 1; i_6 < 14; i_6 += 4) 
                    {
                        {
                            arr_20 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_6] [i_1] [i_6] [i_5])) ^ (((/* implicit */int) min((arr_15 [i_1] [i_1] [i_6 - 1] [i_5]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)108))))))))));
                            arr_21 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */int) arr_16 [i_0] [i_1] [i_5] [i_5] [i_6 - 1])) | (((/* implicit */int) var_11))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 -= ((/* implicit */unsigned long long int) max((var_1), (((/* implicit */long long int) var_7))));
    var_20 = ((/* implicit */short) min((var_20), (var_12)));
    /* LoopSeq 2 */
    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            for (signed char i_9 = 3; i_9 < 11; i_9 += 4) 
            {
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_7] [i_8] [i_9])) ? ((-(arr_26 [0ULL] [0ULL] [0ULL]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_8] [i_8] [i_9] [i_9] [i_9] [i_8] [i_8])))))));
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        for (int i_11 = 0; i_11 < 12; i_11 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ (arr_5 [i_9 - 3] [i_11] [i_9 + 1]))), (((/* implicit */unsigned long long int) arr_12 [i_8] [i_9] [i_10]))));
                                var_23 ^= ((/* implicit */long long int) ((((arr_16 [i_7] [i_8] [i_8] [i_11] [i_11]) ? (((/* implicit */int) arr_17 [i_7] [i_11] [i_10] [i_11])) : (((/* implicit */int) arr_17 [i_7] [i_11] [i_7] [i_11])))) >> (((arr_16 [i_7] [i_8] [i_9 - 2] [i_10] [14]) ? (((/* implicit */int) arr_16 [i_8] [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_16 [i_10] [i_8] [i_9] [i_11] [i_11]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        var_24 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) (signed char)96))));
                        arr_39 [i_7] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_30 [i_7] [i_7]))));
                    }
                    arr_40 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */int) arr_30 [i_7] [i_7]);
                    arr_41 [i_7] [i_8] [i_9] [i_9] = ((/* implicit */int) (-(min((((/* implicit */unsigned int) ((signed char) var_1))), (2476855689U)))));
                }
            } 
        } 
        arr_42 [i_7] [(_Bool)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(_Bool)1] [i_7] [i_7] [(_Bool)1] [(unsigned short)14])) ? (arr_9 [i_7] [i_7] [i_7] [(unsigned char)0] [i_7]) : (((/* implicit */int) (unsigned char)40))))) && (((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_7] [2ULL] [i_7]))));
        /* LoopNest 2 */
        for (unsigned char i_13 = 3; i_13 < 11; i_13 += 3) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_15 = 0; i_15 < 12; i_15 += 2) 
                    {
                        for (unsigned long long int i_16 = 1; i_16 < 10; i_16 += 1) 
                        {
                            {
                                arr_56 [i_7] [i_15] [i_7] [(_Bool)1] [i_15] [i_7] [i_15] &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)124))) / (-4631727411874997983LL)));
                                arr_57 [i_7] [i_7] [i_14] [i_13] = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) (signed char)-6)), (-5057735597575910817LL))) + (arr_25 [i_16] [i_16] [i_16])));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) ((signed char) ((var_0) >= (((/* implicit */long long int) ((/* implicit */int) var_5))))));
                    arr_58 [i_7] [i_7] [i_7] [i_13] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_35 [i_13 + 1] [i_13 - 1] [i_13 - 1] [i_13 - 2] [i_13 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_18 [i_7] [i_7] [i_7] [i_13])))) : (((((/* implicit */_Bool) 8ULL)) ? (arr_37 [i_7] [i_13] [i_7] [i_14] [i_13 - 2] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_24 [i_7] [i_13 + 1])))))));
                }
            } 
        } 
        arr_59 [i_7] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((var_6) >> (((((/* implicit */int) (short)-1024)) + (1062)))))))) ? ((~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)240))) & (9223372036854775807LL))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_31 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))))));
        arr_60 [i_7] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (signed char)3))))));
    }
    /* vectorizable */
    for (unsigned long long int i_17 = 3; i_17 < 10; i_17 += 4) 
    {
        arr_63 [i_17 - 2] [i_17] = ((/* implicit */long long int) (short)-25409);
        var_26 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_13)) ? (arr_38 [i_17] [i_17 - 1] [i_17] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)115))))) + (9223372036854775807LL))) << (((((/* implicit */int) (signed char)3)) - (3)))));
        arr_64 [i_17] [(short)3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((-4631727411874997983LL) + (((/* implicit */long long int) 166354560U))))) && (((/* implicit */_Bool) arr_14 [i_17] [i_17] [i_17 + 1]))));
    }
    /* LoopSeq 2 */
    for (long long int i_18 = 4; i_18 < 17; i_18 += 4) 
    {
        var_27 = ((/* implicit */unsigned char) (+(max((arr_65 [i_18 + 2]), (((/* implicit */unsigned long long int) arr_66 [i_18]))))));
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_18 + 1])) ? (arr_65 [i_18 - 4]) : (var_2)))) ? (var_2) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)252)))))))));
        var_29 = ((/* implicit */unsigned char) ((((arr_65 [i_18]) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_13)), (var_9))))))) >> (((arr_65 [i_18]) - (11457175920684689026ULL)))));
    }
    for (unsigned char i_19 = 0; i_19 < 24; i_19 += 1) 
    {
        var_30 = arr_67 [i_19];
        var_31 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_67 [i_19])))), (((/* implicit */int) arr_67 [i_19]))));
        var_32 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_68 [i_19] [i_19]))))) ? (((/* implicit */int) arr_68 [(signed char)22] [i_19])) : ((-(((/* implicit */int) arr_68 [i_19] [i_19]))))));
        var_33 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_69 [i_19] [i_19])))))));
    }
}
