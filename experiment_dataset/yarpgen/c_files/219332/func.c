/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219332
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? ((+(var_15))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (var_11))))))) ? (var_10) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (var_9))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_15)) : (var_4)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)19459)) | (-651818131)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_0 + 4])) : (((/* implicit */int) arr_4 [i_0 + 3]))))) : ((~(arr_6 [i_0 + 4] [i_4 - 1])))));
                                var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4 + 1] [i_4 + 2] [14])) ? (arr_10 [i_4 + 1] [i_4 - 1] [4ULL]) : (arr_10 [i_4 - 1] [i_4 - 1] [4LL])))) ? (((((/* implicit */_Bool) arr_10 [i_4 + 1] [i_4 + 2] [(short)10])) ? (arr_10 [i_4 + 1] [i_4 - 1] [(_Bool)1]) : (arr_10 [i_4 + 1] [i_4 + 2] [(unsigned char)6]))) : (((((/* implicit */_Bool) arr_10 [i_4 + 2] [i_4 + 2] [(signed char)8])) ? (arr_10 [i_4 + 1] [i_4 - 1] [0LL]) : (arr_10 [i_4 + 1] [i_4 + 1] [(unsigned char)12])))));
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 + 3] [i_0 + 2])) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_2] [i_3])) ? (arr_1 [8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 2] [i_2]))))) : (((/* implicit */unsigned int) arr_2 [i_0 + 3] [i_4 + 2] [(short)4]))))) ? (((/* implicit */long long int) min((arr_10 [i_0 + 2] [i_0 + 3] [14]), (((/* implicit */unsigned int) arr_2 [i_4 + 2] [i_4] [4U]))))) : ((-(((((/* implicit */_Bool) arr_2 [i_0] [i_2] [10ULL])) ? (arr_9 [i_4] [i_3] [i_2] [i_1] [i_0 + 4]) : (((/* implicit */long long int) arr_1 [(unsigned char)12])))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        arr_16 [i_0] [8] [i_0] [i_5] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_4 [i_0 + 2])) ? (arr_7 [i_0] [i_0 + 2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 2]))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_4 [i_0 + 3])), (arr_6 [i_0 + 3] [i_0 - 1]))))));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((int) arr_1 [i_0]))) < (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0 - 1]))) : (arr_1 [i_0])))));
                        arr_17 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0 + 3] [i_0 + 4] [i_0])) ? ((~(arr_11 [i_0] [i_1] [(unsigned short)7]))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? (arr_0 [i_0 + 4] [i_0 + 4]) : (arr_15 [i_0] [i_1] [i_2] [i_0] [i_0 + 3])))));
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2] [0ULL] [i_5])) ? (((/* implicit */long long int) arr_0 [i_2] [i_2])) : (arr_9 [i_1] [i_1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) ((_Bool) arr_1 [14ULL]))) : (((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_0 + 3])) : (((/* implicit */int) arr_4 [i_0 + 3])))))))));
                    }
                    for (signed char i_6 = 4; i_6 < 13; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) (~(min((arr_11 [i_0] [i_6 + 2] [i_2]), (arr_11 [i_0] [i_6 - 2] [i_0])))));
                        arr_20 [i_0] = ((/* implicit */unsigned short) arr_8 [i_6] [i_6 - 4] [i_0 + 1] [i_0 + 1]);
                    }
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned char) ((short) arr_15 [i_8] [i_0] [i_2] [i_0] [i_0]));
                            var_23 += ((/* implicit */signed char) ((unsigned long long int) arr_5 [i_0 + 2] [i_0 + 2]));
                            var_24 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) arr_10 [i_0] [i_2] [4U])))));
                            var_25 = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((arr_23 [i_0 - 1] [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0 + 3]) << (((arr_1 [i_0]) - (3601449008U)))))) : (((/* implicit */signed char) ((arr_23 [i_0 - 1] [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0 + 3]) << (((((arr_1 [i_0]) - (3601449008U))) - (41903614U))))));
                            var_26 = ((/* implicit */unsigned short) arr_6 [i_0] [i_1]);
                        }
                        for (signed char i_9 = 0; i_9 < 15; i_9 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned short) arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [13U]);
                            arr_29 [i_0 + 2] [i_1] [i_0] [i_7] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_0 + 4] [i_0] [i_7])) ? (arr_26 [i_1] [i_0] [i_9]) : (arr_26 [i_9] [i_0] [i_0 + 1])));
                            arr_30 [i_0] [i_1] [i_1] [i_2] [i_2] [i_7] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) arr_25 [i_0] [i_0 + 2] [i_9] [i_9] [i_9] [(short)6] [i_9]));
                            arr_31 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [12LL] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_1] [i_2] [i_0] [i_9]))) : (arr_0 [i_7] [i_9])))) ? (((/* implicit */unsigned int) arr_2 [i_0] [i_0 + 2] [i_0])) : (arr_10 [i_0] [i_0] [i_0])));
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (arr_10 [14ULL] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0 + 2])))));
                        }
                        var_29 = ((/* implicit */short) ((unsigned short) arr_21 [i_0] [i_0 + 4] [i_1] [i_7] [i_7]));
                        /* LoopSeq 1 */
                        for (long long int i_10 = 2; i_10 < 12; i_10 += 1) 
                        {
                            arr_34 [i_0] [i_2] [i_0] = (~(arr_0 [i_0 + 3] [i_7]));
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_0] [i_7] [i_10] [i_10 - 2] [i_10 - 1])) ? (((/* implicit */int) arr_21 [i_0] [i_10] [i_10] [i_10 + 2] [i_10])) : (((/* implicit */int) arr_21 [i_0] [i_1] [i_10] [i_10 + 3] [i_10]))));
                            arr_35 [i_10] [i_1] [i_0] [i_1] [9ULL] = ((/* implicit */unsigned short) ((unsigned int) arr_19 [i_0] [i_10 - 2] [7ULL] [i_10] [i_10]));
                        }
                        arr_36 [i_7] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1] [i_7])) ? (arr_6 [14U] [i_1]) : (arr_6 [i_0 + 3] [i_2])));
                        var_31 = ((/* implicit */signed char) (~(((/* implicit */int) arr_32 [i_0 + 1] [i_0]))));
                    }
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */signed char) var_14);
    /* LoopNest 3 */
    for (unsigned int i_11 = 2; i_11 < 16; i_11 += 3) 
    {
        for (unsigned int i_12 = 0; i_12 < 19; i_12 += 3) 
        {
            for (unsigned int i_13 = 1; i_13 < 17; i_13 += 3) 
            {
                {
                    arr_45 [i_11 + 2] [i_13] [i_13 + 1] = ((/* implicit */unsigned short) ((((arr_42 [i_13] [i_13] [i_13]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_11 + 2] [i_13 + 2]))))) ? (((((/* implicit */_Bool) arr_38 [i_13 - 1] [i_11 + 1])) ? (arr_38 [i_12] [i_13 + 1]) : (arr_38 [(_Bool)1] [i_13 + 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_44 [i_11] [i_13])), (arr_43 [4] [i_13] [i_12] [i_11 - 1])))))))));
                    arr_46 [i_13] [i_13] [i_13 + 1] [i_13] = arr_42 [i_13] [i_12] [i_13];
                    var_33 = min((((unsigned long long int) arr_43 [i_11 + 3] [i_13] [i_13 + 1] [i_13 - 1])), (arr_43 [i_11 + 1] [i_13] [i_13 + 1] [i_13 + 2]));
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned int) arr_39 [i_11 - 2] [i_13 + 1] [i_13 + 2]);
                        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)200)) ? (13528291636416985547ULL) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21025))) + (arr_50 [i_14] [i_13 + 2] [14ULL] [i_13] [i_13] [i_13])))));
                        var_36 = ((/* implicit */unsigned long long int) max((var_36), (arr_43 [i_14] [i_14] [i_14] [i_14])));
                    }
                }
            } 
        } 
    } 
}
