/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203508
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
    var_20 = ((/* implicit */signed char) var_3);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_1 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            arr_12 [i_0] [(signed char)11] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (~(((long long int) var_11))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (arr_8 [i_2 - 2] [i_2 + 2] [i_0] [i_2 + 2])));
                        }
                        arr_13 [i_0] [i_0] [i_2] [i_2] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
    {
        arr_17 [4LL] |= ((/* implicit */long long int) ((int) arr_2 [6] [6]));
        var_23 ^= ((/* implicit */unsigned int) arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
        arr_18 [i_5] = ((/* implicit */unsigned long long int) var_4);
    }
    for (long long int i_6 = 3; i_6 < 15; i_6 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_7 = 2; i_7 < 15; i_7 += 2) 
        {
            var_24 ^= ((/* implicit */long long int) (+((+(((unsigned int) var_12))))));
            var_25 ^= ((/* implicit */unsigned int) (-(var_3)));
        }
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 17; i_9 += 3) 
            {
                for (short i_10 = 1; i_10 < 16; i_10 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 1) 
                        {
                            var_26 ^= ((/* implicit */short) ((arr_26 [i_10 + 1] [i_10 + 1] [i_6 + 2]) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_10 - 1] [i_10 + 1] [i_6 + 2])))));
                            var_27 = ((/* implicit */long long int) arr_28 [10LL] [i_9] [10LL] [10LL]);
                            var_28 ^= ((/* implicit */unsigned int) var_19);
                        }
                        for (signed char i_12 = 2; i_12 < 15; i_12 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_6] [i_6 + 2] [i_10 - 1] [i_12 + 1])) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_6 + 1] [i_10 - 1])))));
                            var_30 = ((/* implicit */unsigned long long int) arr_27 [i_12]);
                            arr_37 [i_6] [4U] [i_9] [i_9] [i_9] [i_6] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_18)) ? (arr_35 [i_12 - 1] [i_12 - 1] [i_10 - 1] [i_10 - 1] [i_6 - 2] [i_6 - 3]) : (((/* implicit */unsigned long long int) (~(var_5))))));
                            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) var_7))));
                            arr_38 [i_12 - 2] [i_12 - 2] [i_9] [i_12 - 2] [i_12] = ((/* implicit */signed char) var_4);
                        }
                        var_32 = ((/* implicit */short) arr_31 [i_6 - 2] [i_6 - 3] [i_10 + 1]);
                        var_33 ^= ((/* implicit */unsigned short) arr_27 [i_6 + 2]);
                        arr_39 [i_6] [i_6] [(signed char)7] [i_6] = ((/* implicit */long long int) arr_20 [i_6 - 1] [i_10 + 1]);
                    }
                } 
            } 
            var_34 = ((/* implicit */_Bool) var_17);
        }
        var_35 = ((((((/* implicit */long long int) ((/* implicit */int) max((var_11), (((/* implicit */signed char) var_12)))))) >= (var_10))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [(_Bool)1] [i_6] [6]))))) ? (4049645759317401716LL) : (arr_29 [i_6] [i_6] [i_6] [i_6 + 2]))) : ((+(var_0))));
    }
    for (int i_13 = 0; i_13 < 17; i_13 += 2) 
    {
        arr_42 [i_13] [i_13] = ((/* implicit */unsigned short) var_5);
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 1) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 17; i_16 += 1) 
                    {
                        for (long long int i_17 = 2; i_17 < 16; i_17 += 3) 
                        {
                            {
                                var_36 ^= ((/* implicit */unsigned char) (+((~(var_0)))));
                                arr_54 [i_13] [i_13] |= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) arr_41 [i_13] [i_13])) * (min((9665767740580516987ULL), (((/* implicit */unsigned long long int) var_18)))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_13] [i_13] [i_13])))));
                                var_37 = ((/* implicit */long long int) var_11);
                            }
                        } 
                    } 
                    var_38 = (~(max((((/* implicit */unsigned int) var_16)), (arr_23 [1ULL] [i_14] [i_14]))));
                    var_39 ^= ((/* implicit */unsigned int) arr_52 [i_13] [i_15]);
                }
            } 
        } 
        arr_55 [i_13] [(short)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-114)), (arr_43 [i_13] [i_13] [i_13])))) : (((((/* implicit */_Bool) arr_43 [16LL] [16LL] [16LL])) ? (((/* implicit */int) arr_30 [i_13] [i_13] [11U])) : (var_14)))))) || (((/* implicit */_Bool) min((max((((/* implicit */long long int) arr_46 [i_13] [i_13] [i_13])), (var_0))), (((/* implicit */long long int) arr_33 [i_13] [i_13] [14LL] [14LL] [i_13] [i_13])))))));
        arr_56 [i_13] = ((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */int) var_11)), (arr_20 [(short)15] [i_13])))), (arr_48 [i_13] [i_13] [(short)14] [i_13])));
    }
}
