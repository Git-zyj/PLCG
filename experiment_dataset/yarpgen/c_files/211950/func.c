/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211950
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
    for (int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_20 = ((/* implicit */short) min((((((/* implicit */int) var_15)) & (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) (_Bool)0))));
        var_21 ^= ((/* implicit */short) ((((min((((/* implicit */long long int) (signed char)96)), (arr_0 [i_0 - 1]))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) arr_0 [i_0 + 4])))))));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 = ((/* implicit */short) (unsigned char)55);
            var_23 = ((/* implicit */short) ((unsigned long long int) var_8));
        }
        for (unsigned short i_3 = 2; i_3 < 23; i_3 += 4) 
        {
            arr_11 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_10);
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                for (long long int i_5 = 4; i_5 < 23; i_5 += 2) 
                {
                    {
                        var_24 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */short) (unsigned char)206)), ((short)2318)))) - (((((/* implicit */int) (unsigned char)64)) / (1074156042)))))) / (max((((/* implicit */unsigned long long int) ((signed char) arr_4 [(unsigned short)11]))), (10218263846294888838ULL)))));
                        arr_17 [i_5 - 3] [i_5] [i_1] [i_5 + 1] [i_1] [14U] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned char)200)))));
                    }
                } 
            } 
            var_25 = ((/* implicit */signed char) max((((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) (unsigned char)200)) < (((/* implicit */int) var_9))))), (min((((/* implicit */signed char) (_Bool)1)), ((signed char)112)))))), (((((/* implicit */int) ((short) arr_4 [i_3 + 2]))) % (((/* implicit */int) (short)(-32767 - 1)))))));
            var_26 = ((/* implicit */short) ((((((/* implicit */int) (short)2318)) ^ (((/* implicit */int) (signed char)-74)))) & (((/* implicit */int) var_4))));
        }
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) max((((/* implicit */int) arr_13 [i_1] [(signed char)16] [(unsigned short)11] [i_1])), (min((((/* implicit */int) ((signed char) var_6))), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))))));
    }
    /* LoopSeq 4 */
    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        var_28 = ((/* implicit */unsigned char) ((arr_9 [i_6]) / (((/* implicit */long long int) max((min((var_7), (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */int) (unsigned short)41869)) : (((/* implicit */int) (unsigned char)55)))))))));
        var_29 = ((/* implicit */unsigned int) arr_12 [i_6] [i_6] [i_6] [(signed char)13]);
        arr_20 [(unsigned char)12] &= ((/* implicit */signed char) (unsigned char)10);
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_31 [i_7] [i_8] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)161)) == (((/* implicit */int) (signed char)12))));
                        arr_32 [i_7] [i_10] [i_9] [i_7] [i_7] [i_7] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_7] [i_7] [i_8] [i_9] [i_10]))) == (8208758058762593102ULL));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */signed char) ((_Bool) arr_8 [i_7] [i_7] [i_7]));
    }
    for (long long int i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 9; i_12 += 1) 
        {
            for (unsigned long long int i_13 = 1; i_13 < 11; i_13 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_14 = 2; i_14 < 11; i_14 += 2) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 3) 
                        {
                            {
                                arr_47 [i_11] [i_12] [i_11] [(unsigned char)3] [i_15] [i_14] [(_Bool)1] = arr_41 [i_11] [i_11] [i_11] [i_11] [i_11];
                                var_31 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) min((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-114)), ((unsigned char)24)))), (((var_8) + (((/* implicit */int) arr_43 [(short)11] [i_12 + 2] [i_13] [i_14 + 1] [(short)11] [i_15]))))))) * (max((((arr_5 [1U] [i_12 + 2] [i_14]) - (((/* implicit */unsigned int) ((/* implicit */int) (short)28961))))), (((/* implicit */unsigned int) max((arr_23 [i_11] [i_12] [i_15]), (((/* implicit */short) (_Bool)1)))))))));
                                var_32 = ((/* implicit */unsigned char) ((67108863) - (((/* implicit */int) (unsigned char)211))));
                            }
                        } 
                    } 
                    var_33 = ((arr_22 [i_12 + 3]) >= (((/* implicit */long long int) min((var_8), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && ((_Bool)1))))))));
                }
            } 
        } 
        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) 8208758058762593093ULL)) ? (((var_8) & (((/* implicit */int) (short)-4379)))) : (((/* implicit */int) arr_46 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))))))));
    }
    /* vectorizable */
    for (long long int i_16 = 0; i_16 < 12; i_16 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
        {
            for (signed char i_18 = 0; i_18 < 12; i_18 += 1) 
            {
                for (unsigned int i_19 = 1; i_19 < 9; i_19 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_20 = 3; i_20 < 9; i_20 += 3) 
                        {
                            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) -4143597437402833923LL))));
                            arr_62 [i_20] [i_19] [i_19] [i_19] [i_18] [i_19] [i_16] = ((((/* implicit */_Bool) arr_58 [i_20 - 3] [i_20 + 1] [i_19 + 1] [i_19 - 1])) ? (((/* implicit */int) ((signed char) var_6))) : (((1006873050) & (((/* implicit */int) var_14)))));
                        }
                        arr_63 [i_19] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)23677)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (16716237051223486530ULL))) + (((/* implicit */unsigned long long int) arr_0 [i_17 + 1]))));
                    }
                } 
            } 
        } 
        arr_64 [8ULL] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_16] [i_16] [i_16])) - (((/* implicit */int) arr_26 [i_16] [i_16] [i_16]))));
    }
}
