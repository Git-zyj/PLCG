/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213817
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0])))) ? (((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */int) arr_2 [(short)15] [i_0]))))) ? (max((((/* implicit */unsigned long long int) (short)-24991)), (30ULL))) : (((/* implicit */unsigned long long int) 1326702163U)))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)0)), (1326702163U))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_18 = ((/* implicit */signed char) arr_3 [i_1]);
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        {
                            arr_21 [4ULL] [4ULL] [i_2] [9U] [9U] [i_1] [9U] = var_12;
                            var_19 = ((/* implicit */_Bool) ((((2968265133U) % (1326702163U))) << ((((((-(0U))) - (max((((/* implicit */unsigned int) arr_13 [i_1] [10ULL] [i_4])), (1326702166U))))) - (893312191U)))));
                        }
                    } 
                } 
            } 
            var_20 ^= ((/* implicit */unsigned char) ((arr_6 [i_0] [i_1] [10ULL]) <= (((((/* implicit */_Bool) var_0)) ? (arr_6 [i_0] [i_0 - 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4880)))))));
            arr_22 [(unsigned char)3] [i_1] [(unsigned char)3] = 1326702163U;
        }
        for (unsigned long long int i_5 = 4; i_5 < 17; i_5 += 1) 
        {
            arr_25 [i_0] [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((0U) < (max((arr_8 [i_5]), (((/* implicit */unsigned int) (unsigned short)60673)))))))));
            var_21 += ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)4880)) & ((+(-1081846748)))))), (2968265138U)));
            /* LoopSeq 1 */
            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
            {
                var_22 ^= ((/* implicit */unsigned short) arr_10 [i_6] [i_0 - 1]);
                /* LoopSeq 1 */
                for (unsigned char i_7 = 1; i_7 < 16; i_7 += 1) 
                {
                    var_23 = ((/* implicit */unsigned char) arr_14 [i_5 - 3] [i_5 - 4] [i_5 - 1] [i_5 + 1] [i_5 + 2] [i_5 - 2]);
                    arr_30 [i_0] [i_0] [i_0 + 1] [(_Bool)1] [i_5] = ((/* implicit */signed char) var_3);
                    arr_31 [i_5] [i_5] [i_5 + 2] [i_5 - 1] [i_5] = ((/* implicit */unsigned short) arr_5 [i_5 - 3] [i_5 - 3]);
                }
                arr_32 [i_0] [i_5] [i_0] [i_0 - 1] = ((/* implicit */long long int) ((arr_10 [i_5] [i_6]) ? (((((/* implicit */_Bool) 2047ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_15 [12ULL] [i_5 - 2] [i_0] [i_0])) < (13U))))) : (2968265133U))) : (((/* implicit */unsigned int) ((675947677) / (((/* implicit */int) (unsigned char)52)))))));
            }
            /* LoopSeq 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_37 [i_5] [i_5] [i_8] = ((/* implicit */signed char) ((((arr_10 [i_5] [(unsigned char)6]) ? (arr_6 [i_0] [i_5] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)11191)) ? (-675947678) : (((/* implicit */int) (unsigned short)65531))))))) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2046)))));
                arr_38 [15U] [i_0] [i_5] [i_8] = ((_Bool) ((int) var_4));
            }
            for (unsigned char i_9 = 1; i_9 < 18; i_9 += 2) 
            {
                var_24 = ((/* implicit */unsigned int) min((var_24), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)54))) * (3678002987U)))));
                /* LoopNest 2 */
                for (unsigned int i_10 = 1; i_10 < 18; i_10 += 1) 
                {
                    for (signed char i_11 = 0; i_11 < 19; i_11 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((var_15), (2968265138U))), (arr_6 [i_11] [i_10] [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_11] [14U] [i_9] [14U] [14U] [i_5] [16U]))) : (((((/* implicit */_Bool) arr_26 [i_0] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_0] [i_11]) < (((/* implicit */int) arr_44 [(_Bool)0] [i_5] [4LL])))))) : (((((/* implicit */_Bool) arr_1 [i_9 + 1])) ? (5786315476204817540ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [(_Bool)1] [i_5 - 2] [(_Bool)1] [(_Bool)1] [i_9] [i_9] [i_11]))))))))))));
                            arr_47 [i_5] [i_9] [(_Bool)1] [i_5] = ((/* implicit */unsigned int) ((long long int) ((long long int) max((((/* implicit */unsigned long long int) var_12)), (9ULL)))));
                            var_26 ^= ((/* implicit */unsigned int) ((arr_17 [i_11] [(unsigned char)0] [i_9 + 1] [16U]) ? (((/* implicit */unsigned long long int) min((((1326702170U) / (((/* implicit */unsigned int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned int) 2093056))))) : (((arr_12 [i_5] [i_5 - 3]) + (((/* implicit */unsigned long long int) min((arr_6 [i_0 + 2] [i_5] [i_9 - 1]), (((/* implicit */unsigned int) arr_44 [i_0] [i_5] [i_10])))))))));
                            var_27 *= arr_44 [i_9] [i_5] [i_5];
                        }
                    } 
                } 
            }
            for (signed char i_12 = 0; i_12 < 19; i_12 += 3) 
            {
                var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (2047ULL) : (((/* implicit */unsigned long long int) 1326702163U)))))))) * (max((var_6), (((((/* implicit */int) arr_49 [i_0] [i_5])) & (((/* implicit */int) (short)(-32767 - 1))))))))))));
                arr_50 [i_0] [i_5] [i_5] [i_12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)8))));
            }
            arr_51 [i_5] [i_5] [i_5] = ((/* implicit */int) max((((/* implicit */unsigned int) min((arr_49 [i_5 - 4] [i_0 - 1]), (arr_49 [i_5 - 2] [i_0 + 1])))), (max((((/* implicit */unsigned int) arr_27 [i_0] [i_5] [i_0])), (arr_8 [7ULL])))));
        }
        for (long long int i_13 = 2; i_13 < 18; i_13 += 2) 
        {
            var_29 ^= ((/* implicit */unsigned short) arr_41 [i_13]);
            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) var_7))));
        }
        var_31 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) arr_0 [i_0 + 2])) % (min((((/* implicit */unsigned long long int) arr_26 [i_0] [i_0])), (18446744073709549569ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(unsigned char)18] [(unsigned char)18] [i_0] [(_Bool)1])))));
        arr_55 [i_0 + 2] [18U] = ((/* implicit */unsigned short) 1326702158U);
    }
    var_32 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_3))));
}
