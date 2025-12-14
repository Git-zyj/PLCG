/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238778
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
    var_11 = ((/* implicit */int) var_2);
    var_12 = ((/* implicit */long long int) min((min((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), (max((((/* implicit */int) var_7)), (196939190))))), (min((((/* implicit */int) var_10)), (((int) var_10))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) arr_1 [i_0]);
        var_14 = ((/* implicit */int) min((max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */unsigned int) 1915997707)) & (1144075458U))))), (((/* implicit */unsigned int) var_2))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_15 = (-(((/* implicit */int) arr_3 [i_1] [i_2] [(_Bool)1])));
                                var_16 = arr_4 [i_0] [(_Bool)1] [i_2];
                                var_17 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 2186194278924052573ULL)) ? (((/* implicit */long long int) min((2622754661U), (((/* implicit */unsigned int) (-2147483647 - 1)))))) : (((var_9) >> (((var_4) - (2695903829U))))))), (((/* implicit */long long int) (+(min((((/* implicit */int) arr_1 [i_3])), (arr_12 [i_4] [i_3] [17] [i_2] [i_0] [i_0]))))))));
                                arr_13 [i_0] [i_0] [i_2] [i_0] [7LL] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [(_Bool)1] [i_2] [(_Bool)1]))))) >= (((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))), ((~(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_2)))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [2U] [2U] = ((/* implicit */int) min((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_1 + 1]))))), ((+(3718795934U))))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) arr_3 [i_2] [i_1] [i_0]))))))));
                    var_18 = ((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_0] [i_0] [9U]);
                    var_19 = ((/* implicit */unsigned char) arr_10 [18] [2ULL] [18] [13LL] [i_1] [i_1]);
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned int) ((min((min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) ((int) var_10))))) / (((/* implicit */long long int) ((int) (~(var_4)))))));
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 19; i_5 += 3) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */int) (~(arr_15 [i_5])));
        /* LoopSeq 3 */
        for (int i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_9 = 2; i_9 < 19; i_9 += 3) 
                        {
                            arr_29 [i_5 + 1] [i_5 + 1] [i_5] [i_5] [1U] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)23911)) ? (((/* implicit */unsigned long long int) 9007199254740976LL)) : (12893576758927974591ULL))) / (((/* implicit */unsigned long long int) ((260848089953501196LL) / (((/* implicit */long long int) arr_20 [i_5] [i_5])))))));
                            arr_30 [i_6] [i_5] [(short)18] [i_5] [6LL] = ((/* implicit */int) ((((arr_28 [i_5] [i_9]) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-32525))))) | (((((/* implicit */_Bool) arr_27 [18U] [8LL] [8LL] [8LL] [i_9] [i_5] [8LL])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_5] [i_5])))))));
                            arr_31 [6] [i_6] [i_7] [i_6] [i_5] = ((/* implicit */int) ((unsigned short) arr_17 [i_5] [i_6]));
                            arr_32 [i_5] [i_6] [i_5] [i_8] [18LL] = ((/* implicit */short) arr_21 [i_8]);
                        }
                        for (short i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) var_10);
                            var_22 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_23 [i_7] [i_6] [19]))))));
                            var_23 = ((/* implicit */unsigned long long int) 134217727);
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_39 [i_11] [i_7] [(unsigned short)4] [i_7] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((arr_20 [i_5 - 2] [i_5]) / (((/* implicit */int) arr_34 [i_5 - 2] [i_5 - 1] [i_5] [i_5 - 1]))));
                            var_24 = ((/* implicit */_Bool) ((unsigned int) var_7));
                        }
                        arr_40 [i_8] [i_8] [i_8] [(_Bool)0] [(short)14] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) ^ (arr_20 [i_5] [i_5]))) >> (((var_7) ? (((/* implicit */int) arr_34 [i_5] [i_6] [i_7] [(_Bool)1])) : (((/* implicit */int) arr_21 [i_7]))))));
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned long long int) 9223372036854775803LL);
            /* LoopNest 2 */
            for (unsigned short i_12 = 0; i_12 < 20; i_12 += 4) 
            {
                for (long long int i_13 = 0; i_13 < 20; i_13 += 4) 
                {
                    {
                        var_26 = ((((/* implicit */_Bool) arr_16 [i_5 - 1])) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) arr_16 [i_5])));
                        arr_47 [i_5 - 3] [i_5 - 3] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_43 [i_5] [i_5 - 3] [i_5 - 2] [i_5])))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_26 [3LL])) & (var_4)))) : (-5028244062947125706LL)));
                        arr_48 [i_5] [i_5] = ((/* implicit */unsigned short) ((-134217728) & (((/* implicit */int) (short)32525))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 3) 
        {
            arr_52 [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((int) (-(arr_20 [i_5] [i_5]))));
            var_27 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 1594732862)))) || (((/* implicit */_Bool) var_3))));
            arr_53 [i_5] = ((((/* implicit */_Bool) arr_33 [i_5] [5ULL] [i_5 + 1] [i_5 + 1] [i_14] [i_5] [8ULL])) ? (((/* implicit */int) ((2622754661U) > (arr_36 [i_5] [i_5])))) : (((/* implicit */int) arr_24 [1] [i_5])));
            var_28 = ((/* implicit */unsigned long long int) arr_22 [i_5] [i_5] [i_14] [i_14]);
        }
        for (long long int i_15 = 0; i_15 < 20; i_15 += 3) 
        {
            arr_56 [i_5] [i_15] = ((/* implicit */unsigned long long int) (+(arr_45 [i_15] [i_15] [i_5] [i_15] [i_5] [i_5 - 1])));
            arr_57 [i_5] [i_5] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5 - 2] [i_15]))) + (6510724252957123134ULL))));
            arr_58 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_26 [i_5 - 2])) : (arr_15 [i_5])));
        }
    }
    for (unsigned int i_16 = 0; i_16 < 17; i_16 += 4) 
    {
        var_29 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) -134217739))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)0)))) : (1672212665U)))) > (arr_10 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])));
        arr_63 [i_16] [15] = min((((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (arr_46 [i_16] [i_16] [i_16] [(unsigned short)14] [2U])))), (((/* implicit */unsigned long long int) min((((int) (-2147483647 - 1))), (((/* implicit */int) arr_3 [i_16] [i_16] [i_16]))))));
        arr_64 [(_Bool)1] = ((/* implicit */int) max((max((min((arr_50 [i_16]), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) ((arr_59 [6] [6]) ? (arr_35 [i_16] [i_16] [10U] [i_16] [i_16] [i_16]) : (((/* implicit */int) arr_61 [i_16] [i_16]))))))), (var_0)));
    }
    var_30 = ((/* implicit */long long int) var_10);
}
