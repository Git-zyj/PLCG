/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226193
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
    var_17 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_4 [i_0] = max((((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) arr_0 [i_0]))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))));
        var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))))) ? ((~(var_15))) : (((/* implicit */int) arr_2 [i_0]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0]))) ? (arr_0 [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
            var_20 = ((/* implicit */_Bool) ((arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 2]) ^ (arr_5 [i_1 - 2] [i_1 - 3] [i_1 - 1])));
            var_21 = ((/* implicit */_Bool) ((unsigned short) arr_3 [i_1 - 3] [i_1 - 3]));
            var_22 = ((/* implicit */long long int) max((var_22), (((long long int) arr_6 [i_1 + 1] [i_1 + 1] [i_1 - 3]))));
        }
        for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            var_23 |= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (5832744033669423609LL))) : (((/* implicit */long long int) ((/* implicit */int) var_12))))));
            arr_10 [i_2] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_2]);
            /* LoopSeq 3 */
            for (unsigned short i_3 = 1; i_3 < 8; i_3 += 1) 
            {
                arr_13 [i_3] [i_3] = ((/* implicit */int) var_12);
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)63533)), (14))))));
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) arr_9 [i_3]))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) arr_5 [i_3] [i_2] [i_0])) : (((((/* implicit */_Bool) arr_5 [i_2] [i_3 + 4] [i_3 + 4])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_13)) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
            }
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_0), (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (max((min((arr_12 [i_0] [i_2]), (((/* implicit */unsigned long long int) arr_15 [i_4 - 1] [i_2] [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_4 - 1] [i_4]))) : (var_10))))))));
                var_27 = ((/* implicit */unsigned int) var_10);
                /* LoopSeq 1 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    var_28 = ((/* implicit */int) var_4);
                    var_29 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2020)) ? (arr_6 [i_0] [i_0] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [(unsigned short)11] [i_0] [i_4])))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) : (((var_9) - (((/* implicit */unsigned long long int) (~(2757133580U))))))));
                }
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_7 = 1; i_7 < 9; i_7 += 4) 
                {
                    arr_27 [i_0] [i_7] [i_0] [i_6] [i_7 + 1] = ((/* implicit */_Bool) 1312853281);
                    /* LoopSeq 3 */
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        var_30 |= ((/* implicit */unsigned int) arr_19 [i_8] [i_6] [i_0] [i_0]);
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_21 [i_0] [i_0] [i_0])) << (((/* implicit */int) arr_25 [i_0] [i_7] [i_7 + 2] [2ULL]))));
                        arr_31 [i_0] [i_7] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) 9223372036854775807LL)));
                    }
                    for (long long int i_9 = 2; i_9 < 11; i_9 += 4) 
                    {
                        arr_35 [i_7] [i_6] [i_9 + 1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((unsigned int) max((arr_20 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_32 [i_7] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))))) - (arr_29 [i_0] [i_2] [i_6] [(unsigned short)6])));
                        arr_36 [10U] [10U] [10U] [i_7 - 1] [i_7] = ((/* implicit */unsigned int) arr_33 [i_9] [i_7] [(_Bool)1] [i_7] [i_0]);
                        var_32 += ((/* implicit */long long int) var_16);
                        var_33 = ((/* implicit */int) var_7);
                    }
                    for (unsigned short i_10 = 4; i_10 < 10; i_10 += 1) 
                    {
                        arr_40 [i_7] [i_7 + 1] [i_6] [i_2] [i_2] [i_7] = ((/* implicit */_Bool) var_5);
                        var_34 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (((arr_19 [i_7 + 1] [i_10 - 2] [i_10 + 1] [i_10 + 1]) << (((/* implicit */int) var_12))))));
                        arr_41 [i_7] [6LL] [i_6] [i_6] [6LL] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0]))));
                    }
                }
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    var_35 ^= ((/* implicit */int) min((((/* implicit */unsigned int) ((arr_9 [i_11 + 1]) / (((/* implicit */int) (unsigned short)63700))))), (max((2757133580U), (((/* implicit */unsigned int) arr_9 [i_11]))))));
                    var_36 *= min((((var_16) ? (arr_34 [i_11 + 1] [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 1]) : (((/* implicit */unsigned long long int) var_15)))), (arr_34 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11] [i_11 + 1]));
                    var_37 = ((/* implicit */_Bool) ((var_12) ? ((+(min((arr_28 [i_11 + 1] [i_11] [i_6] [i_2] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_26 [i_11] [i_11 + 1])))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11)))))));
                }
                for (int i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    arr_48 [i_0] [i_2] [i_6] [i_12] [i_12] &= ((/* implicit */unsigned int) (unsigned short)63510);
                    var_38 = ((/* implicit */unsigned long long int) arr_29 [i_0] [i_2] [i_6] [i_0]);
                    var_39 *= ((/* implicit */int) var_1);
                }
                arr_49 [i_0] [i_2] [6U] [i_0] = ((/* implicit */unsigned int) arr_38 [i_0] [9LL] [i_6] [9LL] [i_6] [i_6]);
                var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -3732275594481744567LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))))) & (arr_26 [i_2] [i_2])))))));
            }
        }
        var_41 = ((/* implicit */_Bool) ((unsigned int) max((min((((/* implicit */unsigned short) arr_21 [i_0] [(unsigned short)0] [i_0])), (arr_2 [i_0]))), (((/* implicit */unsigned short) var_16)))));
    }
    var_42 = ((/* implicit */unsigned long long int) max((max((-1312853282), (((/* implicit */int) (_Bool)0)))), (-1378653061)));
    var_43 = ((/* implicit */unsigned short) (+(var_2)));
}
