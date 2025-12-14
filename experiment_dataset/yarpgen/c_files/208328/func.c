/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208328
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_16 = (-(((/* implicit */int) var_4)));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))));
        var_18 *= ((/* implicit */int) ((66686758U) <= (16777215U)));
        var_19 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 4278190081U)) ? (((/* implicit */unsigned long long int) 16777215U)) : (var_14)))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_12), (arr_0 [i_1] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)29768))))) : (arr_0 [i_1] [i_1])))) ? (((((((/* implicit */_Bool) -3228223030546672156LL)) || (((/* implicit */_Bool) arr_0 [i_1] [i_1])))) ? (max((var_10), (((/* implicit */long long int) arr_0 [i_1] [i_1])))) : (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 2; i_2 < 9; i_2 += 3) 
        {
            for (long long int i_3 = 2; i_3 < 9; i_3 += 4) 
            {
                {
                    arr_14 [i_2] [i_2] [4U] [i_1] = ((/* implicit */unsigned int) arr_11 [i_1] [i_2] [2U]);
                    arr_15 [i_1] [i_3] [i_3] = ((/* implicit */int) ((max((((var_3) + (((/* implicit */int) arr_12 [i_2])))), (((((/* implicit */_Bool) var_2)) ? (var_12) : (arr_5 [i_1] [i_3 - 2]))))) <= (((/* implicit */int) (!(((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_2] [i_3])))))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned int) (~(max((((/* implicit */unsigned long long int) (~(var_12)))), (var_1)))));
    }
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((var_2) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) arr_17 [i_4])))) : (((/* implicit */int) max((min((arr_17 [11U]), (arr_17 [i_4]))), (((((/* implicit */int) (signed char)8)) >= (((/* implicit */int) arr_17 [i_4])))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_5 = 2; i_5 < 12; i_5 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_6 = 4; i_6 < 11; i_6 += 2) 
            {
                var_22 |= ((/* implicit */long long int) (unsigned short)20828);
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) ((unsigned short) var_8))) : (var_12)));
                var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_16 [i_5 + 1] [i_6 + 2]))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_8 = 2; i_8 < 13; i_8 += 4) 
                {
                    var_25 = 16777228U;
                    var_26 = ((/* implicit */long long int) (~(4278190067U)));
                    arr_29 [i_7] [i_7] [i_7] [i_8 - 1] = ((/* implicit */unsigned char) arr_26 [i_8 - 2]);
                }
                /* LoopSeq 1 */
                for (signed char i_9 = 3; i_9 < 12; i_9 += 3) 
                {
                    arr_33 [i_4] [i_5] [i_7] [i_9] = ((/* implicit */signed char) arr_26 [i_4]);
                    var_27 ^= ((/* implicit */unsigned int) ((((((/* implicit */int) var_4)) <= (var_11))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -6908379942543003922LL)))))) : ((-(var_13)))));
                }
                /* LoopSeq 1 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_36 [10ULL] [i_7] [i_5] [i_4] = ((/* implicit */short) arr_32 [i_5 + 2] [i_5] [i_5 + 1] [i_5] [i_7]);
                    var_28 = ((/* implicit */long long int) ((((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                }
            }
            for (long long int i_11 = 3; i_11 < 13; i_11 += 4) 
            {
                arr_39 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_5 - 1] [i_5] [(_Bool)1] [i_5 + 2] [i_5] [(unsigned short)11])) ? (((/* implicit */long long int) var_0)) : (arr_35 [i_5] [i_5] [i_5] [i_5 + 1] [4] [(short)6])));
                /* LoopSeq 1 */
                for (short i_12 = 2; i_12 < 11; i_12 += 2) 
                {
                    var_29 = ((/* implicit */signed char) (~(arr_37 [i_5 - 2] [i_5 - 1] [i_5 + 2] [i_5 - 2])));
                    arr_42 [i_4] [7U] [7U] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_40 [i_4] [i_12 - 2] [i_4] [i_12 + 2]))));
                }
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 14; i_13 += 1) 
                {
                    for (signed char i_14 = 0; i_14 < 14; i_14 += 4) 
                    {
                        {
                            arr_49 [i_4] [i_4] [6ULL] [i_13] [i_13] [i_14] = (((((_Bool)1) ? (var_2) : (arr_40 [i_4] [i_4] [i_4] [i_4]))) != (arr_37 [i_5 + 2] [i_11 - 3] [i_11 + 1] [i_11]));
                            var_30 = ((/* implicit */unsigned int) arr_47 [i_5 + 1] [i_5 + 2] [i_11 - 2] [i_11 - 2] [i_11 - 1] [i_11] [i_14]);
                            arr_50 [i_4] [i_5] [i_5] [11] [i_13] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_40 [i_4] [i_4] [i_4] [i_4])) ? (((((/* implicit */unsigned long long int) 1932705496U)) ^ (arr_23 [(_Bool)0] [i_5 - 2] [i_5]))) : (((/* implicit */unsigned long long int) arr_31 [i_14] [i_13] [i_11 + 1] [i_5]))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */short) (_Bool)0);
                var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_37 [i_4] [i_4] [0U] [0U])))) ? (((/* implicit */unsigned long long int) (+(2362261798U)))) : (((((/* implicit */_Bool) arr_32 [i_4] [i_4] [i_5] [i_11] [i_11])) ? (((/* implicit */unsigned long long int) arr_48 [(_Bool)1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_11])) : (arr_37 [i_4] [(signed char)5] [i_11] [i_11])))));
            }
            /* LoopNest 2 */
            for (unsigned short i_15 = 0; i_15 < 14; i_15 += 1) 
            {
                for (short i_16 = 2; i_16 < 13; i_16 += 3) 
                {
                    {
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (!(((/* implicit */_Bool) 1932705496U)))))));
                        arr_55 [i_16] = ((/* implicit */int) ((unsigned int) var_4));
                        var_34 = ((/* implicit */int) var_4);
                    }
                } 
            } 
            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (arr_51 [i_5 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
        }
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_5)) >= (min((5612977196519305917ULL), (((/* implicit */unsigned long long int) (signed char)89))))));
        var_37 = ((/* implicit */unsigned int) var_2);
    }
}
