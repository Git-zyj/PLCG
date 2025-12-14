/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32479
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) (unsigned short)65356)) ? ((+(((/* implicit */int) (signed char)127)))) : (((/* implicit */int) var_6))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    var_19 = ((/* implicit */long long int) var_17);
                    var_20 = ((/* implicit */unsigned int) 9223372036854775807LL);
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        {
                            arr_12 [i_3] [i_3] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (-518530206633123087LL)))) ? (((arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? (-1900946453838421382LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [(_Bool)0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1 - 1] [i_1] [i_1])))));
                            arr_13 [i_0] = ((/* implicit */_Bool) 1881457705);
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_0]))));
                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_0)) * (((/* implicit */int) (unsigned short)31944))));
                var_22 = ((/* implicit */short) ((((((/* implicit */int) (short)29)) > (arr_11 [i_1 - 1] [(signed char)6] [i_0] [i_1 + 1]))) ? (((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (((((/* implicit */_Bool) arr_9 [i_1 + 1] [(signed char)13] [i_1 + 1])) ? (((/* implicit */int) (short)-26)) : (arr_11 [i_1 + 1] [(unsigned short)13] [i_0] [i_1 - 1])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) min((((/* implicit */int) (_Bool)1)), (-604501001)));
            var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_18 [i_5] [i_5] [i_6])) >= (arr_19 [i_5] [i_5] [(_Bool)1]))))));
            arr_20 [i_6] [(short)20] = ((/* implicit */unsigned short) ((long long int) min((((((/* implicit */_Bool) arr_18 [i_6] [i_6] [i_5])) ? (((/* implicit */int) (unsigned short)51315)) : (((/* implicit */int) (unsigned short)35295)))), (((/* implicit */int) var_6)))));
            var_25 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -3331244277740133792LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-9223372036854775802LL)))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (min((arr_17 [(unsigned short)2] [i_5] [17]), (((/* implicit */unsigned long long int) (short)7)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned char) (!(var_6))))))))));
            var_26 = ((/* implicit */unsigned short) (+((~(((arr_17 [i_5] [i_5] [i_6]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)149)))))))));
        }
        /* LoopSeq 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_23 [i_7] [i_7] [(unsigned short)1] = ((/* implicit */unsigned long long int) (unsigned short)52134);
            arr_24 [i_7] = ((/* implicit */_Bool) max(((-(((/* implicit */int) var_7)))), (((arr_15 [i_5] [i_7]) ? (((/* implicit */int) arr_15 [i_5] [i_7])) : (((/* implicit */int) var_5))))));
            var_27 = ((/* implicit */unsigned short) ((((544465953) - (1881457710))) >= (((/* implicit */int) (((-(((/* implicit */int) (unsigned short)47741)))) > (((/* implicit */int) (unsigned char)255)))))));
            var_28 = ((/* implicit */unsigned short) (-(((((/* implicit */int) var_3)) * (((((/* implicit */int) (unsigned short)47741)) - (((/* implicit */int) (unsigned short)13574))))))));
        }
        for (int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            arr_27 [i_5] [i_8] [i_5] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) (unsigned char)120)), (arr_17 [i_8] [i_8] [i_5]))), (((/* implicit */unsigned long long int) (+(((arr_25 [i_5] [i_8]) | (((/* implicit */long long int) ((/* implicit */int) var_17))))))))));
            /* LoopSeq 1 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) var_15)), (var_4))))));
                /* LoopSeq 4 */
                for (long long int i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    var_30 = ((/* implicit */long long int) -582631735);
                    var_31 = ((/* implicit */_Bool) var_4);
                    arr_32 [(unsigned short)0] [i_8] = ((/* implicit */unsigned char) (_Bool)1);
                    var_32 += ((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_5] [i_8] [i_9] [(unsigned short)24])) + (582631735)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_9] [11LL] [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [24] [i_8] [i_9]))) : (((arr_29 [i_5]) >> (((var_11) + (7317009575907475240LL)))))))));
                }
                for (long long int i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 299731166360449978ULL)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (((/* implicit */int) (short)11)) : (((/* implicit */int) (_Bool)1))));
                    arr_35 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) var_3);
                }
                for (signed char i_12 = 0; i_12 < 25; i_12 += 2) 
                {
                    var_34 = ((/* implicit */long long int) (~(((((/* implicit */int) var_15)) / (var_4)))));
                    arr_38 [i_5] [i_8] [i_9] [i_8] = ((/* implicit */long long int) (signed char)(-127 - 1));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_35 = arr_37 [i_5] [i_5] [i_13];
                    arr_41 [i_13] [(_Bool)1] [i_5] [(_Bool)1] [i_5] |= ((/* implicit */signed char) ((min((((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */int) var_17)))), (((/* implicit */int) var_0)))) == (((min((var_4), (((/* implicit */int) var_7)))) + (arr_39 [(unsigned char)0] [i_9] [i_8] [(unsigned char)0])))));
                    var_36 = ((/* implicit */unsigned short) arr_16 [i_8]);
                }
            }
            var_37 = ((/* implicit */unsigned int) (_Bool)0);
            arr_42 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_26 [i_5] [i_8]))))) ? ((-(((/* implicit */int) arr_18 [i_5] [i_8] [i_8])))) : (((((/* implicit */int) (unsigned char)135)) | (((/* implicit */int) (signed char)-74))))));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 25; i_14 += 4) 
        {
            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_5])) ? (arr_21 [i_14] [i_14] [i_5]) : (arr_21 [i_14] [(unsigned short)7] [i_5])));
            var_39 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1393635398U)) ? (((/* implicit */int) (unsigned short)44330)) : (((/* implicit */int) var_12)))) << ((((+(((/* implicit */int) var_15)))) - (45679)))));
            var_40 = ((/* implicit */int) ((arr_16 [i_5]) <= (arr_16 [i_5])));
            arr_45 [i_5] [i_14] = ((/* implicit */signed char) arr_17 [i_5] [i_5] [i_5]);
        }
    }
}
