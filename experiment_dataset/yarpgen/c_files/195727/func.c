/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195727
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_3 = 1; i_3 < 19; i_3 += 3) 
                {
                    for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        {
                            arr_14 [(unsigned char)0] [i_1] [i_0] [i_3 - 1] [i_4] = ((/* implicit */int) var_10);
                            arr_15 [i_0] [i_1] [i_0] = (((((~(((/* implicit */int) arr_7 [i_0] [2])))) + (2147483647))) >> (((/* implicit */int) ((arr_0 [i_0] [i_4]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2)))))));
                            var_11 = ((/* implicit */signed char) var_7);
                            arr_16 [i_2 + 1] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) % (arr_8 [i_0] [(signed char)13] [i_2] [i_0] [i_3] [i_4])))) ? (((arr_0 [i_0] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) (unsigned char)238)))))));
                            arr_17 [(unsigned char)12] [i_3] [i_0] [i_1] [(unsigned char)12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) (unsigned char)2))))) ? (((/* implicit */int) arr_7 [i_1] [6ULL])) : (((/* implicit */int) var_7))));
                        }
                    } 
                } 
                var_12 = (+(var_9));
                arr_18 [(unsigned char)19] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_1] [i_2 - 2] [i_2 - 1])) ^ (((/* implicit */int) arr_12 [i_2] [i_2 - 2] [i_2]))));
            }
            for (unsigned char i_5 = 1; i_5 < 20; i_5 += 1) 
            {
                arr_22 [12ULL] [i_1 - 1] [i_5] [i_5] &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 2124110792)) == (var_8)));
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) arr_12 [i_6] [i_1] [i_0]);
                            var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (arr_10 [i_5 + 1] [(signed char)14] [(signed char)14] [(signed char)14])));
                        }
                    } 
                } 
            }
            arr_28 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_21 [i_0] [8ULL])) ? (((/* implicit */long long int) arr_26 [i_0] [i_0] [i_0] [i_1 - 1] [i_1])) : (arr_0 [i_0] [i_1]))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)8)))))));
        }
        for (signed char i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            var_15 = ((/* implicit */unsigned short) arr_31 [i_0]);
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 22; i_9 += 4) 
            {
                for (int i_10 = 3; i_10 < 21; i_10 += 1) 
                {
                    {
                        var_16 = ((/* implicit */long long int) arr_23 [i_10 + 1] [i_10 - 1] [(signed char)13] [i_10]);
                        var_17 = ((/* implicit */long long int) var_0);
                        var_18 &= ((/* implicit */signed char) (~(((/* implicit */int) arr_11 [i_10 - 1] [i_10] [i_10 + 1] [i_8] [i_10]))));
                    }
                } 
            } 
        }
        for (unsigned char i_11 = 0; i_11 < 22; i_11 += 1) 
        {
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0])) : ((+(((/* implicit */int) arr_19 [i_0] [i_11] [i_11]))))));
            arr_40 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_0] [i_0] [i_11] [i_11])) || (((/* implicit */_Bool) arr_26 [i_11] [i_11] [i_0] [i_0] [i_0])))))));
        }
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0])) && (((var_0) == (((/* implicit */int) (unsigned char)236))))));
        var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_31 [i_0]))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 22; i_12 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_13 = 0; i_13 < 22; i_13 += 3) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 1) 
            {
                {
                    arr_47 [i_13] [i_13] = ((/* implicit */int) var_1);
                    var_22 = ((/* implicit */unsigned long long int) ((((var_4) != (((/* implicit */int) arr_43 [i_12])))) ? (((/* implicit */int) var_5)) : (((arr_26 [i_12] [(signed char)2] [i_13] [i_12] [i_14]) / (((/* implicit */int) var_2))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_15 = 2; i_15 < 21; i_15 += 1) 
        {
            arr_50 [19] [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [(unsigned short)7] [i_15] [i_12] [i_15])) - (((((/* implicit */int) var_7)) - (((/* implicit */int) arr_1 [i_15]))))));
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_29 [i_12] [i_15 - 1] [(unsigned short)14])) > ((+(var_10))))))));
        }
    }
    /* LoopNest 2 */
    for (long long int i_16 = 2; i_16 < 12; i_16 += 3) 
    {
        for (unsigned long long int i_17 = 1; i_17 < 14; i_17 += 3) 
        {
            {
                arr_57 [i_16 - 1] [i_16 - 1] [i_16] = ((/* implicit */unsigned short) (+(((/* implicit */int) (((~(((/* implicit */int) var_5)))) <= (((/* implicit */int) var_3)))))));
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (((((!(((/* implicit */_Bool) var_1)))) && (((((/* implicit */_Bool) arr_13 [i_16] [i_16] [(unsigned short)9] [i_17] [(unsigned short)9])) || (((/* implicit */_Bool) (unsigned short)48)))))) && (((((/* implicit */_Bool) arr_8 [i_16] [i_16 - 2] [i_17] [(signed char)6] [i_17 + 1] [i_17])) && (((((/* implicit */_Bool) (unsigned char)254)) && (((/* implicit */_Bool) arr_23 [i_16 - 1] [i_16] [i_16] [i_16])))))))))));
                var_25 += ((/* implicit */unsigned long long int) var_4);
                var_26 = ((/* implicit */unsigned short) arr_6 [(signed char)11] [i_16] [i_16] [i_16]);
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)13)) ? ((~(-7027773359293985132LL))) : (((/* implicit */long long int) var_0))));
    var_28 = ((/* implicit */long long int) (~(((/* implicit */int) ((max((var_10), (((/* implicit */long long int) var_4)))) == (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
}
