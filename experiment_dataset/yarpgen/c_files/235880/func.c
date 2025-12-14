/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235880
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
    var_16 ^= ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) arr_2 [5ULL]);
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) (~(min((arr_12 [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]), (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)10008)), (arr_9 [(short)9] [i_1 - 2] [i_3] [i_0]))))))));
                            var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)10012)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (8ULL)));
                            var_20 = (+(((/* implicit */int) arr_0 [i_0])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned long long int) var_0)));
                            arr_18 [7LL] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 10823496802699391329ULL)) ? (8160ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                            arr_19 [i_0] [i_1 - 2] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((signed char) arr_9 [i_0] [i_0] [i_0] [i_0]))), (((((_Bool) arr_6 [i_0] [i_4] [i_5])) ? (((((/* implicit */_Bool) var_10)) ? (arr_12 [i_0] [i_1 + 1] [i_4] [i_0] [i_4] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_0])))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    for (long long int i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) arr_16 [1ULL] [i_1] [i_7] [i_1 + 1])), (max((10823496802699391355ULL), (var_5))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_6] [i_7] [(signed char)4])) && (((/* implicit */_Bool) var_6)))) ? (((arr_9 [i_0] [i_0] [i_0] [i_0]) ^ (((/* implicit */int) arr_17 [i_0])))) : ((+(((/* implicit */int) arr_1 [i_1])))))))));
                                var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) arr_7 [i_1 - 3] [i_1 + 1] [i_1 + 1])))));
                                arr_30 [8ULL] [8ULL] [i_8] [i_8] [7ULL] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((max((arr_12 [i_0] [i_1] [i_6] [(unsigned short)0] [i_8] [i_8]), (((/* implicit */unsigned long long int) -6813346844223178103LL)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 3) 
    {
        for (unsigned short i_10 = 2; i_10 < 23; i_10 += 2) 
        {
            for (unsigned short i_11 = 0; i_11 < 24; i_11 += 4) 
            {
                {
                    var_24 ^= ((/* implicit */unsigned long long int) arr_35 [i_9]);
                    /* LoopNest 2 */
                    for (long long int i_12 = 3; i_12 < 23; i_12 += 3) 
                    {
                        for (unsigned short i_13 = 2; i_13 < 23; i_13 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_9]))) : (arr_41 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])))) ? (((/* implicit */int) (short)-10012)) : (((((/* implicit */_Bool) arr_34 [i_11] [i_11])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_40 [i_9] [i_10])))))), (((((/* implicit */int) arr_34 [i_13 + 1] [i_12 - 1])) + (((/* implicit */int) arr_31 [i_13 + 1]))))));
                                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_9] [i_10] [(unsigned short)18] [i_12 + 1] [9LL] [i_13 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_41 [5ULL] [i_10] [i_11] [i_12 + 1] [i_13] [i_13 - 2])))))))));
                                arr_44 [2LL] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_36 [i_9] [i_10] [(short)15] [i_12 - 3])) & (((/* implicit */int) arr_42 [i_9] [i_10 - 2] [(_Bool)1] [i_12 - 3] [19] [i_13 - 2])))) | (((((/* implicit */_Bool) arr_42 [i_9] [i_10] [20LL] [i_12 - 3] [i_13] [i_13 - 2])) ? (((/* implicit */int) arr_42 [(signed char)18] [4ULL] [i_11] [i_12 - 3] [(signed char)18] [i_13 - 2])) : (((/* implicit */int) arr_36 [i_9] [i_10 + 1] [(_Bool)1] [i_12 - 3]))))));
                            }
                        } 
                    } 
                    var_27 -= ((/* implicit */unsigned long long int) var_3);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_14 = 0; i_14 < 14; i_14 += 3) 
    {
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            for (unsigned char i_16 = 0; i_16 < 14; i_16 += 3) 
            {
                {
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (5ULL)));
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 0; i_17 < 14; i_17 += 4) 
                    {
                        for (unsigned char i_18 = 1; i_18 < 12; i_18 += 1) 
                        {
                            {
                                var_29 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_39 [i_15 - 1] [i_15 - 1])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48419))) : (var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_49 [i_17] [i_15] [i_16] [i_17])))))), (((/* implicit */unsigned long long int) arr_52 [i_14] [i_14] [i_18] [i_17] [(_Bool)1]))));
                                var_30 = ((/* implicit */unsigned char) ((unsigned short) ((int) 5143790514881331064LL)));
                                var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((arr_48 [i_17] [i_15 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32765))))) >> (((/* implicit */int) ((_Bool) (+(var_3))))))))));
                                var_32 -= ((/* implicit */unsigned char) (-(max((((/* implicit */int) arr_39 [i_15 - 1] [i_16])), (arr_49 [i_17] [i_18 + 1] [i_18 + 2] [i_18])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 3) 
                    {
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */long long int) ((((((/* implicit */long long int) (+(((/* implicit */int) var_14))))) == ((+(6813346844223178102LL))))) ? (((/* implicit */int) var_12)) : ((((_Bool)0) ? (((/* implicit */int) (short)10012)) : (((/* implicit */int) (short)8160))))));
                                var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
