/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24702
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
    var_10 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 12894685723650499211ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (3336304133327843012LL))), (((/* implicit */long long int) var_1))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)49152))) ? ((~(((/* implicit */int) arr_2 [i_1])))) : (((((/* implicit */int) arr_2 [i_1])) - (((/* implicit */int) arr_2 [i_1]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_11 = arr_5 [i_0 - 1] [(unsigned short)11] [i_0 - 3] [i_0 + 2];
                            arr_11 [i_1] [i_1] = (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [(unsigned char)16] [i_0 - 3]))) : (arr_0 [i_0])))) && (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_10 [i_1] [i_2] [7U])))))));
                            /* LoopSeq 3 */
                            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
                            {
                                var_12 = ((/* implicit */_Bool) (-(max((((/* implicit */long long int) var_6)), (var_0)))));
                                var_13 &= ((((/* implicit */_Bool) arr_9 [(unsigned short)8])) ? (((arr_9 [(unsigned char)8]) - (arr_9 [(signed char)6]))) : (arr_9 [(_Bool)1]));
                                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_3 - 1])) ? (max((((((/* implicit */_Bool) var_9)) ? (-3336304133327843013LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_6 [(unsigned char)9] [i_3 - 1] [i_1 - 3]), (arr_6 [i_4] [i_3 + 1] [i_1 - 2])))))));
                            }
                            for (signed char i_5 = 2; i_5 < 17; i_5 += 1) 
                            {
                                arr_17 [i_0] [i_1 + 2] [(signed char)13] [i_2] [i_2] [i_1] [i_5 + 1] = max((((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) >= (((long long int) arr_10 [i_1] [i_1] [i_1]))))), (arr_2 [i_1]));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_14 [i_1] [i_1])) | (((((/* implicit */_Bool) var_6)) ? (((arr_9 [i_1]) | (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5] [i_5] [i_5 - 2] [3LL]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_1] [(signed char)3])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_8 [i_5] [15LL] [i_3] [i_2] [15LL] [i_0 - 4])))))))));
                                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)79)) ? (-5007355595991708894LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)69))))) >= (((/* implicit */long long int) min((((((/* implicit */int) var_3)) - (((/* implicit */int) var_7)))), ((-(((/* implicit */int) arr_16 [10LL] [0U]))))))))))));
                            }
                            for (short i_6 = 2; i_6 < 14; i_6 += 1) 
                            {
                                var_17 = ((long long int) ((short) ((((((/* implicit */int) arr_12 [i_0 + 1] [i_0] [i_1 - 1] [6ULL] [i_3] [(unsigned char)8] [(signed char)6])) + (2147483647))) << (((((((/* implicit */int) var_9)) + (36))) - (29))))));
                                var_18 |= ((/* implicit */short) arr_19 [i_0 - 2] [i_1 - 2] [i_2] [i_3 - 1]);
                                arr_20 [3ULL] [i_2] [i_1] [i_6 - 2] = ((((((/* implicit */int) arr_8 [i_3 + 1] [i_6 - 1] [2U] [i_6 - 1] [i_6 - 2] [i_6])) - (((/* implicit */int) arr_12 [i_1] [i_6 + 3] [(signed char)14] [(signed char)2] [(_Bool)1] [10LL] [7ULL])))) - (((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [i_6] [i_6 + 4] [(_Bool)1] [6LL] [i_6 + 2] [i_6 - 1] [i_6 + 1])), ((unsigned short)8107)))));
                                var_19 = max((((/* implicit */long long int) (unsigned char)79)), (-3856901755164496299LL));
                            }
                        }
                    } 
                } 
                arr_21 [i_1] = ((/* implicit */_Bool) max((arr_19 [i_0] [i_0] [i_1] [i_0 - 4]), (((/* implicit */unsigned short) var_6))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        arr_25 [i_7] = ((/* implicit */unsigned long long int) var_0);
        /* LoopNest 3 */
        for (long long int i_8 = 1; i_8 < 15; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (signed char i_10 = 0; i_10 < 16; i_10 += 1) 
                {
                    {
                        var_20 = var_2;
                        arr_36 [i_10] [i_8] [i_8] [(_Bool)1] = ((/* implicit */short) max(((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) ((unsigned short) arr_24 [(signed char)13]))) : (((/* implicit */int) arr_3 [(signed char)10] [i_8 + 1] [i_8 + 1])))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_10] [i_10] [(_Bool)1] [i_8] [i_7] [i_7])) - (((/* implicit */int) arr_34 [(signed char)7] [i_8 + 1] [i_9] [i_8]))))) ? (((((/* implicit */int) arr_34 [i_8] [i_9] [i_8] [i_8])) | (((/* implicit */int) (unsigned char)77)))) : (((/* implicit */int) arr_22 [1ULL] [i_8]))))));
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_7 [(short)2] [i_9] [i_10]))));
                        var_22 = ((/* implicit */unsigned short) arr_7 [i_8] [i_8 + 1] [(_Bool)1]);
                        arr_37 [i_8] [6LL] [i_9] [(short)5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6028221443094905049LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_7] [i_8] [i_9])) && (((/* implicit */_Bool) (unsigned char)186))))) : (((/* implicit */int) arr_31 [i_7]))))) ? (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) -7422675878510966630LL)) && (((/* implicit */_Bool) (unsigned char)187)))))));
                    }
                } 
            } 
        } 
        arr_38 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((((/* implicit */int) arr_2 [(_Bool)1])), (0))), (((/* implicit */int) ((-5910192405106603266LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)23998))))))))) ? (min((((/* implicit */int) (unsigned char)127)), (((((/* implicit */int) var_9)) - (((/* implicit */int) arr_12 [i_7] [(unsigned short)13] [i_7] [i_7] [i_7] [i_7] [i_7])))))) : (((/* implicit */int) arr_34 [i_7] [i_7] [i_7] [(signed char)8]))));
        var_23 = ((/* implicit */_Bool) ((unsigned short) max((var_0), (((/* implicit */long long int) arr_1 [i_7])))));
    }
    /* vectorizable */
    for (long long int i_11 = 1; i_11 < 21; i_11 += 4) 
    {
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_11 + 1])) ? (((((/* implicit */int) arr_40 [14ULL])) + (((/* implicit */int) var_7)))) : ((~(((/* implicit */int) arr_39 [11LL] [i_11 + 3]))))));
        arr_41 [16LL] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)187)) & (1743249666)));
    }
    for (unsigned char i_12 = 0; i_12 < 24; i_12 += 4) 
    {
        var_25 &= ((/* implicit */signed char) arr_44 [i_12] [i_12]);
        arr_45 [(signed char)0] [i_12] = ((/* implicit */short) max((max((((/* implicit */int) (!(arr_42 [i_12])))), ((+(((/* implicit */int) arr_39 [3LL] [(unsigned short)23])))))), (((/* implicit */int) ((((/* implicit */int) arr_44 [i_12] [i_12])) >= (((/* implicit */int) max((var_6), (((/* implicit */short) var_9))))))))));
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) max((((((/* implicit */int) arr_40 [i_12])) - (((/* implicit */int) arr_43 [i_12] [i_12])))), ((~(((/* implicit */int) arr_42 [i_12])))))))));
    }
    for (long long int i_13 = 0; i_13 < 21; i_13 += 4) 
    {
        arr_49 [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */unsigned long long int) arr_48 [i_13])) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_47 [i_13] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [(short)13] [i_13])))))) / (min((((/* implicit */unsigned long long int) arr_40 [i_13])), (6862548064895531558ULL)))))));
        arr_50 [i_13] [(short)3] = ((/* implicit */_Bool) ((((arr_42 [i_13]) ? (((/* implicit */int) arr_42 [i_13])) : (((/* implicit */int) arr_42 [i_13])))) << (((((/* implicit */int) arr_42 [(unsigned char)5])) - (((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_40 [(unsigned char)18])))))))));
    }
    var_27 = ((/* implicit */unsigned short) var_3);
}
