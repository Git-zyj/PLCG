/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197648
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_14 [i_3] [i_0] [i_2] [3LL] [(unsigned short)8] [7] [i_0] = ((/* implicit */unsigned char) var_3);
                                arr_15 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_13 [i_4] [i_0] [i_2 + 1] [i_0] [i_1]) <= (arr_13 [i_2 - 1] [i_0] [i_2 - 2] [i_0] [i_2]))))) | (((arr_13 [i_4] [i_0] [i_2 + 1] [i_0] [i_0]) + (arr_13 [12U] [i_0] [i_2 + 1] [i_0] [i_2])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                arr_20 [i_0] [i_1] [4LL] [i_1] [i_1] = ((((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned short)127), (var_3))))))) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_5])) : (min((((/* implicit */unsigned long long int) arr_5 [i_0])), (arr_12 [i_0] [i_1] [4ULL] [i_2] [11U] [i_0] [4ULL]))));
                                var_11 = ((/* implicit */int) max((var_11), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2 - 1] [(_Bool)1] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) arr_11 [i_2 + 1] [i_2] [i_2 - 1] [i_2 - 2]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (arr_11 [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2 + 1])))) : (((/* implicit */int) min((arr_11 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1]), (arr_11 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 2]))))))));
                                var_12 = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_2]);
                                var_13 = 4294967291U;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) 
    {
        for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 16; i_9 += 3) 
                {
                    for (long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        {
                            arr_34 [i_8] [i_8] [(_Bool)0] [i_9] [i_10] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_29 [i_8] [i_7] [i_9])) ? (((/* implicit */int) arr_23 [i_10])) : (((/* implicit */int) var_0))))));
                            var_14 = ((/* implicit */unsigned long long int) (-(min((arr_32 [i_7] [(signed char)2] [i_9] [7]), (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 16; i_13 += 2) 
                        {
                            {
                                var_15 ^= max((((((/* implicit */_Bool) arr_42 [i_7] [i_7] [i_13] [i_13] [i_13] [i_7] [i_7])) ? (((/* implicit */int) arr_42 [i_7] [i_7] [i_8] [i_11] [i_12] [i_13] [i_13])) : (((/* implicit */int) (unsigned short)40577)))), ((-(((/* implicit */int) arr_42 [i_11] [i_8] [i_11] [i_8] [i_13] [i_8] [i_8])))));
                                var_16 = ((/* implicit */unsigned short) arr_22 [i_11]);
                                var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_27 [i_7] [i_11])) ? (((/* implicit */int) (unsigned short)41084)) : (((/* implicit */int) arr_27 [i_7] [i_12])))) % (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_27 [i_7] [i_12])) : (((/* implicit */int) arr_27 [i_7] [i_13]))))));
                                var_18 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_0)) << (((1084394884976037294ULL) - (1084394884976037288ULL))))) <= (((/* implicit */int) arr_41 [i_11] [i_11] [i_13] [i_12])))))) + ((((!(((/* implicit */_Bool) 3299028713U)))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65387))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_14 = 0; i_14 < 16; i_14 += 1) 
                {
                    for (unsigned int i_15 = 1; i_15 < 12; i_15 += 2) 
                    {
                        for (int i_16 = 0; i_16 < 16; i_16 += 2) 
                        {
                            {
                                arr_50 [i_7] [i_8] [i_14] [i_15] [i_8] [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_39 [i_15 + 1] [i_8] [i_8] [i_8]), (arr_39 [i_15 + 4] [i_8] [i_8] [i_14])))) ? (max((((/* implicit */long long int) arr_39 [i_15 - 1] [i_8] [i_8] [i_15 + 2])), (-1LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_15 + 3] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_39 [i_15 + 3] [i_8] [i_8] [i_15])) : (((/* implicit */int) arr_39 [i_15 - 1] [i_8] [i_8] [i_7])))))));
                                var_19 = ((((/* implicit */_Bool) (short)32741)) ? (((((/* implicit */_Bool) arr_42 [i_15 + 1] [i_15] [i_15] [i_15 + 1] [i_15 + 2] [i_15 + 2] [i_15])) ? (((/* implicit */int) arr_42 [i_15 + 4] [i_15] [i_15] [i_15 + 3] [i_15 + 4] [4U] [(_Bool)1])) : (((/* implicit */int) arr_41 [i_15] [i_15] [i_15] [i_15 + 1])))) : (((((/* implicit */_Bool) arr_32 [i_15] [11] [i_15] [i_15 + 1])) ? (((/* implicit */int) arr_42 [i_15] [i_15] [i_15] [i_15 + 3] [i_15 + 1] [i_15 + 2] [i_15])) : (((/* implicit */int) arr_41 [i_15] [i_15 + 2] [i_15] [i_15 + 2])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_17 = 1; i_17 < 23; i_17 += 3) 
    {
        for (unsigned int i_18 = 1; i_18 < 23; i_18 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_19 = 0; i_19 < 24; i_19 += 1) 
                {
                    for (signed char i_20 = 0; i_20 < 24; i_20 += 1) 
                    {
                        {
                            arr_60 [(unsigned short)0] |= ((/* implicit */int) max(((unsigned short)110), (((/* implicit */unsigned short) (short)23167))));
                            var_20 = ((/* implicit */unsigned char) min((((15053418734341991651ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_17 + 1]))))), (((/* implicit */unsigned long long int) max((max((-337493129), (((/* implicit */int) var_4)))), (((/* implicit */int) arr_52 [i_17] [i_19])))))));
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned short) (unsigned char)94))))) ? (((/* implicit */int) ((arr_55 [(_Bool)1] [i_18] [i_19]) < (((/* implicit */unsigned long long int) 3242077106483317751LL))))) : (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) (((+(((/* implicit */int) arr_51 [i_17] [i_17])))) == (((/* implicit */int) arr_51 [i_17] [(unsigned short)3]))))) : (((/* implicit */int) ((((/* implicit */int) arr_52 [i_18 - 1] [i_17 + 1])) == (((/* implicit */int) arr_52 [i_18 - 1] [i_17 - 1]))))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_21 = 0; i_21 < 24; i_21 += 4) 
                {
                    for (unsigned int i_22 = 0; i_22 < 24; i_22 += 1) 
                    {
                        for (unsigned short i_23 = 0; i_23 < 24; i_23 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_56 [4LL]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_18 - 1] [i_18]))) : (((((/* implicit */long long int) arr_66 [i_21] [i_18] [i_21] [i_22])) - (arr_61 [i_18 - 1] [i_18 - 1] [(signed char)13])))))) ? (arr_65 [i_17] [i_17 - 1] [i_21] [i_22] [i_23]) : (((arr_67 [i_18 + 1] [i_18 - 1] [i_18] [i_18 + 1] [i_18 - 1]) - (arr_61 [i_18 - 1] [i_18 + 1] [i_17 - 1]))))))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_57 [i_22] [i_18 - 1] [i_17 + 1] [i_22]))))) ? (arr_59 [i_22]) : ((-(((/* implicit */int) arr_68 [i_23] [i_22] [i_18 - 1] [i_22] [i_17 + 1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_24 = 0; i_24 < 16; i_24 += 1) 
    {
        for (unsigned int i_25 = 0; i_25 < 16; i_25 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_26 = 1; i_26 < 14; i_26 += 3) 
                {
                    for (unsigned long long int i_27 = 2; i_27 < 15; i_27 += 1) 
                    {
                        for (long long int i_28 = 1; i_28 < 13; i_28 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_67 [i_26 + 1] [i_27] [i_27] [i_28 - 1] [i_28])) ? (arr_67 [i_26 + 2] [i_28] [3LL] [i_28 + 2] [i_28]) : (arr_67 [i_26 - 1] [i_27 + 1] [i_27] [i_28 + 1] [i_28 + 3])))));
                                arr_82 [i_24] [i_25] = (((_Bool)1) ? (-3401207663865643040LL) : (((/* implicit */long long int) 0U)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_29 = 0; i_29 < 16; i_29 += 1) 
                {
                    for (unsigned short i_30 = 3; i_30 < 13; i_30 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) min((max((((var_2) & (var_2))), (((/* implicit */int) arr_49 [i_24] [i_30 + 2] [(signed char)0] [i_30 + 3] [i_24])))), ((~(((/* implicit */int) (unsigned char)169))))));
                            var_26 |= ((/* implicit */unsigned short) (((-9223372036854775807LL - 1LL)) < (((((/* implicit */_Bool) arr_85 [i_25] [0LL] [i_29] [i_30])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_30 + 1] [i_30])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_31 = 0; i_31 < 0; i_31 += 1) 
                {
                    for (long long int i_32 = 1; i_32 < 13; i_32 += 1) 
                    {
                        {
                            arr_92 [i_24] [i_24] [i_25] [7U] [i_32] = ((/* implicit */long long int) arr_35 [i_24] [i_32] [i_32]);
                            var_27 = ((/* implicit */long long int) (~(((((((/* implicit */_Bool) arr_42 [(_Bool)1] [i_25] [i_32] [i_32] [i_25] [0LL] [i_32])) ? (((/* implicit */int) arr_38 [i_24] [i_24] [i_24])) : (((/* implicit */int) var_5)))) + (((/* implicit */int) var_0))))));
                            var_28 = ((/* implicit */signed char) min((((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) * (((arr_47 [i_24] [i_25] [i_24] [i_32]) << (((/* implicit */int) var_5)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_78 [i_25] [i_31 + 1] [i_32 + 3] [i_32 - 1])) ? (((/* implicit */int) arr_78 [i_24] [i_31 + 1] [i_32 + 2] [i_32 + 2])) : (((/* implicit */int) arr_21 [i_24] [i_32 + 1])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_33 = 0; i_33 < 16; i_33 += 2) 
                {
                    for (unsigned short i_34 = 0; i_34 < 16; i_34 += 3) 
                    {
                        {
                            var_29 += ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (6018050559628697431LL))))));
                            var_30 = min((max((((((/* implicit */_Bool) 0ULL)) ? (arr_83 [1U] [i_25] [i_33]) : (((/* implicit */long long int) arr_77 [i_34] [i_34] [i_33])))), (((/* implicit */long long int) arr_57 [i_24] [i_24] [i_25] [i_34])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_24] [i_24] [i_24])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_7)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
