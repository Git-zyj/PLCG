/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46405
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
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned long long int) var_6);
            /* LoopSeq 1 */
            for (short i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                arr_11 [i_1] [i_1] = ((/* implicit */long long int) var_3);
                var_20 ^= ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) var_13)) ? (arr_4 [i_2 - 1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1]))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 4) 
                {
                    var_21 = ((/* implicit */short) ((signed char) (!((_Bool)1))));
                    var_22 &= ((/* implicit */unsigned short) var_8);
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_8))));
                }
                for (signed char i_4 = 1; i_4 < 9; i_4 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        var_24 ^= ((/* implicit */int) min(((~(var_18))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (arr_4 [i_0] [i_5]))))));
                        arr_21 [11ULL] [11ULL] [11ULL] [i_4] [i_1] [11ULL] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((3755077929162728973ULL), (((/* implicit */unsigned long long int) (short)508)))))))), (((((/* implicit */_Bool) -7668796222889822679LL)) ? (max((((/* implicit */unsigned long long int) arr_9 [i_0] [7ULL] [i_0] [i_0])), (6917529027641081856ULL))) : (((((/* implicit */_Bool) 14691666144546822643ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-65)))))))));
                    }
                    arr_22 [i_0] [i_0] [i_2] |= ((/* implicit */unsigned char) min(((+(((/* implicit */int) var_1)))), (((/* implicit */int) ((signed char) arr_9 [i_0 - 1] [i_1] [i_1] [i_1])))));
                    var_25 *= ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) (~(arr_4 [(unsigned char)0] [i_2])))))));
                }
            }
            /* LoopNest 3 */
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) var_11);
                            arr_33 [i_0] [i_0] [(signed char)4] [10ULL] [i_0] |= ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */signed char) var_4)), (arr_17 [i_6] [(unsigned short)8]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0])))))) : (var_18));
                        }
                    } 
                } 
            } 
        }
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_0 - 1]))))) ? (min((var_18), (((/* implicit */unsigned long long int) arr_9 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1])))) : (((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) var_4))))));
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(14691666144546822643ULL)))) ? (2122219819U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23383)))));
        var_28 = ((/* implicit */unsigned short) (~(((unsigned long long int) (signed char)94))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_9])) ? (((/* implicit */int) arr_36 [i_9])) : (((/* implicit */int) arr_36 [i_9])))));
        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((signed char) var_12)))));
        var_31 = ((/* implicit */long long int) var_18);
        var_32 = min((min((var_5), (arr_35 [i_9] [i_9]))), (((((/* implicit */_Bool) 4818332797406337014ULL)) ? (4818332797406337003ULL) : (10330502717586540646ULL))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        arr_40 [14ULL] = ((/* implicit */unsigned int) (-(max((((/* implicit */long long int) max((((/* implicit */int) var_6)), (arr_37 [15U] [13U])))), (var_16)))));
        var_33 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_38 [i_10])) ? (arr_38 [i_10]) : (arr_38 [i_10]))));
        var_34 = ((/* implicit */int) var_14);
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        arr_44 [i_11] = ((/* implicit */short) var_7);
        arr_45 [i_11] = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) var_6)), (arr_43 [i_11]))), (((/* implicit */unsigned long long int) ((((_Bool) 4294967295U)) ? (((/* implicit */int) max((var_1), (var_11)))) : (((/* implicit */int) arr_41 [i_11])))))));
    }
    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (short)522))) ? ((-(var_0))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15)))))))) ? (((/* implicit */int) ((signed char) ((short) (short)16)))) : (((/* implicit */int) var_11))));
}
