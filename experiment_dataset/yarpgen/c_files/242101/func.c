/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242101
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((var_4), (((/* implicit */unsigned int) var_7))))), (max((var_15), (var_15)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (max((((var_14) >> (((((/* implicit */int) var_0)) - (161))))), (((/* implicit */long long int) var_10))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_22 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0]))));
        var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0]))));
        var_24 = ((/* implicit */_Bool) ((arr_1 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_12)))));
        /* LoopSeq 4 */
        for (long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) >> (((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) - (127)))))) ? ((~(54043195528445952LL))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0]) >= (arr_4 [i_1]))))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) / (2226329662U))))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_6 [i_0] [i_0]))) & (((/* implicit */int) arr_6 [i_0] [i_0]))));
                var_26 -= ((((((arr_1 [(unsigned char)8]) << (((((/* implicit */int) arr_6 [i_0] [(unsigned char)2])) - (63))))) << (((arr_1 [(unsigned char)10]) & (((/* implicit */long long int) ((/* implicit */int) var_3))))))) >> (((((arr_2 [i_0] [i_1] [(unsigned char)0]) << (((((/* implicit */int) var_19)) - (62))))) - (835110218U))));
            }
            var_27 += ((/* implicit */long long int) arr_0 [i_0]);
        }
        /* vectorizable */
        for (unsigned int i_3 = 2; i_3 < 10; i_3 += 3) 
        {
            arr_12 [i_0] [i_0] [i_0] = arr_11 [i_0] [i_0] [i_0];
            var_28 = ((/* implicit */unsigned int) ((((arr_11 [i_0] [i_0] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0]) && (((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0]))))))));
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_16))) / (var_17)))) ? (((/* implicit */int) ((arr_1 [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) var_8)))))) : (((/* implicit */int) arr_6 [i_0] [i_0]))));
            arr_13 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) : (arr_8 [i_3]))) ^ (((/* implicit */long long int) arr_2 [i_0] [i_3] [i_0]))));
            /* LoopSeq 3 */
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned char) ((((arr_11 [i_5] [i_5] [i_5]) >= (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))))) ? (((arr_2 [i_0] [i_3] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) >= (arr_18 [i_0] [i_0] [i_0] [i_5] [i_6])))))));
                            arr_21 [i_6] [i_6] [i_6] [i_5] [i_6] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_6] [i_3 + 2] [i_3 + 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_19)) && (arr_0 [i_6])))) : (((/* implicit */int) arr_0 [i_6]))));
                            var_31 = ((arr_16 [i_0] [i_0] [i_0] [i_0]) & (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0]))) : (arr_8 [i_6]))));
                            var_32 = ((/* implicit */unsigned char) var_14);
                        }
                    } 
                } 
                arr_22 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_15 [i_0] [i_0] [i_0] [i_3]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_8 [i_0]) : (arr_16 [i_0] [i_3] [i_0] [i_0]))));
                /* LoopSeq 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    arr_25 [i_0] [i_3] [i_3] [i_4] [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_0] [i_3] [i_0])) && (((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_0]))))) + (((/* implicit */int) arr_19 [i_0] [i_0]))));
                    arr_26 [i_0] [i_0] [i_0] [i_4] [i_4] = ((/* implicit */long long int) (+(arr_15 [i_0] [i_0] [i_0] [i_7])));
                    var_33 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) arr_2 [i_0] [i_3] [i_0])) / (arr_24 [i_0] [i_0] [i_4] [i_0]))) ^ (((arr_19 [i_3] [i_7]) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_0]))) : (arr_4 [i_7])))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    arr_30 [i_0] [i_0] = ((/* implicit */_Bool) (+(((var_14) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                    arr_31 [i_8] [i_8] [i_0] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_3])) / (((/* implicit */int) arr_6 [i_0] [i_0]))))) / (((arr_19 [i_8] [i_3]) ? (arr_8 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                }
            }
            for (unsigned char i_9 = 4; i_9 < 10; i_9 += 3) 
            {
                var_34 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [(unsigned char)0] [i_9 - 4] [(unsigned char)0]))));
                arr_36 [i_0] [i_0] [i_9] = ((/* implicit */unsigned int) arr_24 [i_0] [i_0] [i_9] [i_0]);
                arr_37 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0]))) * (((54043195528445944LL) / (arr_34 [i_0] [i_0] [i_0] [i_0])))));
                var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236))) : (22U)));
            }
            for (long long int i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                var_36 = ((/* implicit */unsigned char) arr_20 [i_0] [i_3] [i_0] [i_3] [i_3 + 1]);
                /* LoopSeq 2 */
                for (long long int i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    var_37 = ((/* implicit */long long int) min((var_37), (arr_40 [i_11] [i_11] [i_10])));
                    arr_46 [i_0] [i_10] = ((unsigned char) ((arr_8 [i_11]) / (arr_33 [i_11] [i_10] [i_0] [i_0])));
                    var_38 = arr_3 [i_0] [i_10] [i_0];
                }
                for (unsigned char i_12 = 3; i_12 < 11; i_12 += 3) 
                {
                    var_39 = ((/* implicit */long long int) arr_17 [i_0] [i_12]);
                    arr_49 [i_12] [(unsigned char)6] [i_3] [(unsigned char)6] [i_0] |= arr_35 [i_0] [i_0] [i_10] [(unsigned char)6];
                }
                var_40 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) >> (((/* implicit */int) arr_19 [i_3 + 1] [i_3 - 1]))));
            }
        }
        for (unsigned char i_13 = 0; i_13 < 12; i_13 += 3) /* same iter space */
        {
            var_41 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)47)) >= (((/* implicit */int) (unsigned char)1))));
            var_42 = ((/* implicit */long long int) max((var_42), (((((/* implicit */long long int) 4036260984U)) / (31525197391593472LL)))));
            arr_52 [i_0] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_18 [i_0] [i_13] [i_13] [i_0] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_0] [i_13] [i_0]))))) | (min((-6275965697923107306LL), (((/* implicit */long long int) (unsigned char)247)))))) >= (((/* implicit */long long int) ((/* implicit */int) var_13)))));
        }
        for (unsigned char i_14 = 0; i_14 < 12; i_14 += 3) /* same iter space */
        {
            var_43 += ((((((((/* implicit */long long int) ((/* implicit */int) arr_43 [i_0] [i_0] [i_0] [i_0] [i_0]))) & (var_14))) << (((arr_29 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]) + (165705456362950925LL))))) & (max((((9223372036854775807LL) << (((((/* implicit */int) (unsigned char)191)) - (191))))), (((/* implicit */long long int) min((arr_23 [i_0] [i_0] [(unsigned char)6]), (((/* implicit */unsigned char) arr_54 [(unsigned char)0] [i_14] [i_14]))))))));
            arr_57 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) arr_43 [i_0] [i_0] [i_0] [i_0] [i_14])) >= (((/* implicit */int) arr_6 [i_0] [i_0])))));
            var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_18)) >= (((/* implicit */int) arr_48 [i_0] [i_14] [i_14] [i_14] [i_0]))))) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (-54043195528445952LL))))))) ? (min((((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) : (arr_16 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) var_11)))) : (((min((arr_33 [i_14] [i_14] [i_14] [i_0]), (arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] [i_14]))) ^ (((arr_11 [i_0] [i_0] [i_0]) / (arr_33 [i_0] [i_14] [i_14] [i_14])))))));
            arr_58 [i_0] = ((/* implicit */unsigned char) min((((min((var_14), (((/* implicit */long long int) var_12)))) & (((/* implicit */long long int) ((/* implicit */int) ((arr_47 [i_0] [i_0] [i_0] [i_0]) >= (arr_40 [i_0] [i_0] [i_0]))))))), (((/* implicit */long long int) var_5))));
            arr_59 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_9 [i_0] [i_0]);
        }
    }
}
