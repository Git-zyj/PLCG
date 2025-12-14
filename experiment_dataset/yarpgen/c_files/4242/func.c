/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4242
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
    var_11 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && ((_Bool)1)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)-15966)), (var_9)))))));
    var_12 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_6)), (min((((/* implicit */unsigned long long int) ((_Bool) var_10))), (((unsigned long long int) var_2))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) arr_4 [i_0 - 1] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 2] [i_0])) : (((/* implicit */int) (short)-15966))))) ? ((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)11723)))))) : (((/* implicit */int) var_5))));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 15; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 2) 
                    {
                        {
                            var_14 += ((/* implicit */_Bool) arr_4 [i_0 - 1] [16ULL] [8]);
                            arr_14 [i_0] [i_0] [i_2] [i_3 + 2] [i_4 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_6) ? (arr_9 [i_0] [i_1] [i_0] [i_3 + 3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 - 1] [1ULL] [i_0] [i_0] [i_0 + 1] [i_0])))))) ? ((+(max((23023015803131921ULL), (((/* implicit */unsigned long long int) var_10)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15145)))));
                            arr_15 [i_0 - 1] [i_0 + 1] [6ULL] [i_0] = ((/* implicit */int) ((short) (-(((/* implicit */int) var_5)))));
                        }
                    } 
                } 
            } 
        }
        arr_16 [i_0] [i_0 + 1] = ((/* implicit */_Bool) -2027067072);
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_24 [i_6] [i_0] = ((/* implicit */int) min((((unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)50386)) : (((/* implicit */int) (short)-23877))))), (((unsigned short) (short)7680))));
                        var_15 ^= ((((/* implicit */_Bool) (~(arr_20 [(unsigned short)8] [i_7 - 1] [(unsigned short)8] [(unsigned short)8])))) && (((/* implicit */_Bool) var_8)));
                        arr_25 [i_0] [i_5] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((int) ((_Bool) var_7)))), (((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)18614)) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) var_9))))) : (13962871378491826513ULL)))));
                        /* LoopSeq 2 */
                        for (short i_8 = 2; i_8 < 17; i_8 += 3) 
                        {
                            arr_30 [i_0 + 1] [i_0] [i_8 - 2] = ((/* implicit */short) (~(((/* implicit */int) var_9))));
                            arr_31 [i_0] [i_5] [i_5] [i_5] [(unsigned short)4] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) min(((-(((/* implicit */int) arr_3 [i_6] [i_0])))), (min((((/* implicit */int) var_3)), (var_1)))))) ? ((~(((/* implicit */int) (short)23876)))) : (((/* implicit */int) arr_7 [i_0]))));
                            var_16 ^= ((/* implicit */unsigned int) ((_Bool) ((arr_28 [i_5] [(short)12] [i_8 + 1] [i_7 - 1] [i_8] [i_6]) ? (((/* implicit */int) arr_28 [0ULL] [12ULL] [i_8 - 1] [i_7 - 1] [i_8 - 1] [i_0 + 1])) : (((/* implicit */int) arr_28 [(_Bool)1] [14ULL] [i_8 + 1] [(_Bool)1] [i_7 - 1] [i_5])))));
                            arr_32 [i_0] [(short)14] [i_6] [i_5] [i_6] [i_7] [14U] = var_4;
                        }
                        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            arr_36 [i_0 - 1] [4ULL] [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [i_0]))));
                            var_17 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_27 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [6])) ? (arr_27 [i_0] [i_0 + 1] [1U] [i_0 - 1] [i_9]) : (arr_27 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_5]))), (min((((/* implicit */unsigned int) arr_28 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1])), (arr_0 [i_0])))));
                            var_18 = ((/* implicit */int) (-(max((((/* implicit */unsigned int) var_10)), (arr_27 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                        arr_37 [(_Bool)1] [(_Bool)1] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_35 [i_7 - 1] [i_0]))))) ? (((/* implicit */int) ((unsigned short) arr_0 [i_0]))) : (min((var_2), (((/* implicit */int) arr_35 [i_7 - 1] [i_0]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            for (unsigned short i_11 = 0; i_11 < 18; i_11 += 3) 
            {
                {
                    arr_42 [(short)10] [(unsigned short)15] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) ((short) var_9)))))));
                    /* LoopSeq 1 */
                    for (short i_12 = 1; i_12 < 16; i_12 += 1) 
                    {
                        var_19 ^= ((unsigned long long int) (((((~(((/* implicit */int) var_5)))) + (2147483647))) << (((((/* implicit */int) ((short) var_4))) - (11421)))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_1), ((~(var_2)))));
                        arr_45 [i_12 - 1] [i_12] [i_12 + 2] [i_0] = ((/* implicit */int) var_5);
                        arr_46 [(short)7] [i_0] [i_10] [i_0] [i_11] [13ULL] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_3 [i_0 - 1] [i_0])), (var_0)));
                    }
                    arr_47 [i_0] [i_0] [16] [i_10] = ((/* implicit */short) arr_0 [i_0]);
                    arr_48 [i_0] [i_11] [i_0] [i_0] = ((/* implicit */unsigned short) ((_Bool) ((_Bool) arr_10 [i_0] [i_0] [i_0] [i_0 + 1] [i_10] [i_11])));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 3) 
            {
                for (short i_15 = 2; i_15 < 16; i_15 += 3) 
                {
                    {
                        arr_58 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((_Bool) -1122012824));
                        arr_59 [4ULL] [i_14] [i_15 + 1] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_49 [2U] [(short)6] [i_15])))) ? (((((/* implicit */_Bool) (short)23876)) ? (arr_13 [i_0] [i_13] [i_14] [i_14] [(short)0] [0ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)28708)))))))) >= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned short) (_Bool)1)))))) : (arr_38 [i_0 + 1] [(_Bool)1] [i_14])))));
                        arr_60 [i_0] = ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_0] [i_13] [i_13]))))) ? (arr_13 [4U] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) >= (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) (short)23893)))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
    {
        arr_63 [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_56 [i_16] [(_Bool)1] [i_16 + 1] [i_16 + 1] [(_Bool)1] [i_16]))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_16 + 1]))) == (arr_51 [i_16 + 1] [i_16] [(unsigned short)14])))) : ((-(((/* implicit */int) var_10))))));
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_4))));
        var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned short)47741))))))));
        /* LoopNest 2 */
        for (unsigned short i_17 = 0; i_17 < 10; i_17 += 3) 
        {
            for (short i_18 = 0; i_18 < 10; i_18 += 3) 
            {
                {
                    var_23 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [(_Bool)1] [i_16 + 1])) ? (((/* implicit */int) arr_65 [0] [i_16 + 1])) : (((/* implicit */int) arr_65 [(short)8] [i_16 + 1]))))) && (((/* implicit */_Bool) var_3)));
                    arr_70 [i_16] [i_17] [i_17] = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_5 [i_17] [14ULL])) * (((/* implicit */int) var_10))))));
                }
            } 
        } 
    }
}
