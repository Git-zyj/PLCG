/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234074
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
    var_13 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_4)), (9304882576585469461ULL)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */short) ((4133092897590198854LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)191)))));
                    arr_10 [i_0] [i_1] [(unsigned char)3] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_1)) > (((/* implicit */int) arr_0 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) -4133092897590198855LL)) && (((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_2] [(unsigned short)2]))))) : (((((/* implicit */int) arr_0 [i_1])) & (((/* implicit */int) (short)15387)))))))));
                    var_14 -= max((((((/* implicit */_Bool) max(((short)15387), (((/* implicit */short) arr_4 [(unsigned char)9] [(unsigned char)5]))))) ? (3355787038389265565LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)28978)) > (((/* implicit */int) var_3)))))))), (((/* implicit */long long int) (+((~(var_4)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        var_15 = ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) (short)5131)) : (((/* implicit */int) (unsigned char)223))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            var_16 = ((/* implicit */signed char) (+(((/* implicit */int) arr_13 [i_3] [i_3]))));
            arr_15 [i_4] = ((/* implicit */unsigned long long int) arr_14 [(signed char)0] [i_3]);
            /* LoopNest 3 */
            for (short i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    for (int i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_13 [i_5] [(unsigned char)8]))));
                            arr_25 [i_3] [i_4] [i_7] [8LL] [i_7] = ((arr_20 [i_3] [i_4] [i_5] [i_6] [i_7] [i_4]) ^ (arr_20 [i_3] [i_4] [0] [i_4] [i_7] [i_6]));
                            var_18 = ((/* implicit */unsigned char) ((arr_12 [i_3] [i_4]) ? (((/* implicit */int) arr_21 [i_3] [i_4] [i_5] [i_6])) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_12 [i_6] [i_4])) : (((/* implicit */int) arr_12 [5] [0LL]))))));
                            var_19 = ((/* implicit */_Bool) var_12);
                            var_20 ^= ((/* implicit */short) (~(-8721525782013007883LL)));
                        }
                    } 
                } 
            } 
        }
        arr_26 [i_3] = ((/* implicit */unsigned long long int) var_7);
    }
    /* LoopNest 2 */
    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) 
    {
        for (short i_9 = 1; i_9 < 13; i_9 += 1) 
        {
            {
                var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) -8721525782013007883LL)) || (((/* implicit */_Bool) 5741256193681182198LL))));
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 17; i_10 += 1) 
                {
                    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        {
                            arr_36 [i_8] [(unsigned char)9] [i_11] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_27 [(short)8] [i_8]))))));
                            var_22 -= ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) arr_31 [i_9 + 1] [(unsigned char)9] [i_9])) + (arr_30 [i_9 + 3] [i_9])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 17; i_12 += 2) 
                {
                    for (unsigned char i_13 = 0; i_13 < 17; i_13 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */short) ((arr_39 [i_9] [(short)6]) - (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                            /* LoopSeq 4 */
                            for (long long int i_14 = 0; i_14 < 17; i_14 += 3) /* same iter space */
                            {
                                var_24 -= ((/* implicit */_Bool) arr_39 [9LL] [i_9]);
                                var_25 = ((/* implicit */long long int) var_1);
                            }
                            for (long long int i_15 = 0; i_15 < 17; i_15 += 3) /* same iter space */
                            {
                                var_26 = ((/* implicit */short) arr_38 [13LL] [13LL] [i_13] [i_13]);
                                arr_45 [i_8] [i_15] [i_15] [i_8] [i_15] = ((unsigned char) (~(var_12)));
                            }
                            for (long long int i_16 = 0; i_16 < 17; i_16 += 3) /* same iter space */
                            {
                                var_27 = ((/* implicit */long long int) (+(max((arr_37 [i_8]), (((/* implicit */unsigned long long int) var_9))))));
                                arr_49 [i_8] [i_9] [i_8] [6LL] [i_13] [14ULL] [2U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [i_8] [i_9 + 1]))))) ? (((/* implicit */long long int) max((arr_48 [i_8] [i_9] [(signed char)10] [i_8] [(short)5] [(signed char)10] [i_12]), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) : (-4133092897590198855LL)));
                            }
                            /* vectorizable */
                            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                            {
                                arr_52 [i_17] [i_12] [(_Bool)1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_40 [i_9] [i_12] [(signed char)5] [i_17])) ? (((/* implicit */int) arr_27 [i_12] [i_17])) : (((/* implicit */int) arr_33 [i_8] [(unsigned char)9]))))));
                                arr_53 [(short)10] [i_13] [i_8] [i_12] [i_9] [i_8] [i_8] = ((/* implicit */short) ((unsigned short) arr_48 [(unsigned char)1] [i_9] [(short)7] [i_9] [i_9] [i_9] [i_9 + 4]));
                                var_28 ^= ((/* implicit */long long int) arr_40 [(unsigned char)6] [i_12] [i_9] [i_8]);
                            }
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) arr_42 [i_13] [i_13] [i_12] [i_9 + 4] [i_8] [i_8])) | (((/* implicit */int) arr_42 [9ULL] [i_12] [i_12] [i_12] [i_12] [i_12]))))) != (((long long int) arr_42 [i_8] [i_8] [i_9 + 1] [i_12] [i_12] [i_13]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
