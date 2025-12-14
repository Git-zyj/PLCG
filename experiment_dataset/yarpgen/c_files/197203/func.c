/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197203
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (643909051493189030ULL)))) ? (((/* implicit */int) (_Bool)1)) : (var_3)));
        /* LoopNest 3 */
        for (unsigned int i_1 = 4; i_1 < 8; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                for (signed char i_3 = 2; i_3 < 6; i_3 += 4) 
                {
                    {
                        var_13 += ((/* implicit */unsigned int) ((var_8) | (((/* implicit */int) arr_0 [i_3]))));
                        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1 - 2] [i_3])) > (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_7 [i_3] [i_3]))))))));
                        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (3798402490U)))) ? (arr_8 [i_1 - 2] [i_0] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))))));
                        var_16 -= ((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) / (((/* implicit */int) (short)(-32767 - 1)))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) 134217728U)) : (arr_7 [i_0] [i_0]))) : (var_10)));
    }
    for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            for (long long int i_6 = 1; i_6 < 13; i_6 += 2) 
            {
                for (signed char i_7 = 1; i_7 < 12; i_7 += 3) 
                {
                    {
                        var_18 = ((/* implicit */signed char) (unsigned short)6153);
                        arr_20 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((332703486U) >= (((/* implicit */unsigned int) arr_19 [i_7] [i_4] [i_7] [i_7] [i_7 - 1] [i_7 + 2])))))) * (((((/* implicit */_Bool) arr_19 [i_7 + 1] [i_4] [i_6 - 1] [i_7] [i_5] [i_5])) ? (524288U) : (((/* implicit */unsigned int) 330818733))))));
                        var_19 -= ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_19 [i_7 - 1] [(_Bool)1] [i_6] [i_6 + 1] [(_Bool)1] [i_4])) == (arr_12 [(_Bool)0] [i_7 + 2])))), (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_18 [0ULL] [i_6] [0ULL])) ? (arr_13 [i_4] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) arr_15 [13ULL] [i_6] [i_6 + 1] [i_6 - 1]))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (+(14933093386993666447ULL)))) ? (((((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned long long int) var_9)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-21)) ? (-330818718) : (var_3)))) ? (((/* implicit */int) ((4294967292U) < (2625687964U)))) : (((/* implicit */int) var_4)))))));
    }
    for (int i_8 = 1; i_8 < 19; i_8 += 2) 
    {
        var_21 = ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) - (var_9)))), (var_1)))));
        var_22 = ((signed char) ((341631162067313144ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_8])))));
    }
    /* LoopNest 3 */
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (int i_11 = 3; i_11 < 20; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 4; i_12 < 19; i_12 += 1) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_38 [i_12 - 2] [i_10] [i_10] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)0)), (-5)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_1)));
                                var_23 = ((/* implicit */unsigned char) ((2147483625) | (-338101989)));
                                arr_39 [i_9] [i_10] [i_11] [i_12] [i_12] [i_10] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_9) | (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_12 + 2] [i_12 - 3] [i_12 - 2] [i_12 - 4])))))) ? (((var_11) - (562949953421310ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_12 - 2] [i_12 + 1] [i_12 - 2] [i_12 - 2])) ? (((/* implicit */int) arr_35 [i_12 + 1] [i_12 - 4] [i_12 + 1] [i_12 - 1])) : (((/* implicit */int) (_Bool)0)))))));
                                arr_40 [i_10] [i_10] [i_11 + 1] [i_11] [i_11 + 1] [i_10] [i_10] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_32 [i_11] [i_12]) : (((/* implicit */int) (signed char)64))))) ? ((-(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_31 [i_13] [i_10] [i_10] [i_9])))))))) <= (((/* implicit */unsigned long long int) ((((3744505770U) < (((/* implicit */unsigned int) -2147483647)))) ? (((/* implicit */int) ((((/* implicit */long long int) 3962263809U)) > (4083519638248759145LL)))) : (var_0))))));
                            }
                        } 
                    } 
                    arr_41 [i_9] [i_10] [i_10] [i_9] = ((/* implicit */short) ((unsigned char) max((((/* implicit */unsigned long long int) var_3)), (15934648901512080090ULL))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (int i_16 = 3; i_16 < 16; i_16 += 3) 
            {
                for (unsigned int i_17 = 0; i_17 < 20; i_17 += 2) 
                {
                    {
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((-632768334) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) arr_42 [i_14])) : (((((/* implicit */unsigned long long int) 4169597860U)) | (11ULL))))))));
                        var_25 = ((3962263809U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)33))));
                        var_26 = var_7;
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 1893309127749411949LL)) : (arr_45 [11ULL] [i_15] [i_14])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */unsigned long long int) var_9);
    }
    /* vectorizable */
    for (signed char i_18 = 1; i_18 < 23; i_18 += 2) 
    {
        arr_55 [5ULL] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_18])))))));
        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)59382))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_1))) : (((/* implicit */unsigned long long int) -9223372036854775796LL)))))));
    }
    var_30 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (0)));
    var_31 = ((/* implicit */_Bool) var_9);
}
