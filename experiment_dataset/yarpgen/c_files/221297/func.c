/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221297
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
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) - (((/* implicit */int) arr_7 [i_1] [i_1 + 4] [i_1 + 4] [i_1 + 1]))))), ((~(max((((/* implicit */unsigned int) -2010579218)), (0U)))))));
                    arr_9 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(0))), (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1]))))))) ? (min((arr_8 [i_2] [i_1] [i_1] [i_0]), ((+(arr_5 [i_0] [i_1] [i_2]))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 29)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_4 [i_1] [i_1])))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_3 = 2; i_3 < 17; i_3 += 2) 
        {
            for (long long int i_4 = 2; i_4 < 17; i_4 += 4) 
            {
                for (unsigned char i_5 = 2; i_5 < 16; i_5 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_6] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) min((((int) (-(2147483647LL)))), (((((/* implicit */_Bool) arr_12 [i_5 + 1] [i_4 + 1] [i_3 + 2])) ? (((/* implicit */int) max(((unsigned short)26309), (((/* implicit */unsigned short) (unsigned char)88))))) : (((/* implicit */int) arr_3 [i_3 - 2]))))));
                            var_18 = ((/* implicit */unsigned short) (+(((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(_Bool)1]))))) / (((/* implicit */int) min((arr_1 [i_6]), (((/* implicit */unsigned short) arr_17 [i_0] [i_5] [i_0] [i_0])))))))));
                            arr_21 [i_0] [i_3 + 1] [i_0] [i_5 + 1] [i_5 + 1] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_6 [i_0] [i_6] [i_5 + 2] [i_5 - 2])))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_3 + 2] [i_3 + 2] [i_5 + 1] = ((/* implicit */long long int) min((max((arr_6 [i_0] [i_3] [i_0] [i_5 + 2]), (((/* implicit */unsigned long long int) var_9)))), (((((/* implicit */_Bool) arr_6 [i_7] [i_0] [i_0] [i_0])) ? (arr_6 [i_3 - 2] [i_4] [i_5 + 3] [12]) : (arr_6 [i_7] [i_3] [i_7] [i_3])))));
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (-(min(((~(11483192080719472509ULL))), (((/* implicit */unsigned long long int) arr_7 [i_3] [(unsigned char)0] [(_Bool)0] [i_3])))))))));
                            var_20 -= ((/* implicit */_Bool) max((((/* implicit */int) arr_0 [(unsigned short)9] [i_4 + 1])), ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3])))))))));
                        }
                        arr_26 [i_3] [i_3] [i_3] [i_3 + 1] [i_3 - 1] [i_3] &= min((569851345599371979LL), (((/* implicit */long long int) (-(var_6)))));
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) max((((((/* implicit */int) arr_14 [i_3 + 2] [(unsigned short)12] [i_3 - 2] [i_3 - 2])) & (((((/* implicit */int) arr_1 [i_0])) << (((/* implicit */int) arr_13 [i_0] [i_3] [i_4 + 2] [i_5 + 2])))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_23 [i_5] [i_5] [i_5 + 3] [i_5 + 3] [i_5 + 3] [i_5 - 1] [i_5 + 2])))))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_8 = 2; i_8 < 17; i_8 += 2) 
        {
            var_22 |= ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
            /* LoopNest 3 */
            for (long long int i_9 = 2; i_9 < 16; i_9 += 2) 
            {
                for (unsigned short i_10 = 2; i_10 < 18; i_10 += 2) 
                {
                    for (long long int i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) max((min((arr_6 [i_8 + 1] [i_8] [i_8 + 1] [i_9 + 2]), (arr_6 [i_8 - 2] [i_10] [i_8 - 1] [i_9 - 1]))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_0 [15] [i_8 - 2])) : (((/* implicit */int) (unsigned char)230)))), (max((-30), (((/* implicit */int) var_1)))))))));
                            var_24 = min((((/* implicit */long long int) max((((/* implicit */int) var_15)), ((~(((/* implicit */int) arr_30 [i_11] [i_8]))))))), (min((arr_32 [i_9] [i_9 - 1] [i_9 - 1] [16U] [i_10 - 1] [i_10]), ((-9223372036854775807LL - 1LL)))));
                            arr_36 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 9798453728724217025ULL)) ? (((/* implicit */int) arr_34 [16] [16] [(unsigned short)2] [16] [i_9 + 3])) : (((/* implicit */int) arr_10 [i_0] [i_0]))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned long long int i_12 = 2; i_12 < 22; i_12 += 1) 
    {
        var_25 = arr_38 [i_12] [i_12 + 1];
        var_26 = ((/* implicit */unsigned char) min((-6279536954559123889LL), (((/* implicit */long long int) max((((/* implicit */unsigned short) (short)-32755)), ((unsigned short)61457))))));
        var_27 -= ((/* implicit */unsigned short) max((((/* implicit */long long int) (+(((/* implicit */int) arr_38 [i_12 - 1] [i_12 - 1]))))), (min((((/* implicit */long long int) arr_37 [i_12 - 1])), (max((569851345599371979LL), (((/* implicit */long long int) arr_39 [i_12]))))))));
    }
    var_28 += var_5;
    var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_9)), (var_0)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))), (var_16))))));
    var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)126))));
}
