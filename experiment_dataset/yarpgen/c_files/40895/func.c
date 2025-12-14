/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40895
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
    var_10 = ((/* implicit */unsigned long long int) min((min((var_6), (((long long int) (unsigned short)20111)))), (((/* implicit */long long int) var_0))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] = (+(arr_1 [i_0] [i_0]));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 4; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)20111))) ^ ((((!(((/* implicit */_Bool) var_3)))) ? (arr_6 [i_0] [i_0] [i_2 + 3]) : (arr_6 [i_2 + 2] [i_0] [i_0])))));
                    arr_10 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 18446744073709551590ULL))));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_7 [i_0]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 1) 
            {
                {
                    arr_23 [i_3] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_4]))));
                    arr_24 [i_5] [14ULL] [14ULL] [i_3] |= ((/* implicit */unsigned long long int) ((short) var_9));
                    arr_25 [i_3] [i_4] [i_5 - 1] [6LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_14 [i_5 - 3]) : (((/* implicit */int) arr_12 [i_5 - 2]))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_6 = 2; i_6 < 21; i_6 += 4) 
        {
            arr_29 [i_3] [i_3] = ((/* implicit */long long int) arr_26 [i_3] [i_3]);
            /* LoopSeq 1 */
            for (unsigned short i_7 = 1; i_7 < 18; i_7 += 4) 
            {
                arr_32 [i_3] [i_6] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_27 [i_6 - 2] [i_7 + 2] [i_7])) : (((/* implicit */int) var_8))));
                arr_33 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */int) var_0)) < (((int) var_1))));
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_39 [i_3] [i_6] [i_3] [i_7] [i_9] = ((/* implicit */int) ((long long int) arr_21 [i_6 + 1] [i_9]));
                        arr_40 [(unsigned char)4] [i_6] [i_6] [i_6] [i_9] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)20111)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_7]))) : (var_7))))));
                        arr_41 [i_3] [i_6] [i_7] [i_8] [i_8] &= ((/* implicit */unsigned long long int) ((arr_18 [i_6] [i_6 + 1] [i_6 - 2]) | (((/* implicit */int) arr_28 [i_7 + 1] [i_6 + 1]))));
                        arr_42 [i_8] [i_6 - 2] [i_7] [i_8] [20] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_6] [i_3] [i_3])) || (((/* implicit */_Bool) (unsigned short)20129))));
                    }
                    arr_43 [i_3] [i_3] [i_7] [i_7] = ((/* implicit */unsigned long long int) (-(arr_37 [i_7 + 3] [i_7 + 4] [i_7 + 2] [i_7 + 2] [i_6])));
                }
            }
            /* LoopNest 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (int i_11 = 1; i_11 < 20; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        {
                            arr_50 [i_3] [i_3] [4LL] [16LL] [i_6] [i_3] [i_3] |= ((/* implicit */unsigned long long int) var_1);
                            arr_51 [i_10] [i_10] = ((/* implicit */int) (-(arr_19 [i_6 - 2] [i_11 - 1] [i_10])));
                            arr_52 [i_3] [i_10] [i_10] [(short)12] = var_0;
                        }
                    } 
                } 
            } 
            arr_53 [i_6] = (-(9223372036854775552LL));
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 22; i_13 += 4) 
            {
                for (short i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    {
                        arr_60 [i_14] [i_14] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) var_6);
                        arr_61 [i_14] [i_6 - 1] = ((/* implicit */signed char) (+((~(var_9)))));
                        arr_62 [i_3] [i_14] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45424)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_48 [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1] [i_6])));
                        arr_63 [i_3] [i_6] [i_13] [(signed char)14] = ((/* implicit */unsigned long long int) var_3);
                    }
                } 
            } 
        }
        arr_64 [7LL] = ((/* implicit */int) var_6);
        arr_65 [i_3] = ((/* implicit */signed char) arr_38 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
    }
    for (long long int i_15 = 0; i_15 < 23; i_15 += 4) 
    {
        arr_69 [(unsigned short)7] = ((/* implicit */int) (unsigned short)45425);
        arr_70 [i_15] [i_15] = ((/* implicit */signed char) (unsigned short)20111);
        arr_71 [i_15] = ((/* implicit */short) (+(((/* implicit */int) ((((((/* implicit */_Bool) 13485904)) ? (3ULL) : (((/* implicit */unsigned long long int) 47314409)))) == (((/* implicit */unsigned long long int) arr_67 [14ULL])))))));
    }
    var_11 = ((/* implicit */int) var_5);
    var_12 = ((/* implicit */long long int) min((var_9), (((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1))))));
}
