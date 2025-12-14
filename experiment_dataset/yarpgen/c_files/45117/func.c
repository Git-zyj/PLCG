/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45117
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
    var_19 -= ((/* implicit */unsigned char) var_2);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) arr_1 [i_1])))) + (2147483647))) << (((min((1655090100), (((/* implicit */int) (short)25320)))) - (25320)))));
                        var_21 = ((/* implicit */int) min((((/* implicit */unsigned int) ((short) (_Bool)1))), (((((((/* implicit */_Bool) 1283782878)) || (((/* implicit */_Bool) (signed char)-50)))) ? (((((/* implicit */_Bool) 2720607600932861969LL)) ? (((/* implicit */unsigned int) -1927389813)) : (1976765198U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-80)))))));
                    }
                    for (int i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))));
                            var_23 = ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) (_Bool)1))));
                            var_24 ^= ((/* implicit */int) (signed char)-80);
                        }
                        arr_15 [i_1] [i_1] [i_2] [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned char) var_15))) ? (((arr_14 [i_0] [i_0] [i_2] [i_1] [i_4]) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) arr_7 [i_4] [i_2] [i_0])))) : (((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_2])))) & (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)91)), (max(((unsigned char)48), ((unsigned char)71))))))));
                        arr_16 [i_0] [i_0] [i_0] = var_18;
                        arr_17 [i_0] [i_1] [i_1] [i_4] = ((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) (short)-5760)) : (((/* implicit */int) (_Bool)0)));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
                    {
                        arr_20 [i_1] [i_2] [i_6] = ((/* implicit */unsigned short) arr_10 [i_6] [i_2] [i_1] [i_1] [(short)6] [i_0]);
                        arr_21 [i_0] [i_1] [i_6] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-30)) ? (((/* implicit */int) arr_5 [i_0] [(_Bool)1] [i_2])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))) ? (arr_13 [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))))));
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */int) ((arr_4 [i_1]) | (((/* implicit */unsigned int) (-(((/* implicit */int) (short)21307)))))));
                            var_26 = ((/* implicit */int) var_3);
                        }
                        for (long long int i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
                        {
                            var_27 *= ((/* implicit */unsigned short) ((unsigned char) arr_19 [i_0] [i_2] [i_6] [i_8]));
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((short) arr_12 [i_8] [i_8]));
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_28 [i_0] [i_1] [i_2] [i_6] [i_8])))))));
                            arr_30 [i_0] [i_6] = ((/* implicit */unsigned long long int) -1545947426);
                        }
                        var_29 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)120))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        arr_33 [i_0] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) (!(((((/* implicit */int) (short)-1115)) != (((/* implicit */int) arr_1 [i_9]))))));
                        var_30 &= ((/* implicit */signed char) (-(((((/* implicit */_Bool) max((arr_32 [i_0] [i_0] [i_9] [i_1]), (((/* implicit */long long int) arr_10 [i_2] [i_2] [i_2] [i_1] [6LL] [6LL]))))) ? (((/* implicit */int) arr_12 [i_0] [i_0])) : (((/* implicit */int) arr_26 [i_9] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((4143867302867653615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1115)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) -2720607600932861963LL)) : (var_11)))) ? (((((/* implicit */int) (unsigned char)74)) - (-1077669587))) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) : (-2720607600932861970LL)));
                    }
                    arr_34 [i_0] [i_1] [i_0] [i_2] = (~(((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_0 [i_0]))) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_17))) >= (1596895775597480039LL))))))));
                }
            } 
        } 
    } 
    var_32 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (18446744073709551607ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_9))))))) && (((/* implicit */_Bool) max(((~(-1642447420))), (((/* implicit */int) (unsigned short)52143)))))));
    var_33 = ((/* implicit */short) ((((/* implicit */int) var_17)) << (((((var_17) ? (var_11) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)76)), (1596895775597480052LL)))))) - (2817150613387739796ULL)))));
}
