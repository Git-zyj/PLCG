/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29299
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
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = arr_1 [i_0];
        arr_3 [(_Bool)1] = ((/* implicit */unsigned long long int) var_11);
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24382))) | (0ULL)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */short) (unsigned char)102);
                    arr_11 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) var_3);
                    var_13 = ((/* implicit */unsigned int) 7457454808320172391LL);
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */signed char) 13233846416989100ULL);
                        arr_14 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) 549603246);
                        arr_15 [i_1] = arr_13 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1];
                    }
                    for (unsigned long long int i_4 = 3; i_4 < 22; i_4 += 4) 
                    {
                        arr_18 [i_1] [i_1] = ((/* implicit */short) arr_0 [i_2 - 1] [i_0 - 1]);
                        var_15 = 24647681986613958LL;
                        /* LoopSeq 2 */
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            arr_22 [i_0] [i_1] [19LL] [i_4] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_2 + 1] [i_2 + 1])) ? (arr_12 [i_1] [10U] [i_2 - 1] [i_4]) : (arr_12 [i_1] [i_1] [i_2 - 1] [i_4])));
                            arr_23 [i_0] [i_0] [i_1] [i_1] [i_0] [i_5] = ((/* implicit */long long int) var_4);
                            arr_24 [i_1] [i_4 + 2] = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)55)))) == (((/* implicit */int) arr_10 [i_1] [i_5] [i_1] [i_4 - 2]))));
                            var_16 = ((/* implicit */unsigned short) var_3);
                            arr_25 [i_1] [i_0] [i_1] [i_4 - 1] [(_Bool)1] = ((/* implicit */_Bool) ((arr_12 [i_1] [i_1] [i_2 - 1] [i_4 + 1]) ^ (((/* implicit */int) (unsigned char)80))));
                        }
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((arr_19 [i_0 - 1] [(unsigned char)7] [20ULL] [i_6]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_21 [i_6] [19ULL] [i_2 - 1] [15ULL] [i_4 + 2] [i_2 - 1]))));
                            var_18 = arr_9 [i_0] [i_6] [i_6];
                            arr_29 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((3283731663U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_4] [i_6])))));
                            arr_30 [i_0 - 1] [(signed char)21] [i_0 - 1] [i_4] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 18446744073709551598ULL)) ? (422212465065984ULL) : (((/* implicit */unsigned long long int) 2147483647)))) : (((arr_17 [i_0 - 1] [1U] [(unsigned char)18] [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33919)))))));
                        }
                    }
                }
            } 
        } 
    }
    var_19 = var_6;
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned long long int) var_3)) : (max((var_9), (((/* implicit */unsigned long long int) (_Bool)1))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_7 = 3; i_7 < 12; i_7 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) var_2);
        arr_33 [i_7] = arr_9 [i_7] [i_7] [i_7];
        arr_34 [i_7] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 2U)) == (18ULL))))) + (arr_28 [6] [6] [i_7 - 1] [i_7 + 1] [i_7])));
        arr_35 [i_7] = ((/* implicit */unsigned int) (unsigned short)65507);
    }
    /* vectorizable */
    for (short i_8 = 0; i_8 < 10; i_8 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 2) 
        {
            for (signed char i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                for (unsigned int i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    {
                        arr_48 [i_8] [6LL] = ((/* implicit */_Bool) var_5);
                        arr_49 [2ULL] [3ULL] = ((/* implicit */unsigned int) (signed char)126);
                        arr_50 [i_8] [i_11] [i_8] [i_11] = ((/* implicit */short) arr_21 [i_8] [i_8] [i_9] [16LL] [i_11] [i_11]);
                        arr_51 [i_8] [i_9] [i_8] [i_9] = ((/* implicit */unsigned int) var_0);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned char) var_2);
        arr_52 [i_8] = ((/* implicit */int) (unsigned char)235);
        var_23 = ((/* implicit */unsigned char) (short)-9713);
        arr_53 [i_8] = ((/* implicit */short) ((arr_7 [16ULL] [i_8]) ? (17551948565866022572ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(_Bool)1] [i_8])))));
    }
}
