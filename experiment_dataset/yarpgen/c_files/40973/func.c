/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40973
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
    var_18 = ((/* implicit */unsigned int) var_10);
    var_19 = ((/* implicit */unsigned short) ((-7795309502579873644LL) - (((/* implicit */long long int) 2715258027U))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) (+(35115652612096ULL))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) - (18446708958056939503ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)115))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (unsigned short i_3 = 1; i_3 < 19; i_3 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) arr_0 [i_1] [i_3]);
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        var_22 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_3 - 1] [i_3 - 1] [i_3])) ? (((/* implicit */int) arr_6 [i_3 + 2] [i_3 - 1] [i_3])) : (((/* implicit */int) arr_6 [i_3 + 1] [i_3 - 1] [i_4]))));
                        arr_13 [(signed char)5] [i_2] [i_2] [i_3 - 1] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_3 - 1] [i_3 - 1] [i_3 - 1]))));
                        arr_14 [i_1] [i_1] [(unsigned short)10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5113)) ? (18446708958056939516ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [(unsigned short)4] [(unsigned short)4] [i_1] [i_1] [i_1])))))) ? (((/* implicit */long long int) arr_4 [i_1])) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)244))) - (449930544655144089LL))));
                        /* LoopSeq 3 */
                        for (signed char i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                        {
                            var_23 += ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1]))));
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_3 + 1])) ^ (((/* implicit */int) arr_1 [i_3 + 2])))))));
                        }
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                        {
                            arr_19 [(unsigned short)13] [i_4] [i_3] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)41203)) ? (((/* implicit */int) arr_15 [i_3 - 1] [i_3 + 1])) : (((/* implicit */int) arr_15 [i_3 + 2] [i_3 - 1]))));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((unsigned short) arr_15 [i_3 + 3] [i_3 + 3]))));
                        }
                        for (signed char i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)32092))))) ? (((/* implicit */int) arr_22 [i_2] [i_2] [i_3] [i_3 - 1])) : (((/* implicit */int) (unsigned short)60422)))))));
                            var_27 &= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)0))));
                            var_28 = (!(((/* implicit */_Bool) arr_18 [2U] [(signed char)17] [i_3] [i_3] [i_3] [i_3 + 2])));
                        }
                        arr_23 [i_1] [i_1] [8ULL] [i_1] = ((arr_8 [i_1] [i_3 + 2] [i_3]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 + 2]))));
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)124)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            for (unsigned short i_9 = 3; i_9 < 19; i_9 += 2) 
            {
                {
                    arr_28 [(unsigned char)14] [i_8] [i_8] [i_8] = (unsigned short)7590;
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)52589)) >> (((/* implicit */int) ((((/* implicit */int) arr_3 [i_8])) != (((/* implicit */int) (unsigned short)35123)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
                        {
                            {
                                var_31 += ((/* implicit */short) (+(((((/* implicit */int) arr_9 [i_1] [i_1] [i_1])) - (((/* implicit */int) var_0))))));
                                arr_35 [i_8] [(signed char)13] [(signed char)13] [i_8] [i_8] = ((/* implicit */_Bool) arr_15 [i_9] [i_9]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_36 [(signed char)21] = ((/* implicit */unsigned short) (~(((arr_8 [i_1] [i_1] [18U]) - (18446708958056939516ULL)))));
    }
    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 3) 
    {
        var_32 -= (short)-19723;
        var_33 *= ((/* implicit */_Bool) var_8);
        arr_40 [i_12] = ((/* implicit */signed char) min((((/* implicit */short) (!(var_12)))), (((short) (signed char)50))));
    }
}
