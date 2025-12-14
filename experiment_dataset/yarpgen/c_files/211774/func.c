/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211774
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
    var_17 = ((/* implicit */unsigned char) ((unsigned long long int) var_10));
    var_18 = ((/* implicit */int) var_16);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 7; i_4 += 2) 
                        {
                            {
                                var_19 |= ((/* implicit */signed char) max(((+(arr_3 [i_4 - 1] [i_4 + 1] [i_0]))), (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_6)), (var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) var_11))))))))));
                                var_20 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2892676611U))));
                                var_21 -= ((/* implicit */_Bool) (+((~(arr_10 [i_2] [i_2] [i_4 - 2] [i_2] [i_2])))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)68)) + (((/* implicit */int) arr_9 [i_1] [0U] [(unsigned char)9]))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)1416))))) : (((((/* implicit */_Bool) arr_8 [i_4 + 4] [i_4 - 1] [i_4 + 1] [i_1] [i_4 - 1] [i_4 + 1] [i_2])) ? (arr_10 [i_4] [i_4] [i_4 - 2] [i_4] [i_4 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_5 = 4; i_5 < 10; i_5 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 2; i_6 < 9; i_6 += 1) 
                    {
                        arr_16 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (short)19559);
                        var_23 = ((/* implicit */signed char) (((~(((/* implicit */int) var_11)))) != (((/* implicit */int) (!(((/* implicit */_Bool) 2945038493U)))))));
                        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)37))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        var_25 ^= ((/* implicit */unsigned long long int) var_10);
                        /* LoopSeq 3 */
                        for (int i_8 = 4; i_8 < 9; i_8 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned int) var_1);
                            var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)218)))))));
                        }
                        for (int i_9 = 4; i_9 < 9; i_9 += 4) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */long long int) 3365657565U)) >= (arr_1 [i_5]))));
                            var_29 -= ((/* implicit */unsigned short) var_9);
                            arr_25 [i_0] [i_9 - 3] [i_1] = ((/* implicit */unsigned short) ((signed char) arr_10 [i_9 - 1] [i_9 - 1] [i_9 - 4] [i_9] [i_9 + 2]));
                            var_30 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (6858405915223014222ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0])))));
                        }
                        for (unsigned short i_10 = 2; i_10 < 10; i_10 += 3) 
                        {
                            arr_28 [i_1] [(_Bool)1] [i_5] [i_7] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)39))));
                            arr_29 [i_1] = ((/* implicit */unsigned short) arr_15 [i_0] [i_1]);
                        }
                    }
                    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) 352835802U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_2 [i_5 - 2] [i_0] [i_5 - 2]))))));
                }
                for (long long int i_11 = 0; i_11 < 11; i_11 += 1) /* same iter space */
                {
                    arr_33 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (~(336162664)));
                    arr_34 [i_0] [i_1] [i_1] [7ULL] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [8U] [i_1] [i_1] [i_1] [(unsigned char)5]))) : (arr_12 [i_0])))));
                }
                for (long long int i_12 = 0; i_12 < 11; i_12 += 1) /* same iter space */
                {
                    var_32 += ((/* implicit */signed char) max((arr_1 [i_0]), (((/* implicit */long long int) ((unsigned short) var_12)))));
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */signed char) 2517223847565444840ULL);
                                var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_22 [i_14] [i_1] [i_12] [i_13] [i_13])), (var_11)))) ? (var_7) : (((((/* implicit */_Bool) arr_9 [i_1] [i_13] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_39 [i_0] [i_1] [i_0] [i_0]), (((/* implicit */short) var_11)))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (4161210447U)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_15 = 0; i_15 < 11; i_15 += 1) 
                    {
                        arr_45 [i_1] [i_1] [(unsigned char)3] [i_15] [(unsigned char)3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-18))) & (17325376933567367435ULL)));
                        var_35 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) min((((/* implicit */signed char) arr_11 [i_1] [i_1] [i_15] [i_15])), (arr_43 [i_0] [i_1] [i_0] [i_12] [i_1] [i_0]))))) % ((+(((/* implicit */int) (unsigned short)27775))))));
                    }
                }
            }
        } 
    } 
}
