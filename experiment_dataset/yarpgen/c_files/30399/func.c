/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30399
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min((6984562231541465811LL), (((/* implicit */long long int) ((unsigned short) (+(1999798753)))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    var_19 &= ((/* implicit */unsigned char) (signed char)0);
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_9)) : (arr_4 [4] [4U])));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    var_21 = ((/* implicit */unsigned int) arr_8 [i_3] [i_0] [i_3] [i_0]);
                    arr_12 [i_3] [i_0] = ((/* implicit */unsigned int) var_16);
                }
                for (unsigned int i_4 = 2; i_4 < 9; i_4 += 4) 
                {
                    var_22 = ((/* implicit */short) ((-8318679752944303340LL) / (((/* implicit */long long int) (~(arr_10 [i_4 - 1] [i_1] [i_1] [i_0]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        var_23 = arr_4 [i_0] [i_4];
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_13 [i_0] [i_1] [i_4 - 2] [i_5])))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_6 = 3; i_6 < 10; i_6 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned short) 1999798753);
                            arr_21 [i_0] [i_5] [i_4] [i_5] [i_0] &= ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)0)) : (587832361)));
                        }
                        for (unsigned short i_7 = 3; i_7 < 10; i_7 += 3) /* same iter space */
                        {
                            var_26 += ((/* implicit */short) (-((~(-8LL)))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1607921446U)) ? (-24LL) : (-7906153283005543459LL)))) ? (-7906153283005543459LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-15196)))));
                            var_28 = (i_7 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)15683)) >> (((((/* implicit */int) arr_22 [i_7 - 1] [i_7])) - (50534)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)15683)) >> (((((((/* implicit */int) arr_22 [i_7 - 1] [i_7])) - (50534))) + (15774))))));
                        }
                        for (unsigned short i_8 = 3; i_8 < 10; i_8 += 3) /* same iter space */
                        {
                            arr_26 [i_0] [i_5] [i_0] [i_0] [i_8] [i_0] [i_5] = ((/* implicit */unsigned short) (+((~(0U)))));
                            var_29 &= (((+(-201392242))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)-15197))))));
                            arr_27 [(short)2] [i_4] = ((/* implicit */_Bool) -6LL);
                        }
                        var_30 = ((/* implicit */unsigned char) (unsigned short)26246);
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        var_31 = ((/* implicit */short) (((-(((/* implicit */int) arr_25 [(signed char)1] [(short)0] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 2])))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)8192)))))));
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_0] [i_10])) >> (((((/* implicit */int) arr_11 [i_0] [i_0])) - (26238)))));
                            arr_32 [1U] [i_9] = ((/* implicit */signed char) (short)21032);
                            arr_33 [i_0] [i_0] [(short)5] [i_9] [(short)5] [i_10] [(_Bool)1] = ((/* implicit */unsigned short) var_17);
                            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) arr_11 [i_0] [i_0]))));
                        }
                        arr_34 [i_0] [i_1] [i_9] [i_4] [4U] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) (unsigned short)37229)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_28 [0] [6LL] [i_4 + 2]))))) : (((((/* implicit */_Bool) arr_29 [i_1] [(_Bool)1] [i_9])) ? (arr_6 [4LL] [i_4 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112)))))));
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_4 - 1] [7U])) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)21846))))) : (var_15)));
                    }
                }
                var_35 &= ((/* implicit */signed char) (short)15175);
                var_36 += ((/* implicit */unsigned char) arr_18 [i_0] [(short)1] [i_0] [9]);
            }
        } 
    } 
    var_37 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)15196)) ? (((/* implicit */int) (short)15196)) : (((/* implicit */int) (unsigned short)0))))), (((unsigned int) ((short) (short)15196))));
    var_38 *= ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_14))))))));
    var_39 = ((/* implicit */long long int) var_14);
}
