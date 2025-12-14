/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231485
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */int) var_9);
        var_14 = ((/* implicit */long long int) (unsigned short)35728);
        arr_3 [(short)5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) (short)17645))))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-26989)) ? (((/* implicit */int) (short)-17646)) : (((/* implicit */int) var_7)))), (((/* implicit */int) (short)11298)))))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)209))))) >= (((/* implicit */int) (unsigned short)2764))));
        arr_4 [i_0] = max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) >= (((/* implicit */int) arr_2 [i_0]))))));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            var_16 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */int) var_3)))));
            arr_9 [i_1] = ((/* implicit */long long int) ((var_6) + (arr_8 [i_1] [i_2] [i_1])));
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            for (short i_4 = 2; i_4 < 21; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (int i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            var_17 -= ((/* implicit */short) arr_12 [i_6] [i_5] [i_3] [i_3]);
                            var_18 = ((/* implicit */_Bool) arr_5 [i_1]);
                        }
                        for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            arr_22 [6LL] [i_3] [i_1] [i_4 - 1] [0] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_1) ? (var_11) : (-1532932835)))) ? (((/* implicit */int) ((var_11) <= (1503658827)))) : ((+(797060877)))));
                            var_19 = ((((/* implicit */_Bool) ((long long int) var_1))) ? (6024495804938820571LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4]))));
                        }
                        for (long long int i_8 = 2; i_8 < 19; i_8 += 1) 
                        {
                            var_20 = ((/* implicit */_Bool) arr_7 [i_4 + 1] [i_8 - 1] [i_8]);
                            var_21 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                        }
                        var_22 = ((/* implicit */int) min((var_22), ((-(((/* implicit */int) arr_17 [i_4 + 1] [i_4 + 1] [i_4 - 2] [i_1] [i_4 - 1]))))));
                    }
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */int) (short)2942)) >> (((((/* implicit */int) min(((short)-17646), ((short)17649)))) + (17667)))));
                }
            } 
        } 
        arr_26 [19] [i_1] = ((/* implicit */long long int) (unsigned char)210);
    }
    var_24 &= ((/* implicit */_Bool) (+(((/* implicit */int) var_4))));
    var_25 *= ((/* implicit */long long int) ((((var_12) > (((/* implicit */long long int) var_0)))) ? (max((((/* implicit */int) var_1)), (-1503658828))) : ((~((~(((/* implicit */int) var_4))))))));
    var_26 = ((/* implicit */short) var_9);
    var_27 ^= ((/* implicit */unsigned char) var_4);
}
