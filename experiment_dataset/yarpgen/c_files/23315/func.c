/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23315
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
    var_16 = ((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (65536)))) ? (((/* implicit */int) max((var_13), (((/* implicit */unsigned char) var_0))))) : (((/* implicit */int) ((var_10) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))))));
    var_17 = ((/* implicit */short) ((max((((/* implicit */int) var_2)), (((((/* implicit */int) var_8)) << (((/* implicit */int) var_0)))))) | (((/* implicit */int) var_0))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((int) (+(var_12)));
        arr_4 [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 11567550445739662291ULL)))) || (((/* implicit */_Bool) ((signed char) 15956087405189386912ULL)))));
        arr_5 [i_0] = ((/* implicit */unsigned short) var_10);
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((signed char) ((unsigned int) var_3))))));
            var_19 = ((/* implicit */_Bool) (~(var_4)));
        }
        /* vectorizable */
        for (signed char i_3 = 3; i_3 < 13; i_3 += 4) 
        {
            var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_9 [i_3 - 2]))));
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((unsigned long long int) var_3))));
            var_22 = ((/* implicit */int) ((((/* implicit */int) arr_1 [i_3 + 1] [i_3 + 1])) > (((/* implicit */int) var_9))));
            var_23 = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_1] [i_1])) & (var_4)));
            arr_12 [i_3] = (~(((/* implicit */int) arr_6 [i_1] [i_3 - 2])));
        }
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    var_24 = ((/* implicit */int) ((((/* implicit */int) ((short) (signed char)-75))) != (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_4] [i_6]))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 3) 
                    {
                        var_25 |= ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) var_2)))))) >= (((/* implicit */int) arr_10 [i_7 - 1] [i_7] [i_7]))));
                        arr_23 [i_1] [i_7] [10ULL] [(_Bool)1] = (((+(((/* implicit */int) arr_20 [i_7] [(unsigned char)0] [i_7 - 1] [i_7] [i_7 + 2])))) * (((/* implicit */int) max((arr_20 [i_7] [i_7] [i_7 - 1] [(_Bool)1] [i_7 + 1]), (((/* implicit */signed char) arr_19 [i_7] [i_7] [i_7 + 2] [i_7 + 2] [i_7] [(unsigned char)2]))))));
                        var_26 = ((/* implicit */signed char) (-(max((((/* implicit */int) arr_10 [i_6] [i_7 + 1] [i_6])), (var_4)))));
                    }
                    for (unsigned short i_8 = 3; i_8 < 15; i_8 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) + (((/* implicit */int) ((unsigned char) var_14)))));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)0))))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        arr_31 [i_1] [i_1] [i_1] [i_9] = ((/* implicit */unsigned long long int) (_Bool)0);
                        arr_32 [i_9] = ((/* implicit */short) (~(((((/* implicit */_Bool) 3588511521U)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) var_15))))));
                        arr_33 [i_1] [i_9] [i_1] [(unsigned short)9] [i_1] [i_1] [i_1] = ((/* implicit */long long int) var_2);
                        arr_34 [i_1] [i_4] [i_9] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_14))))));
                        arr_35 [i_1] [i_9] [i_5] [i_1] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */int) (unsigned char)217)) < (((/* implicit */int) var_0)))) || (((/* implicit */_Bool) var_1))))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1])))))));
                    }
                    arr_36 [i_1] [i_1] [i_1] [7ULL] = ((((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (!((_Bool)0)))))) + ((-(((/* implicit */int) arr_28 [i_6] [i_5] [i_4] [i_1] [i_1])))));
                }
                for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    var_29 = ((long long int) ((((/* implicit */int) (short)31291)) / (var_12)));
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        arr_42 [i_11] [(signed char)5] [i_5] [i_5] [i_4] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))), ((~(((/* implicit */int) arr_6 [i_10] [i_11]))))));
                        var_30 = ((/* implicit */long long int) (((~((~(((/* implicit */int) var_1)))))) | ((~(((/* implicit */int) var_1))))));
                    }
                }
                var_31 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) max(((signed char)102), (((/* implicit */signed char) arr_19 [i_1] [i_4] [i_4] [i_4] [i_5] [i_5])))))))) ? (var_12) : (((/* implicit */int) ((var_12) > (((/* implicit */int) var_15)))))));
            }
            for (int i_12 = 0; i_12 < 16; i_12 += 3) 
            {
                var_32 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(short)15] [i_1] [i_1])) ? (arr_37 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))) ? (((int) arr_6 [i_1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_1])))))));
                var_33 |= ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1] [i_4] [i_12])))))) * (((((/* implicit */_Bool) var_7)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_7)))))), (((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (0U))))))));
                arr_46 [i_1] [i_1] [i_1] = (-(((/* implicit */int) var_3)));
            }
            for (short i_13 = 0; i_13 < 16; i_13 += 4) 
            {
                var_34 |= ((/* implicit */int) arr_16 [i_1] [i_1]);
                var_35 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) arr_27 [i_1] [i_1] [i_1] [i_13] [i_1])), (4095LL)))))));
            }
            var_36 = ((/* implicit */int) max((((arr_16 [i_1] [i_4]) & (((/* implicit */unsigned long long int) 3588511510U)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_4)) & (9223372036854775802LL))))));
            arr_50 [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((var_12) - (arr_39 [i_1] [i_4]))) * (((/* implicit */int) ((unsigned short) (_Bool)1)))));
        }
        var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) var_12))));
    }
}
