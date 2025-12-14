/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27654
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */long long int) min((var_10), (9223372036854775807LL)));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        var_11 |= ((/* implicit */unsigned short) ((short) arr_9 [i_0] [i_1] [i_2] [i_3] [i_0]));
                        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [2] [i_1 + 2] [(_Bool)1]))) < (4294967295U)))) / (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])))))));
                        var_13 *= ((/* implicit */_Bool) (-(arr_7 [i_3] [i_1] [i_1] [i_0])));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_14 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1])) || (arr_9 [i_3] [i_1 + 2] [i_0 - 1] [i_0] [i_0])));
                            var_15 |= ((/* implicit */_Bool) ((short) arr_3 [i_1] [i_1] [i_1 + 3]));
                            arr_13 [i_0] [10ULL] [10ULL] [i_3] [i_4] [i_1] &= ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) var_6)));
                            var_16 |= ((int) 8446045453089520177ULL);
                        }
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((var_6) ? (((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_1)))) : (((/* implicit */int) var_4)))))));
                            var_18 &= ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) / (((/* implicit */int) arr_14 [(short)2] [(short)2] [i_1] [i_1] [(signed char)7] [i_1 + 2] [i_2]))));
                            var_19 += ((/* implicit */short) (_Bool)0);
                            var_20 *= ((/* implicit */short) ((unsigned int) ((6662457554522612548ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                        }
                    }
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        var_21 &= ((/* implicit */short) ((arr_17 [i_0 - 1]) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) 4294967289U)) || (((/* implicit */_Bool) var_5))))))))));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_9 [i_0] [i_2] [i_0] [i_0] [i_0]))));
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (+(((((/* implicit */_Bool) arr_10 [i_0 - 1])) ? (arr_7 [i_0 - 1] [i_1 - 1] [(short)9] [i_6]) : (arr_10 [i_0 - 1]))))))));
                        arr_19 [i_0] [i_0] [i_1] [i_2] [i_6] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0 - 1] [9U]))))), (arr_12 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_6]))))));
                        arr_20 [12ULL] [12ULL] [i_1 - 1] [i_0] &= ((/* implicit */signed char) arr_17 [i_1]);
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_24 &= ((/* implicit */unsigned int) var_3);
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [5ULL] [i_7]))));
                        var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_1 + 2])) || (((/* implicit */_Bool) 17179869183ULL))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_31 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] [(short)2] &= ((/* implicit */unsigned char) ((_Bool) (((-(((/* implicit */int) (short)4095)))) != (((/* implicit */int) (signed char)3)))));
                                var_27 *= ((/* implicit */signed char) arr_26 [(_Bool)1] [(_Bool)1] [i_8] [i_8]);
                                var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) var_5))));
                                var_29 &= var_6;
                                var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) 530862635))));
                            }
                        } 
                    } 
                }
                arr_32 [i_0] [6LL] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((unsigned short) var_4))) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-16))))))) ? ((-(arr_7 [i_0 - 1] [i_1 - 1] [i_1] [i_1 + 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_1 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((_Bool) var_9))))))));
            }
        } 
    } 
    var_31 -= ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((signed char) var_0))))) && ((!(((/* implicit */_Bool) ((short) var_7))))));
    var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))), ((-(((/* implicit */int) var_6)))))))));
    var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) var_0))));
}
