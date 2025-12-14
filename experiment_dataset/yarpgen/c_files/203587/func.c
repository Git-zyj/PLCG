/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203587
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) arr_1 [i_0])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_14 *= ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) != (((/* implicit */int) arr_0 [i_0])));
            var_15 = ((/* implicit */long long int) ((int) arr_3 [i_1]));
        }
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    {
                        arr_15 [i_0] [i_2] [i_3] [4] [i_4] = ((unsigned int) ((arr_3 [i_2]) | (((/* implicit */unsigned long long int) var_11))));
                        arr_16 [i_4] [i_4] [11U] [i_3] [11U] [i_0] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)40))))) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) arr_10 [i_0])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_5 = 1; i_5 < 20; i_5 += 1) 
                        {
                            var_16 = ((/* implicit */short) (~(var_10)));
                            var_17 *= ((/* implicit */unsigned int) (unsigned char)221);
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 4; i_6 < 23; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0]))));
                            arr_22 [i_0] [(short)0] = ((/* implicit */short) ((unsigned int) arr_13 [i_6]));
                        }
                        var_19 ^= ((/* implicit */short) ((((int) arr_5 [i_0] [i_4])) >> (((arr_5 [i_3] [i_4]) - (1159867394993211751LL)))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_13 [i_0]), (arr_13 [i_2])))) ? (var_2) : (max((((/* implicit */long long int) arr_2 [i_2])), (max((((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_2])), (var_6)))))));
        }
        arr_23 [i_0] = ((/* implicit */unsigned char) var_0);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_7 = 1; i_7 < 24; i_7 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */int) max((var_21), (((int) (~(((/* implicit */int) var_12)))))));
        arr_27 [i_7 + 1] = ((/* implicit */long long int) ((arr_25 [i_7 - 1]) >> (((arr_24 [i_7 + 1] [i_7 - 1]) - (1389875219U)))));
        /* LoopSeq 2 */
        for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_9 = 1; i_9 < 21; i_9 += 3) 
            {
                for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_11 = 0; i_11 < 25; i_11 += 4) 
                        {
                            var_22 *= ((/* implicit */unsigned long long int) arr_25 [i_11]);
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) 7137754496104998045LL)))))));
                            var_24 *= ((/* implicit */unsigned int) ((var_3) ? (((-1748798817754107216LL) & (((/* implicit */long long int) arr_34 [i_11] [i_11] [i_11] [i_11])))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)7)) * (((/* implicit */int) var_5)))))));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_9] [i_9 + 4] [i_9])) && (((/* implicit */_Bool) arr_32 [(unsigned char)23] [i_9 + 4] [(unsigned char)23]))));
                            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) arr_32 [2U] [i_8] [i_9]))));
                        }
                        for (long long int i_12 = 1; i_12 < 23; i_12 += 3) 
                        {
                            var_27 = ((/* implicit */signed char) (~(((/* implicit */int) arr_32 [i_7] [i_7] [14LL]))));
                            var_28 = ((/* implicit */long long int) ((short) arr_37 [(short)14] [i_9] [(unsigned char)5] [1LL] [i_7 + 1] [i_12]));
                        }
                        var_29 = ((/* implicit */int) ((short) arr_28 [i_7 + 1]));
                    }
                } 
            } 
            arr_39 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_7] [i_7] [i_8]))) - (((((/* implicit */_Bool) arr_30 [i_7 - 1] [i_7] [i_7 - 1])) ? (arr_24 [i_8] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
        }
        for (long long int i_13 = 0; i_13 < 25; i_13 += 1) 
        {
            var_30 = ((/* implicit */signed char) ((((int) var_1)) << (((((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)101))) : (arr_25 [i_7 - 1]))) - (98U)))));
            /* LoopNest 3 */
            for (short i_14 = 3; i_14 < 23; i_14 += 3) 
            {
                for (unsigned long long int i_15 = 3; i_15 < 22; i_15 += 1) 
                {
                    for (unsigned char i_16 = 0; i_16 < 25; i_16 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned long long int) arr_29 [i_16] [i_7]);
                            arr_49 [i_13] [i_13] [i_14 + 2] [i_15] [i_16] = ((/* implicit */short) ((arr_42 [i_7]) == (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_7 - 1] [i_13] [i_15 - 3] [i_15])))));
                            var_32 = ((/* implicit */signed char) (-(arr_41 [i_14])));
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (signed char i_17 = 1; i_17 < 24; i_17 += 4) /* same iter space */
    {
        var_33 += ((((/* implicit */int) arr_26 [i_17])) < (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)127))))));
        var_34 = ((/* implicit */signed char) ((unsigned int) arr_24 [i_17 - 1] [i_17 + 1]));
        var_35 = arr_31 [i_17] [i_17] [i_17];
        var_36 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) arr_44 [i_17] [i_17] [(_Bool)1] [(_Bool)1])) != (((/* implicit */int) arr_44 [(_Bool)1] [i_17] [(_Bool)1] [i_17 - 1])))));
    }
}
