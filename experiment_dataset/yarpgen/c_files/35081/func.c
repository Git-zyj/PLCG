/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35081
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (short i_3 = 1; i_3 < 17; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_3 + 3])) || (((/* implicit */_Bool) (((_Bool)1) ? (12047686207598938471ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1])))))))))));
                            arr_15 [i_0] [i_0] [i_2] [i_3 - 1] [i_4] = ((/* implicit */short) var_3);
                            arr_16 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_4] [i_2] [i_3] [i_4])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_0 [i_2]))))) ? ((+(((/* implicit */int) arr_0 [i_0])))) : ((+(((/* implicit */int) (unsigned char)191))))))) : (((((/* implicit */_Bool) -1LL)) ? (6399057866110613145ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32764)))))));
                            arr_17 [i_4] = ((/* implicit */unsigned char) ((long long int) min((min((arr_4 [i_3]), (6399057866110613145ULL))), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_3])))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((arr_18 [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3]) && (((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3] [i_3] [i_5])))))));
                            var_20 += ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_3 + 1] [i_3 + 2] [4ULL] [i_3] [i_3] [i_3])) ^ (arr_13 [i_3] [i_3 + 2] [(unsigned char)9] [i_3] [i_3 + 2])));
                            var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_3 + 4] [i_3 + 3] [i_3 + 1] [i_3 + 4])) % (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (short)14028)))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_0])) ? (arr_14 [i_6]) : (arr_14 [i_2])));
                            var_23 = ((/* implicit */int) ((((/* implicit */int) var_12)) == (arr_7 [i_3 + 2] [i_3 + 3] [i_3 + 1] [i_3 + 2])));
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (signed char)-40))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_2] [i_1] [i_2] [i_3 + 4] [i_6]))) + (var_7))))));
                            var_24 = ((/* implicit */short) ((arr_19 [i_3 - 1] [i_3 + 4] [i_3 + 4] [i_3 - 1]) << ((((~(((/* implicit */int) arr_1 [i_1])))) + (64)))));
                        }
                        arr_25 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */int) arr_1 [i_0]);
                        arr_26 [i_0] [i_1] [i_2] [2] [i_2] [i_3] = ((/* implicit */_Bool) min((((/* implicit */int) var_8)), (((((/* implicit */int) arr_18 [i_3] [i_3 + 3] [i_3 - 1] [i_3 + 3])) >> (((/* implicit */int) arr_18 [i_1] [i_3 + 2] [i_3 + 4] [i_3 + 3]))))));
                    }
                } 
            } 
        } 
        var_25 = (~(max((((/* implicit */int) (short)-32764)), (((arr_13 [i_0] [(short)3] [i_0] [i_0] [i_0]) << (((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [(unsigned short)9] [i_0])) - (59))))))));
        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_10 [i_0]), (arr_10 [i_0]))))));
        var_27 = ((/* implicit */unsigned short) (_Bool)1);
    }
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            for (long long int i_9 = 3; i_9 < 19; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    {
                        var_28 += ((/* implicit */long long int) (~(((/* implicit */int) arr_27 [i_9 - 3]))));
                        arr_37 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((int) 3608436672U))) : (6399057866110613157ULL)));
                        var_29 += ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) arr_33 [i_10])))));
                    }
                } 
            } 
        } 
        arr_38 [i_7] = ((/* implicit */unsigned short) ((long long int) var_14));
    }
    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 2) /* same iter space */
    {
        arr_41 [i_11] = ((/* implicit */signed char) (_Bool)1);
        arr_42 [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6399057866110613127ULL)) ? (10874688358714935517ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55695)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(11184724357865679488ULL)))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_36 [i_11] [i_11] [i_11])) / (var_15)))))))) : (min((((/* implicit */unsigned long long int) arr_40 [i_11])), (arr_20 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))));
    }
    var_30 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((((var_10) + (2147483647))) << (((((/* implicit */int) (short)25969)) - (25969)))))))), (((unsigned long long int) max((var_7), (((/* implicit */long long int) var_9)))))));
}
