/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209631
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
    var_16 = ((/* implicit */signed char) ((var_15) / (((/* implicit */unsigned int) var_6))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        var_17 = arr_1 [i_0];
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) ^ (var_1)));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) arr_2 [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_2 = 3; i_2 < 20; i_2 += 3) 
        {
            arr_11 [i_2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) var_12))));
            var_18 = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_1])) - (((/* implicit */int) (_Bool)1))));
        }
        for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            arr_14 [i_1] = ((/* implicit */unsigned long long int) arr_9 [i_3] [i_1] [i_1]);
            var_19 = ((0LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
        {
            arr_17 [16ULL] [i_4] [(_Bool)1] = ((/* implicit */unsigned short) (short)19178);
            arr_18 [i_1] [(unsigned char)10] [(_Bool)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1138005586388453022ULL))));
            arr_19 [i_1] [i_1] = ((/* implicit */int) (unsigned char)214);
            var_20 = (!(((/* implicit */_Bool) arr_13 [i_1])));
        }
        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
        {
            arr_23 [i_1] [i_1] [i_5] = ((/* implicit */unsigned int) ((arr_10 [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_9 [2] [i_5] [i_5])))));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) 13195534032956928262ULL);
                            arr_31 [i_1] [i_5] [i_7] [i_6] [i_5] = ((/* implicit */short) ((arr_20 [i_1] [i_1] [i_1]) <= (arr_20 [i_1] [i_5] [i_1])));
                        }
                    } 
                } 
            } 
        }
        var_22 = ((/* implicit */_Bool) var_7);
        arr_32 [i_1] [i_1] = ((((/* implicit */int) arr_8 [i_1])) + (((/* implicit */int) arr_8 [i_1])));
    }
    /* LoopNest 2 */
    for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_12 [i_10])) + (2147483647))) << (((((/* implicit */int) arr_34 [i_10])) >> (((((/* implicit */int) arr_34 [i_9])) - (23283)))))));
                var_24 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_30 [i_9] [i_10] [i_9] [10ULL] [i_10])) / (1022139608))), (((((/* implicit */int) (unsigned short)52522)) | (((/* implicit */int) (unsigned short)0))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_11 = 1; i_11 < 7; i_11 += 2) 
                {
                    var_25 = ((/* implicit */unsigned int) ((arr_20 [i_11 + 1] [i_11 + 1] [i_11 + 3]) << (((arr_20 [i_11 + 1] [i_11 + 1] [i_11 + 3]) - (7290447956421491320ULL)))));
                    arr_39 [i_10] = (!(((/* implicit */_Bool) (unsigned short)65535)));
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 2; i_12 < 7; i_12 += 1) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_44 [i_10] [(short)4] [i_10] [i_12] [i_13] = ((/* implicit */unsigned long long int) arr_9 [i_9] [i_11 + 3] [i_12 - 1]);
                                arr_45 [i_10] [(short)8] [i_11] [i_12] [i_13] [(short)5] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_30 [i_12 + 1] [i_11 + 3] [i_11 + 2] [i_11 + 3] [i_9])) ^ (((/* implicit */int) arr_30 [i_12 - 2] [i_11] [i_11 + 2] [i_11 - 1] [i_9]))));
                                var_26 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)23)) - (((/* implicit */int) (unsigned short)4064))));
                            }
                        } 
                    } 
                }
                for (signed char i_14 = 1; i_14 < 7; i_14 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned int) arr_47 [i_9] [i_10]);
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 10; i_16 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */signed char) arr_21 [i_10] [i_10]);
                                arr_53 [i_9] [1U] [5U] [i_15] [i_10] = ((/* implicit */unsigned int) arr_25 [i_14 + 1] [i_14 + 2] [i_14 + 1]);
                            }
                        } 
                    } 
                }
                for (signed char i_17 = 1; i_17 < 7; i_17 += 1) /* same iter space */
                {
                    arr_56 [i_17 - 1] [i_9] [i_9] [i_9] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_29 [i_9] [i_10] [i_9] [i_10] [i_17] [i_17 + 3])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)16382))) + (16614737141056594919ULL))))))));
                    arr_57 [(_Bool)1] [(_Bool)1] [i_10] = ((/* implicit */short) min((((/* implicit */unsigned int) ((3485668194854001946ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23)))))), (max((arr_42 [(_Bool)1] [i_17 + 2] [i_17 + 2] [i_10] [i_17 + 3]), (arr_42 [i_10] [i_17 - 1] [i_17 + 3] [i_10] [i_17 + 3])))));
                }
            }
        } 
    } 
}
