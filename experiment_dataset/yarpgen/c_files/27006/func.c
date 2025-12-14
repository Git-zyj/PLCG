/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27006
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (((unsigned char) var_11))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            var_16 = ((/* implicit */long long int) ((unsigned int) (short)15258));
            arr_8 [i_0] [i_1] = ((/* implicit */int) min((var_1), (var_3)));
        }
        var_17 = ((/* implicit */signed char) var_12);
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            var_18 = ((/* implicit */_Bool) (~(((max((arr_9 [i_0]), (arr_9 [i_0]))) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [12] [i_2])))))));
            var_19 = ((/* implicit */long long int) max((var_19), ((-9223372036854775807LL - 1LL))));
        }
        var_20 = ((/* implicit */unsigned char) (+((~(9223372036854775807LL)))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)46797)) ? (((/* implicit */int) arr_11 [i_3] [i_3])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) == (4294967272U))))));
        var_22 = ((/* implicit */unsigned int) min((max((max((((/* implicit */long long int) arr_4 [i_3] [i_3])), (var_10))), (var_12))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_3] [i_3] [i_3])) ^ (((/* implicit */int) var_8))))) | (max((((/* implicit */unsigned int) arr_10 [i_3])), (arr_3 [i_3]))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_23 = max((max((((/* implicit */long long int) arr_2 [i_4])), (arr_9 [i_4]))), (((/* implicit */long long int) min((arr_2 [i_4]), (((/* implicit */unsigned int) arr_7 [(unsigned char)8] [i_4] [1U]))))));
        /* LoopSeq 2 */
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            arr_19 [i_4] [i_4] [i_5] = ((/* implicit */_Bool) var_14);
            arr_20 [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) min(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5] [i_5] [i_5]))) : (arr_2 [i_4]))), ((-(24U)))));
            arr_21 [18] [i_5] [(unsigned char)9] = ((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_5]);
            var_24 -= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)20168))));
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                for (unsigned char i_8 = 1; i_8 < 18; i_8 += 2) 
                {
                    {
                        arr_29 [i_7] [i_6] = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_4])))) ? (((/* implicit */int) arr_7 [i_4] [i_4] [i_4])) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((arr_27 [5U] [5U] [5U] [i_8 + 1] [i_7]) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) (_Bool)0))))) : (var_13))) : (((unsigned int) arr_11 [i_6 - 1] [i_6 - 1])));
                        /* LoopSeq 4 */
                        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_6] [i_6])), ((~(var_12)))))) ? (max((((/* implicit */int) arr_7 [i_4] [i_6 - 1] [i_9])), ((~(((/* implicit */int) (short)-4969)))))) : (((/* implicit */int) ((_Bool) (~(var_4)))))));
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_11 [i_4] [i_9])) ? (((/* implicit */int) arr_11 [i_6] [i_8 + 1])) : (((/* implicit */int) arr_11 [i_8 - 1] [i_4]))))))));
                            var_27 = ((unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)23))))), (arr_30 [i_4] [i_4] [i_4] [i_9] [i_6 - 1] [i_8 + 1] [i_8 + 1])));
                            var_28 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) != (max((((var_1) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_7] [i_9]))))), (((/* implicit */unsigned int) var_7))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 2; i_10 < 17; i_10 += 4) 
                        {
                            arr_34 [i_4] [6U] [i_4] [6U] [i_4] = ((/* implicit */_Bool) (~((-(271977919)))));
                            var_29 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_4] [(unsigned short)7] [i_4] [8U] [i_4])) >> (((var_9) + (9151085101738937933LL)))))) || (((/* implicit */_Bool) var_12))));
                            var_30 = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_32 [i_10 - 2] [(_Bool)1] [9U] [i_10] [i_10 - 1])) : (((/* implicit */int) var_0)));
                            var_31 = ((unsigned char) var_2);
                        }
                        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 1) 
                        {
                            arr_38 [i_11] [i_6] [i_11] [i_8] [i_11] [i_11] = max(((~(2933039022U))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(var_3)))) | ((~(((/* implicit */int) (unsigned short)23))))))));
                            arr_39 [i_4] [i_6 - 1] [i_7] [i_7] [i_8] [i_11] [i_7] = ((/* implicit */long long int) max(((~(((/* implicit */int) var_8)))), (((((/* implicit */_Bool) 109956156279278597LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)65517))))));
                        }
                        /* vectorizable */
                        for (int i_12 = 2; i_12 < 18; i_12 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned char) arr_23 [i_4]);
                            arr_43 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((arr_18 [i_4] [i_6 - 1] [i_4]) - (arr_18 [i_8] [i_6] [i_4])));
                            var_33 -= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_6 - 1] [i_6] [i_6]))));
                        }
                        arr_44 [i_4] [i_6 - 1] [i_7] [i_7] [i_7] [i_8 - 1] = ((/* implicit */signed char) ((((/* implicit */long long int) (~(var_7)))) & (var_9)));
                    }
                } 
            } 
            var_34 = ((/* implicit */unsigned char) max((arr_7 [i_6 - 1] [i_6 - 1] [i_6 - 1]), (((/* implicit */unsigned short) ((unsigned char) var_9)))));
        }
    }
    for (unsigned char i_13 = 2; i_13 < 17; i_13 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_14 = 0; i_14 < 19; i_14 += 3) 
        {
            var_35 &= -9223372036854775797LL;
            /* LoopSeq 1 */
            for (int i_15 = 1; i_15 < 16; i_15 += 1) 
            {
                var_36 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_17 [i_15] [(unsigned char)1] [i_15 + 3]), (((/* implicit */long long int) var_2)))))));
                var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (var_9)))) ? ((+(((/* implicit */int) min((arr_4 [i_13] [i_14]), (((/* implicit */unsigned short) var_14))))))) : (((/* implicit */int) var_0))));
            }
            var_38 = ((/* implicit */int) min((((((/* implicit */_Bool) (short)32767)) ? (arr_26 [i_13] [i_13]) : (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 9223372036854775807LL)))) || (((/* implicit */_Bool) ((unsigned short) (unsigned short)31602))))))));
            var_39 = ((/* implicit */unsigned int) ((_Bool) (-9223372036854775807LL - 1LL)));
        }
        for (unsigned short i_16 = 0; i_16 < 19; i_16 += 2) 
        {
            var_40 = ((/* implicit */long long int) (unsigned short)65535);
            var_41 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_13 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (var_12))));
            arr_56 [(signed char)9] [i_13 - 2] = ((/* implicit */unsigned int) arr_49 [i_13] [i_16]);
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 19; i_17 += 2) 
        {
            var_42 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)45373))));
            arr_60 [13] [i_13] [i_13] = ((unsigned int) arr_46 [i_17]);
            var_43 = ((/* implicit */int) max((var_43), (((((/* implicit */int) arr_24 [i_13 + 2] [i_17])) * (((/* implicit */int) (unsigned char)246))))));
        }
        arr_61 [i_13] [i_13 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_32 [i_13] [i_13 - 1] [i_13] [i_13 + 1] [16])), (arr_17 [i_13] [i_13 - 1] [i_13])))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_11 [i_13 - 1] [i_13 + 1])), (arr_41 [i_13] [i_13] [(signed char)1] [(unsigned char)16] [i_13]))))));
        arr_62 [i_13 + 1] = max(((!(((/* implicit */_Bool) arr_1 [i_13 + 1] [i_13 + 1])))), (max(((!(((/* implicit */_Bool) var_10)))), (((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_14)))))));
        var_44 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
    }
}
