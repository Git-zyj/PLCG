/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21806
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_6 [i_1] |= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-12181)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)44))) : (781539133U)))));
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) (_Bool)0)), (max((((/* implicit */unsigned long long int) var_9)), (max((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_1 [(unsigned char)0])))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) -5917633240958330391LL);
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_3 = 1; i_3 < 20; i_3 += 3) 
        {
            arr_11 [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(((3513428163U) - (((/* implicit */unsigned int) -327262475))))))), (max((((/* implicit */unsigned long long int) max((6075173125990955109LL), (((/* implicit */long long int) (signed char)-84))))), (((((/* implicit */_Bool) var_17)) ? (arr_8 [i_3]) : (((/* implicit */unsigned long long int) var_3))))))));
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    for (int i_6 = 1; i_6 < 20; i_6 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) max((((int) arr_17 [i_2])), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (arr_8 [i_2])))))))));
                            arr_19 [i_2] [i_2] [i_2] [i_2] [i_6] = ((/* implicit */long long int) (+(max((((/* implicit */int) arr_13 [i_2] [i_2] [i_6 + 2] [i_5])), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)-17312))))))));
                            var_23 = ((/* implicit */long long int) ((int) max(((unsigned short)42160), (((/* implicit */unsigned short) (_Bool)1)))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (-9223372036854775807LL) : (((/* implicit */long long int) 2409092077U)))) > ((~(565337013998832066LL)))))) ^ (((/* implicit */int) (unsigned char)163)))))));
        }
        for (unsigned long long int i_7 = 3; i_7 < 18; i_7 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_8 = 2; i_8 < 21; i_8 += 3) 
            {
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) ((((/* implicit */int) (short)18684)) <= (((/* implicit */int) (unsigned short)23376))))) : (((/* implicit */int) max(((unsigned short)38665), (((/* implicit */unsigned short) var_12)))))));
                arr_25 [i_2 + 3] [i_7] [i_2] [i_8 - 1] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)43))));
                arr_26 [i_2] [i_7 + 4] [i_7 + 4] = arr_7 [i_7];
            }
            /* vectorizable */
            for (unsigned short i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                arr_29 [i_2] = ((((/* implicit */long long int) ((unsigned int) arr_8 [i_2 + 2]))) | (((((/* implicit */_Bool) arr_16 [i_2] [i_7] [i_2] [i_2])) ? (((/* implicit */long long int) var_3)) : (arr_18 [i_2] [i_7]))));
                /* LoopSeq 1 */
                for (unsigned int i_10 = 3; i_10 < 19; i_10 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_10 + 1] [i_9] [i_7 + 3] [i_2]))))) < (1245317091U))))));
                        var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)8191))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [(unsigned char)13] [i_7])) >> (((565337013998832077LL) - (565337013998832071LL)))))) : (2712082072U)));
                    }
                    arr_35 [i_2] = ((/* implicit */unsigned long long int) arr_15 [i_2] [i_7 + 3] [i_7] [12LL]);
                    arr_36 [i_2] [i_7] [i_7] [i_2] = ((/* implicit */_Bool) ((unsigned long long int) arr_12 [4LL] [4U]));
                }
            }
            arr_37 [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_34 [i_2] [i_2 + 1] [i_7] [i_7] [i_7 - 2])) ? (arr_34 [i_2 - 1] [i_2] [i_7 - 1] [i_2 - 1] [i_2]) : (arr_34 [i_2] [i_7 + 1] [i_2 + 3] [i_7 + 1] [i_7]))) >> (((((/* implicit */int) (signed char)106)) - (73)))));
            var_28 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (unsigned short)8171)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_31 [i_2] [i_2] [(unsigned short)16] [i_7])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2409092058U))))))) : (arr_12 [i_2] [i_2])));
            arr_38 [i_2] [i_7] = ((/* implicit */short) arr_27 [i_2] [i_2 + 2] [i_7 + 4]);
        }
        for (short i_12 = 0; i_12 < 22; i_12 += 1) 
        {
            arr_41 [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) 4294967276U));
            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)1))))) ? (((((/* implicit */_Bool) 2409092054U)) ? (var_15) : (((/* implicit */long long int) 4098002010U)))) : (((long long int) 1885875232U))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)111))))), (9223372036854775802LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_2] [(_Bool)1]))))))));
        }
        var_30 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (((((/* implicit */_Bool) 5184298601188853890ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [(unsigned char)18] [i_2 + 3]))) : (max((var_2), (((/* implicit */long long int) (unsigned short)41294))))))));
        arr_42 [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)23376)) << (((/* implicit */int) (unsigned char)12))))), (((((/* implicit */_Bool) arr_24 [i_2 + 2] [i_2] [i_2 + 3])) ? (var_1) : (((/* implicit */unsigned int) -1))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_13 = 2; i_13 < 20; i_13 += 3) 
        {
            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) var_4))));
            var_32 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-42))));
            arr_47 [i_2] = ((/* implicit */signed char) var_11);
        }
        for (unsigned int i_14 = 0; i_14 < 22; i_14 += 1) 
        {
            arr_50 [i_2] [i_2] = ((/* implicit */long long int) (+((+(arr_34 [i_2] [i_2] [14U] [i_14] [i_14])))));
            /* LoopNest 2 */
            for (signed char i_15 = 0; i_15 < 22; i_15 += 2) 
            {
                for (long long int i_16 = 0; i_16 < 22; i_16 += 3) 
                {
                    {
                        var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) 0LL))));
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_8))) >> (((/* implicit */int) ((((/* implicit */int) (unsigned short)24430)) == (((/* implicit */int) (signed char)-58)))))))) ? (((/* implicit */long long int) ((unsigned int) (short)12570))) : (((((/* implicit */_Bool) arr_28 [i_2 + 1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_2 - 1] [i_2]))) : (var_2)))));
                    }
                } 
            } 
        }
    }
}
