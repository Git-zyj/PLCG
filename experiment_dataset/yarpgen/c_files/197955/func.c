/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197955
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
    var_18 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)2)) ^ (((/* implicit */int) ((signed char) 0ULL))))) & ((((~(((/* implicit */int) var_11)))) * (((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))))), (max((((/* implicit */long long int) arr_1 [i_0 - 1])), (var_16)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((0U) >= (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))))))));
        var_20 = ((/* implicit */unsigned short) var_6);
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) << (((var_8) - (1483598882U)))))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_2 [i_0] [i_1] [i_0 + 1])))) < (((/* implicit */long long int) ((unsigned int) var_0))))))));
                        var_22 = min((((/* implicit */long long int) (_Bool)1)), (-9184991761930503101LL));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_4 [i_0 - 3] [i_0 + 1] [i_2]), (arr_4 [i_0 - 2] [i_1] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((+(arr_4 [i_0 - 3] [i_0 + 1] [i_2])))));
                    }
                } 
            } 
        } 
        arr_9 [i_0 - 3] [i_0] = ((/* implicit */int) var_9);
    }
    /* vectorizable */
    for (unsigned int i_4 = 2; i_4 < 7; i_4 += 1) 
    {
        var_24 = ((/* implicit */long long int) ((arr_5 [(unsigned char)10]) < (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4 + 1])))));
        /* LoopSeq 3 */
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    for (unsigned char i_8 = 1; i_8 < 8; i_8 += 1) 
                    {
                        {
                            var_25 ^= ((/* implicit */_Bool) ((arr_22 [i_8 - 1] [i_8] [i_8 - 1] [i_4 + 2]) * (arr_3 [i_4])));
                            var_26 ^= (~(((((/* implicit */_Bool) var_3)) ? (arr_22 [i_8] [i_7] [i_6] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
                            var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */signed char) arr_21 [i_4 + 3] [i_4 + 3] [i_4 - 2] [i_5] [i_5] [i_4]);
            var_29 = ((((/* implicit */_Bool) ((long long int) var_10))) ? (var_7) : (((/* implicit */long long int) 4294967295U)));
            var_30 = ((/* implicit */short) arr_14 [i_4]);
        }
        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
        {
            arr_26 [i_9] [i_9] = ((/* implicit */long long int) (~(arr_17 [i_4 - 2] [i_9] [i_9])));
            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (((unsigned long long int) var_4)) : (arr_18 [i_4 - 2] [i_4] [i_4] [i_4] [i_4] [i_4 - 2])));
        }
        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */long long int) ((unsigned short) arr_20 [i_4 + 3] [i_10] [i_10] [i_4] [i_4] [i_4]));
            /* LoopNest 3 */
            for (unsigned long long int i_11 = 3; i_11 < 7; i_11 += 1) 
            {
                for (unsigned short i_12 = 4; i_12 < 9; i_12 += 1) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_37 [i_13]))) ? ((~(((/* implicit */int) var_12)))) : (((/* implicit */int) arr_8 [i_4 - 2] [i_4] [i_4 - 2] [i_4 - 2]))));
                            arr_38 [i_4] [i_10] [i_13] [i_11] [i_12] [i_13] = ((arr_4 [i_12 - 2] [i_12 - 4] [i_13]) << (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_18 [i_4 + 1] [i_12] [i_4 + 1] [i_10] [i_4] [i_11]))) - (105ULL))));
                            arr_39 [i_4] [i_4] [i_11] [i_13] [i_13] [i_13] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (-7902726836086730488LL) : (((/* implicit */long long int) (-2147483647 - 1)))));
                            var_34 = ((/* implicit */unsigned int) (signed char)15);
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned char i_14 = 0; i_14 < 21; i_14 += 1) 
    {
        var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (short)2382))));
        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_14] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-9184991761930503101LL)))), (max((0ULL), (((/* implicit */unsigned long long int) var_8))))))) ? (((((((/* implicit */_Bool) (signed char)-14)) && (((/* implicit */_Bool) var_7)))) ? (arr_4 [i_14] [i_14] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_14]))))) : (max((((/* implicit */long long int) var_5)), (arr_40 [i_14])))));
    }
}
