/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28962
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_5))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) var_17);
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)56)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_10)));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 - 3] [i_0 + 3])) == (((/* implicit */int) arr_0 [i_0 - 3] [i_0 + 3]))));
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */unsigned long long int) arr_1 [i_0 + 1])) : (var_14))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) arr_13 [(unsigned char)15] [(unsigned char)15] [(unsigned char)15] [i_3] [(_Bool)1]);
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) arr_6 [i_0 + 3] [i_2] [i_3] [i_0 + 3]))));
                            var_24 = ((/* implicit */int) arr_11 [(unsigned char)10] [i_1] [5] [(unsigned short)15]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                var_25 = (unsigned short)39586;
                var_26 = ((/* implicit */signed char) ((arr_8 [i_0] [i_0] [i_0]) ^ (arr_8 [5LL] [i_1] [i_5])));
                var_27 = ((/* implicit */long long int) 653826423);
            }
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                var_28 = ((/* implicit */int) arr_3 [i_0]);
                /* LoopSeq 2 */
                for (int i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
                {
                    arr_22 [i_0] [6LL] [11ULL] [12ULL] [i_7] [i_7] = (~(((/* implicit */int) arr_0 [2] [i_7])));
                    var_29 = ((/* implicit */_Bool) arr_12 [i_6] [i_7] [i_6] [i_6] [i_1] [(_Bool)1] [i_0]);
                }
                for (int i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (signed char i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        var_30 *= ((/* implicit */long long int) (+(0U)));
                        var_31 = ((/* implicit */signed char) arr_12 [i_0] [(short)3] [i_1] [i_6] [i_8] [8] [(unsigned char)1]);
                        var_32 = ((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_23 [i_0] [i_1] [(signed char)2] [(unsigned short)6])))));
                        var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 4129145660U))));
                    }
                    for (int i_10 = 3; i_10 < 15; i_10 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */short) var_11);
                        var_35 ^= ((/* implicit */int) 1390974206478209875LL);
                        var_36 = ((arr_19 [i_1]) > (((/* implicit */long long int) ((/* implicit */int) var_8))));
                    }
                    for (int i_11 = 3; i_11 < 15; i_11 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0 - 1] [i_1] [i_6] [7] [i_11 - 2]))) == (590639350U))))));
                        var_38 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_18)))) > (arr_28 [i_0 + 4] [(unsigned short)13] [i_6] [i_6] [i_11] [i_0 + 1] [i_8])));
                    }
                    for (int i_12 = 3; i_12 < 15; i_12 += 1) /* same iter space */
                    {
                        var_39 -= ((/* implicit */unsigned int) arr_1 [(_Bool)1]);
                        var_40 = ((/* implicit */signed char) (~(arr_6 [i_0] [(signed char)13] [i_6] [i_8])));
                        var_41 -= ((/* implicit */int) var_9);
                    }
                    var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) var_12))));
                    var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_8] [(unsigned short)4] [(signed char)7] [i_0 + 4]))) - (var_10))))));
                }
                arr_36 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((arr_27 [i_0 + 3] [12U] [i_1] [i_1] [i_6]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
                /* LoopNest 2 */
                for (long long int i_13 = 2; i_13 < 15; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 4) 
                    {
                        {
                            var_44 ^= arr_19 [i_0];
                            var_45 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_0 + 2] [i_1] [i_0 + 2] [i_13 + 1] [i_14])) == (((/* implicit */int) ((((/* implicit */unsigned int) var_0)) == (var_4))))));
                        }
                    } 
                } 
            }
            var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_10)) == (arr_11 [i_0 - 1] [(unsigned char)2] [(unsigned char)2] [i_1])));
        }
        for (signed char i_15 = 0; i_15 < 16; i_15 += 3) 
        {
            arr_48 [5LL] [i_0 + 4] [i_0] &= ((/* implicit */signed char) max((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_24 [(_Bool)1] [(unsigned short)9] [(unsigned short)13] [i_0]))))), (var_5))), (((/* implicit */unsigned int) ((arr_28 [i_0] [i_0 + 4] [i_0] [15ULL] [i_0] [i_15] [i_15]) == (arr_28 [i_0] [(_Bool)1] [i_0 - 2] [i_0] [i_0] [i_0 - 3] [2]))))));
            var_47 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_15] [0] [i_0 + 4] [i_0 + 1])) ? (arr_33 [14U] [14U] [i_0] [(_Bool)1] [(short)14] [(_Bool)1]) : (arr_20 [i_0 - 2] [i_15])))) == (arr_27 [2ULL] [i_15] [4LL] [i_15] [i_15]))))) - (((((/* implicit */_Bool) var_12)) ? (arr_27 [(_Bool)1] [i_15] [(_Bool)1] [i_0 - 3] [i_0]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (var_14)))))));
        }
        /* vectorizable */
        for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 1) 
        {
            arr_51 [i_0] [i_16] [(unsigned char)2] = ((/* implicit */unsigned long long int) (-(var_5)));
            var_48 = arr_10 [i_16] [i_16] [i_0 - 1] [i_0];
            arr_52 [15] = ((/* implicit */unsigned short) var_13);
        }
        var_49 = ((/* implicit */unsigned short) min((var_49), (((/* implicit */unsigned short) ((((long long int) arr_21 [i_0] [i_0] [i_0 + 4] [4LL])) == (((/* implicit */long long int) arr_35 [14] [i_0 + 1] [i_0 - 2] [i_0 - 2])))))));
    }
    var_50 = 1445344750;
}
