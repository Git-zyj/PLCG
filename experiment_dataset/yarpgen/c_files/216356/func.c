/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216356
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
    for (int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((short) (unsigned char)255)))))), (((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_0 [i_0])), (var_4)))) : (((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
                var_17 = ((/* implicit */signed char) max((var_17), (((signed char) min(((unsigned short)20901), (((/* implicit */unsigned short) (short)26295)))))));
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((min((max((((/* implicit */int) (short)-26291)), (var_11))), (((/* implicit */int) (short)26306)))) - (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) ((signed char) arr_2 [i_0] [i_1])))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 3; i_2 < 22; i_2 += 4) 
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned short)44635);
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_3 [i_2 + 3]) << (((((/* implicit */int) (signed char)127)) - (101)))));
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((arr_9 [i_0] [16U] [i_1] [i_3]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_2] [i_3 - 1]))))))));
                        /* LoopSeq 4 */
                        for (int i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
                        {
                            var_20 ^= ((/* implicit */signed char) (+(arr_9 [i_0 + 2] [i_0] [i_1] [10])));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 3225324310U);
                            arr_18 [i_0] [i_0] [6LL] [(unsigned char)18] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16128))) > (var_0)))) >> (((((/* implicit */int) (unsigned short)20900)) - (20891)))));
                        }
                        for (int i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
                        {
                            var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)20893)) : (((/* implicit */int) var_1))));
                            arr_21 [i_0] [i_1] [i_2] [i_2] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_11)))));
                            var_22 = ((/* implicit */unsigned char) 3712850586U);
                        }
                        for (int i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_0] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)178))) / (arr_3 [i_0 - 1])));
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (signed char)-4))));
                            arr_25 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) var_4);
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_3] [i_3] [i_2 + 3] [i_2] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)20901))));
                        }
                        for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_22 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_1] [i_2] [i_3 - 1] [i_0]))));
                            var_26 = ((/* implicit */signed char) ((long long int) arr_4 [i_0]));
                            arr_29 [i_7] [i_3 - 1] [i_3] [i_0] [(unsigned short)21] [(unsigned short)21] [i_0] = 143637911;
                        }
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) (unsigned short)24899)) : (((/* implicit */int) arr_19 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0])))))));
                        var_28 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_27 [i_0 + 2] [i_2 + 2] [i_3 - 1] [i_1] [i_3 - 1] [(unsigned char)22] [i_3])) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1] [2LL]))));
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        arr_34 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) var_5));
                        arr_35 [i_8 - 1] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) var_14);
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned int) (_Bool)1);
                            var_30 -= ((/* implicit */unsigned short) 4204350843257638403ULL);
                        }
                    }
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        arr_42 [i_0] [i_0] [(unsigned char)11] [i_10] = ((/* implicit */signed char) (+(((/* implicit */int) (short)20865))));
                        var_31 += ((/* implicit */int) ((unsigned long long int) arr_9 [i_10] [i_1] [i_1] [i_0]));
                    }
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 25; i_11 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned short) (((_Bool)1) ? (13903141592290287916ULL) : (arr_4 [i_0])));
                        var_33 = arr_33 [i_0] [i_0] [i_0];
                    }
                }
                var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) var_1))));
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((-(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) - ((((-(4246260345U))) + (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
    /* LoopNest 2 */
    for (short i_12 = 0; i_12 < 24; i_12 += 3) 
    {
        for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) 
        {
            {
                var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) (signed char)-127))));
                var_37 = ((/* implicit */unsigned long long int) arr_41 [i_12] [i_13] [i_12]);
                var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_49 [10LL] [i_13] [i_13])) && (((/* implicit */_Bool) arr_20 [i_12] [i_12] [21LL] [i_13] [i_13] [i_13]))))))), (((((/* implicit */_Bool) min((arr_40 [23U] [i_13] [23U] [i_13]), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_15)), (var_1))))) : (((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */unsigned int) var_12)) : (var_8))))))))));
            }
        } 
    } 
}
