/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223705
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
    var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_1 [i_0]))))));
        var_13 -= ((/* implicit */unsigned int) ((7761373803998781201ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60136)))));
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_1))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-26400))) * (-1LL)))) ? (((/* implicit */int) max(((short)7462), ((short)7467)))) : (((/* implicit */int) arr_1 [i_1]))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (long long int i_3 = 2; i_3 < 17; i_3 += 1) 
            {
                for (short i_4 = 2; i_4 < 16; i_4 += 3) 
                {
                    {
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_3 + 2] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-7470)))))) : ((~(((((/* implicit */_Bool) arr_3 [i_1])) ? (7761373803998781201ULL) : (((/* implicit */unsigned long long int) var_3))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */long long int) ((unsigned long long int) arr_11 [i_1] [i_1] [18U] [i_1] [i_1] [8U]));
                            arr_17 [i_1] = ((/* implicit */unsigned int) 7761373803998781200ULL);
                            var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)26384))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) (short)7466))))))));
                            arr_20 [i_1] [i_2] [i_1] [i_4] [i_6] = ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) 1080996500U)), (min((((/* implicit */unsigned long long int) 2076094377U)), (531850778715234747ULL)))))));
                        }
                        arr_21 [i_1] [i_2] [i_1] = ((unsigned int) ((748462142U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)4095)))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-7464)) ? ((-(arr_4 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7483)))))) <= (min((-3570195787887024525LL), (((/* implicit */long long int) (short)7449))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) arr_1 [i_7]);
        /* LoopNest 2 */
        for (unsigned char i_8 = 2; i_8 < 18; i_8 += 4) 
        {
            for (unsigned short i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_10 = 0; i_10 < 19; i_10 += 2) 
                    {
                        var_22 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) 1335147714U)), (min((((/* implicit */long long int) 3086922519U)), (arr_25 [i_10] [i_9] [i_8 - 2])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_11 = 0; i_11 < 19; i_11 += 3) 
                        {
                            var_23 = ((unsigned char) arr_12 [i_11] [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 - 2]);
                            var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1370367564U))));
                            arr_35 [i_11] [i_11] [i_10] [2LL] [i_8] [i_11] [14LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_8 - 1] [i_8])) ? (((/* implicit */int) arr_26 [i_8 - 1] [i_11])) : (((/* implicit */int) arr_26 [i_8 - 1] [i_8 - 2]))));
                            var_25 = ((short) arr_6 [i_7] [i_11]);
                        }
                        for (unsigned int i_12 = 0; i_12 < 19; i_12 += 4) 
                        {
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(10685370269710770411ULL)))) ? (((((/* implicit */_Bool) arr_32 [(unsigned short)8] [i_10] [i_9] [i_8])) ? (arr_32 [i_7] [i_7] [i_10] [i_12]) : (arr_32 [i_7] [3LL] [i_7] [i_7]))) : (((((/* implicit */_Bool) arr_32 [i_7] [i_9] [i_10] [12U])) ? (arr_32 [i_10] [8U] [i_8] [i_7]) : (arr_32 [i_12] [i_9] [i_8 - 2] [i_7])))));
                            var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_9] [i_10] [i_10])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_10]))))) ? (((/* implicit */unsigned long long int) (~(arr_4 [i_8])))) : (((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_8] [i_9]))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_37 [i_8] [i_8 - 2] [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 2]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)15)))))))))));
                        }
                        arr_38 [i_9] [i_10] = ((/* implicit */unsigned long long int) var_7);
                    }
                    for (short i_13 = 0; i_13 < 19; i_13 += 4) 
                    {
                        arr_41 [(short)8] [i_8 - 1] [5LL] [i_13] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_10 [i_7] [i_7] [i_7] [i_13])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(short)0] [i_8 + 1] [i_8] [i_8 - 2] [i_8 - 2] [i_8 + 1]))) | (arr_40 [i_8 + 1] [i_8 - 1]))) : (((unsigned int) 3843785922635728259ULL))));
                        var_28 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))) <= (max((((/* implicit */unsigned int) (unsigned short)38300)), (arr_40 [i_7] [i_7]))))) ? (max(((+(var_1))), (min((((/* implicit */unsigned long long int) (signed char)63)), (var_1))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                    }
                    var_29 -= ((/* implicit */short) var_3);
                }
            } 
        } 
    }
}
