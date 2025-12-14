/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194699
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
    var_14 = ((((/* implicit */_Bool) max((max((var_10), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) 1297188558))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((signed char) var_10))));
    var_15 += ((/* implicit */_Bool) var_9);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_10)))) ? (((unsigned int) arr_0 [i_0 + 2] [i_0 + 2])) : (var_6)));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_16 = ((/* implicit */int) max((min((((signed char) 2306200285U)), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)15)) || (var_4)))))), (((signed char) var_4))));
            var_17 &= ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) min((var_8), (var_6))))))), (((((/* implicit */int) (unsigned short)21065)) - (max((arr_4 [i_0]), (((/* implicit */int) var_4))))))));
            arr_6 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) max(((-(((/* implicit */int) var_13)))), (((/* implicit */int) ((_Bool) ((2306200304U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15)))))))));
        }
        for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            arr_9 [i_0] [i_2] [i_2] = (unsigned short)0;
            /* LoopSeq 2 */
            for (unsigned int i_3 = 2; i_3 < 9; i_3 += 4) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 2306200285U))) || (((/* implicit */_Bool) min(((~(var_10))), (((/* implicit */long long int) (short)32512)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    arr_15 [i_0 + 2] [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_13);
                    var_19 = ((/* implicit */unsigned long long int) arr_4 [i_0]);
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)15)) <= (((/* implicit */int) arr_5 [i_4] [i_0 - 1]))))) : (((/* implicit */int) (signed char)15))));
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_21 = (((!(((/* implicit */_Bool) arr_18 [i_0 + 3] [i_2] [i_3 - 2] [i_0 + 3])))) ? (((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_2] [i_3] [i_5]))) : (2306200285U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))));
                    /* LoopSeq 1 */
                    for (short i_6 = 2; i_6 < 8; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */int) var_8);
                        arr_21 [i_0] = ((/* implicit */_Bool) (signed char)15);
                        var_23 = ((/* implicit */unsigned int) (-((+(883008063)))));
                        var_24 = ((/* implicit */int) arr_20 [i_0] [i_0] [i_3] [i_5] [i_5]);
                    }
                    var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)198))));
                    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3])) || (((/* implicit */_Bool) ((int) 18446744073709551615ULL)))));
                    arr_22 [i_5] [i_3] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0 + 3] [i_0 + 3] [i_0 + 1] [i_3 - 2])) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)198))))));
                }
                arr_23 [i_2] [i_2] [(short)4] = ((/* implicit */long long int) var_2);
                var_27 *= ((short) (signed char)-15);
            }
            /* vectorizable */
            for (unsigned int i_7 = 2; i_7 < 9; i_7 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_8 = 1; i_8 < 9; i_8 += 1) 
                {
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (short)29803))));
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_8 - 1] [0LL] [i_8 - 1] [i_8 - 1])) ? (((/* implicit */int) arr_18 [i_8 - 1] [i_2] [i_8 - 1] [i_2])) : (((/* implicit */int) (unsigned char)198))));
                }
                var_30 = arr_8 [i_7];
            }
            var_31 = ((/* implicit */short) ((unsigned char) (unsigned short)14324));
            arr_28 [i_0 + 2] [i_0 + 3] [i_2] = ((/* implicit */unsigned char) ((short) (_Bool)1));
        }
        for (short i_9 = 0; i_9 < 10; i_9 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 4) 
            {
                for (int i_11 = 2; i_11 < 9; i_11 += 2) 
                {
                    {
                        var_32 = ((/* implicit */unsigned char) ((max(((!(((/* implicit */_Bool) arr_24 [i_0] [i_9] [i_10] [i_10])))), (arr_17 [i_0] [i_9] [i_0 + 1] [i_11]))) ? (max((arr_36 [i_0] [i_0] [i_10 - 1] [i_11]), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) ((var_3) < (((/* implicit */long long int) ((unsigned int) arr_16 [i_0] [i_0] [i_0] [i_11])))))))));
                        arr_37 [i_0] [i_9] [i_9] = ((/* implicit */unsigned int) ((short) (+(((/* implicit */int) ((short) (unsigned char)0))))));
                    }
                } 
            } 
            arr_38 [i_9] [i_9] [i_9] = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) 18327208952982430317ULL)))));
            /* LoopNest 3 */
            for (unsigned int i_12 = 0; i_12 < 10; i_12 += 1) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    for (unsigned int i_14 = 0; i_14 < 10; i_14 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */int) arr_36 [i_9] [i_9] [i_9] [i_9]);
                            arr_50 [i_12] [i_14] [i_13] [i_12] [i_12] [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_13]))));
                            arr_51 [i_0] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)0)))) + (max((max((119535120727121299ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1))))), (((/* implicit */unsigned long long int) arr_12 [i_0 - 1]))))));
                            arr_52 [i_12] [i_13] = ((/* implicit */_Bool) ((signed char) (((!(((/* implicit */_Bool) arr_13 [i_0] [i_9] [i_12] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_9]))) : ((+(var_5))))));
                            arr_53 [i_0] [(short)1] [i_12] = ((/* implicit */short) var_12);
                        }
                    } 
                } 
            } 
        }
        var_34 = ((/* implicit */short) var_12);
        var_35 = max((((/* implicit */long long int) (~((+(((/* implicit */int) (unsigned short)14324))))))), (max((((long long int) arr_16 [i_0 + 3] [i_0 + 2] [i_0 + 2] [i_0])), (((/* implicit */long long int) max((arr_11 [i_0 + 3] [i_0 + 2] [i_0 + 2] [i_0 + 2]), (((/* implicit */short) arr_0 [i_0] [i_0]))))))));
    }
    var_36 += ((((/* implicit */_Bool) (signed char)0)) ? ((-(0U))) : (1988767011U));
}
