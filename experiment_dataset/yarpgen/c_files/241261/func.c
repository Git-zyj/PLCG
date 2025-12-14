/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241261
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                arr_7 [i_0] [i_1] [i_1] [i_1] &= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)191))));
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_15 = ((/* implicit */unsigned short) var_7);
                    arr_11 [(unsigned char)2] [(unsigned char)2] [i_2 - 2] [i_2 - 2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))));
                    /* LoopSeq 4 */
                    for (unsigned char i_4 = 2; i_4 < 19; i_4 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_3]))) == (arr_12 [i_2 - 2] [i_3] [i_4 - 1])));
                        arr_14 [i_0] [(unsigned short)11] [(unsigned short)2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_0 [i_1] [i_1]) : (16502808026572117553ULL)));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16502808026572117553ULL)));
                        var_18 *= ((((/* implicit */_Bool) arr_0 [(unsigned char)13] [i_1])) ? (var_2) : (arr_0 [i_4 + 1] [i_0]));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        arr_18 [i_0] [(_Bool)1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_2])) ? (((((/* implicit */_Bool) 12769627803228105165ULL)) ? (12161936950166293222ULL) : (15ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))));
                        arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_5)) ^ (((/* implicit */int) (_Bool)1))))));
                    }
                    for (unsigned short i_6 = 3; i_6 < 19; i_6 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */_Bool) min((var_19), (arr_2 [(unsigned char)2] [i_1])));
                        var_20 = ((/* implicit */unsigned short) arr_17 [i_0] [i_1] [i_2] [i_0] [i_6 - 1]);
                        arr_23 [i_0] [i_1] [i_1] [i_6] [i_0] = ((((/* implicit */_Bool) ((unsigned short) var_7))) ? ((+(18446744073709551614ULL))) : (((/* implicit */unsigned long long int) ((arr_2 [i_2] [(_Bool)1]) ? (((/* implicit */int) (unsigned char)154)) : (((/* implicit */int) var_14))))));
                    }
                    for (unsigned short i_7 = 3; i_7 < 19; i_7 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned short) var_3);
                        arr_28 [i_7] [i_7] [16ULL] [i_2 - 2] [i_3] [i_7 - 3] = ((/* implicit */unsigned short) ((unsigned char) (unsigned short)49600));
                    }
                    var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)123))));
                }
                for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))) : (arr_29 [(_Bool)1] [i_2 - 2] [i_2 - 2] [(_Bool)1])))));
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0] [i_1])) | (((((/* implicit */int) arr_4 [(unsigned char)10] [16ULL])) | (((/* implicit */int) (_Bool)1)))))))));
                }
            }
            var_25 &= min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)89))) & (12161936950166293222ULL))));
        }
        /* vectorizable */
        for (unsigned char i_9 = 2; i_9 < 18; i_9 += 2) 
        {
            arr_34 [i_9] = ((/* implicit */unsigned short) (_Bool)1);
            arr_35 [i_0] [i_0] [i_9] = ((/* implicit */unsigned char) ((var_5) ? ((+(var_1))) : (((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        }
        var_26 &= ((/* implicit */unsigned short) max(((-(12334412513013088134ULL))), (((/* implicit */unsigned long long int) arr_20 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [i_0]))));
    }
    var_27 = ((/* implicit */unsigned char) var_7);
    var_28 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))))), (max((((((/* implicit */_Bool) 12073583142778366132ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50244))) : (12161936950166293228ULL))), (((/* implicit */unsigned long long int) var_10))))));
}
