/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220671
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) ((unsigned int) arr_1 [i_0]));
                            arr_9 [i_0] [i_1] [i_1] [(short)0] [i_3 - 1] [i_0] = ((/* implicit */unsigned char) var_18);
                            var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_1]) ? (arr_4 [i_1] [i_2]) : (arr_4 [i_0] [i_1])))) ? (((/* implicit */int) ((unsigned char) arr_2 [i_1] [i_1]))) : (((/* implicit */int) max((var_11), (((/* implicit */unsigned short) arr_8 [i_1])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 13; i_4 += 3) 
                {
                    for (unsigned short i_5 = 1; i_5 < 12; i_5 += 3) 
                    {
                        {
                            arr_17 [i_1] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0]))));
                            arr_18 [(short)2] [i_1] [i_1] [i_0] = 4187252130U;
                            var_22 -= ((/* implicit */int) ((((/* implicit */_Bool) ((var_16) ? ((-(var_17))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5 - 1] [i_4] [0LL] [i_1] [i_0] [i_0])))))) ? (min((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_4])) ? (var_4) : (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) arr_11 [i_5 + 2] [i_1] [(unsigned char)11])))) : (((/* implicit */unsigned long long int) min((-287652061), (((/* implicit */int) var_16)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 11; i_8 += 3) 
                        {
                            {
                                arr_28 [i_0] [i_1] [i_1] [i_6] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+((-(max((arr_0 [i_0]), (((/* implicit */long long int) arr_23 [i_6] [(unsigned short)8] [(short)13] [i_8] [i_8 + 3]))))))));
                                arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) 140733193388032LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_8] [i_8] [i_8 - 1] [i_8 + 1] [i_8]))) : (var_18))), (((/* implicit */unsigned long long int) ((unsigned short) var_16)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -140733193388042LL)) ? (((/* implicit */unsigned long long int) var_7)) : (max((((((/* implicit */_Bool) var_17)) ? (arr_4 [2ULL] [8]) : (var_18))), (arr_4 [i_0] [(_Bool)1])))));
                            arr_35 [i_0] [i_9] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -287652061)) ? (((/* implicit */unsigned long long int) var_15)) : (min((arr_7 [i_10] [i_9] [i_1] [i_0]), (((/* implicit */unsigned long long int) var_10))))));
                            var_24 = ((/* implicit */unsigned short) min(((+(arr_26 [i_10] [i_9] [i_9] [i_0] [i_1] [i_0] [i_0]))), (((/* implicit */unsigned int) 287652061))));
                            arr_36 [i_0] [i_0] = ((/* implicit */long long int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_25 *= ((((/* implicit */_Bool) min((4831315823906634239ULL), (((/* implicit */unsigned long long int) arr_6 [i_0] [(signed char)0] [i_10]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_9] [(short)6])) ? (arr_20 [i_0] [i_1] [i_9]) : (arr_19 [i_1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_11 = 3; i_11 < 23; i_11 += 1) 
    {
        for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_13 = 0; i_13 < 25; i_13 += 3) 
                {
                    for (int i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        for (short i_15 = 2; i_15 < 23; i_15 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */short) var_15);
                                arr_48 [i_15] [i_15] [(short)13] [i_11] [i_13] [i_11] [i_11] = ((/* implicit */long long int) min((max((((/* implicit */int) var_16)), ((~(((/* implicit */int) (unsigned short)0)))))), (287652058)));
                                var_27 &= ((/* implicit */unsigned int) var_14);
                                arr_49 [(_Bool)1] [i_11] [i_13] [i_14] [i_15] = ((/* implicit */unsigned int) var_9);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_16 = 0; i_16 < 25; i_16 += 3) 
                {
                    for (int i_17 = 0; i_17 < 25; i_17 += 3) 
                    {
                        for (signed char i_18 = 0; i_18 < 25; i_18 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */long long int) min(((+(((/* implicit */int) arr_50 [i_11 - 1] [i_11])))), (((/* implicit */int) arr_50 [i_11 - 3] [i_11]))));
                                var_29 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_50 [i_11] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [14U] [i_11]))) : (arr_53 [i_11] [i_12] [i_12] [i_17] [i_11 + 2]))), ((-(var_7)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_19 = 0; i_19 < 25; i_19 += 3) 
                {
                    for (unsigned int i_20 = 0; i_20 < 25; i_20 += 3) 
                    {
                        {
                            var_30 &= ((/* implicit */int) arr_41 [13ULL] [i_19] [i_20]);
                            var_31 *= ((/* implicit */signed char) 30LL);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_21 = 1; i_21 < 24; i_21 += 4) 
                {
                    for (unsigned int i_22 = 0; i_22 < 25; i_22 += 3) 
                    {
                        for (unsigned long long int i_23 = 2; i_23 < 23; i_23 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_11))));
                                var_33 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65523)) ? (((/* implicit */int) arr_66 [i_12] [(unsigned char)22] [i_22] [12U])) : (((/* implicit */int) var_19))))), (((((/* implicit */_Bool) var_19)) ? (30LL) : (((/* implicit */long long int) arr_46 [i_11])))))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_24 = 4; i_24 < 24; i_24 += 3) 
                {
                    for (unsigned int i_25 = 0; i_25 < 25; i_25 += 1) 
                    {
                        for (unsigned int i_26 = 2; i_26 < 24; i_26 += 4) 
                        {
                            {
                                var_34 = ((/* implicit */long long int) ((unsigned int) max((arr_76 [i_11 + 1] [i_11] [i_25] [i_26 - 1] [i_26] [i_26]), (var_4))));
                                arr_80 [i_11] [i_11] [i_11] [i_11 + 1] [i_11] = ((/* implicit */unsigned short) arr_59 [(_Bool)1] [i_12] [i_24] [i_11]);
                                arr_81 [i_11] [i_11] [i_24] [i_11] [i_11] [i_26] = -140733193388033LL;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_27 = 0; i_27 < 12; i_27 += 3) 
    {
        for (int i_28 = 1; i_28 < 10; i_28 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_29 = 4; i_29 < 11; i_29 += 1) 
                {
                    for (unsigned short i_30 = 3; i_30 < 11; i_30 += 3) 
                    {
                        {
                            arr_94 [i_28] [i_28 + 2] [i_28 - 1] [i_28] [i_28] [i_30] = ((/* implicit */unsigned char) (~(max((((/* implicit */long long int) 287652078)), (arr_87 [i_29 - 2] [i_29 + 1] [i_29 - 1])))));
                            arr_95 [i_27] [i_28] [i_28] [i_28] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_15 [i_29 + 1] [i_29 - 3] [i_29 - 2] [i_29 - 1] [i_29 - 1] [i_29])) : (((/* implicit */int) arr_15 [i_29 - 4] [i_29 + 1] [i_29] [i_29 - 2] [i_29 - 1] [i_29]))))) ? (((/* implicit */int) arr_31 [i_28] [i_28 + 2] [i_28 - 1])) : (((/* implicit */int) var_14))));
                            var_35 -= ((/* implicit */unsigned long long int) var_11);
                            var_36 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned short) var_19))))) ? ((+(arr_69 [i_29] [i_30 - 3] [i_27] [22] [i_27] [i_29 - 3]))) : (min((arr_43 [i_28] [i_28] [i_27] [i_28 + 1] [i_28] [i_27]), (arr_75 [i_28]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1362158248U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_0)))) ? (((/* implicit */int) min((arr_33 [i_28] [i_28]), (arr_56 [i_27] [(unsigned short)21] [i_27] [i_29 - 4] [i_28] [i_30])))) : (((/* implicit */int) var_14)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_31 = 0; i_31 < 12; i_31 += 3) 
                {
                    for (int i_32 = 2; i_32 < 11; i_32 += 3) 
                    {
                        for (unsigned int i_33 = 0; i_33 < 12; i_33 += 3) 
                        {
                            {
                                var_37 -= ((/* implicit */unsigned long long int) arr_39 [10U] [i_28 + 1]);
                                var_38 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_8 [i_28])) : (((/* implicit */int) var_5))))))), (min((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (3202198504423784683LL)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_34 = 0; i_34 < 12; i_34 += 4) 
                {
                    for (unsigned short i_35 = 0; i_35 < 12; i_35 += 3) 
                    {
                        {
                            arr_109 [i_27] [i_28] [i_35] = ((/* implicit */unsigned short) arr_87 [i_27] [i_27] [i_27]);
                            var_39 = ((/* implicit */unsigned short) min((((/* implicit */int) (signed char)5)), ((~(var_15)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
