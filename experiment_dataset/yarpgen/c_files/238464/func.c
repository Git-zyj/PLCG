/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238464
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                            {
                                arr_14 [i_0] [i_0] [(signed char)4] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
                                var_19 = arr_5 [i_0] [i_0] [4ULL];
                            }
                            for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
                            {
                                arr_17 [i_1] [i_5] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [(unsigned short)3] [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((_Bool) arr_3 [(unsigned short)6] [i_1]))) : (((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [9U] [9ULL] [9U])))))));
                                arr_18 [(_Bool)1] [i_1] [i_5] [i_3] [i_1] [i_5] [(_Bool)1] = ((/* implicit */signed char) min((arr_6 [(unsigned char)9] [(unsigned short)2] [i_2]), (((/* implicit */unsigned int) (~((+(((/* implicit */int) (signed char)80)))))))));
                                arr_19 [i_0] [(short)7] [i_5] [(unsigned short)5] [i_0] [10ULL] [i_5] = (~(max((((arr_7 [6U] [i_2] [i_2]) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [7LL] [3U] [7LL] [7LL]))))), (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            }
                            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
                            {
                                var_20 += ((/* implicit */long long int) var_8);
                                arr_23 [6U] [(_Bool)1] [i_2] [(unsigned short)3] [i_6] [i_6] = ((/* implicit */unsigned char) var_0);
                            }
                            /* vectorizable */
                            for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
                            {
                                var_21 = ((/* implicit */signed char) ((int) (unsigned char)47));
                                arr_26 [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) || (((/* implicit */_Bool) arr_15 [i_7] [i_1] [i_1] [(short)10])))) ? (((/* implicit */int) arr_8 [(short)0] [i_3] [i_1] [i_0])) : (((arr_21 [i_0] [1ULL] [i_0] [i_0] [i_0]) ? (arr_5 [(short)6] [i_1] [(short)5]) : (((/* implicit */int) (unsigned char)48))))));
                            }
                            arr_27 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)26336)) ? (((/* implicit */int) min(((unsigned short)39200), (((/* implicit */unsigned short) (unsigned char)234))))) : (((/* implicit */int) ((_Bool) (signed char)-124)))));
                            arr_28 [i_0] [i_0] [(short)10] [(short)10] = ((/* implicit */unsigned long long int) 9223372036854775800LL);
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_20 [i_0] [(short)9] [i_1] [(short)9] [i_3]);
                        }
                    } 
                } 
                var_22 += ((/* implicit */_Bool) max((((int) ((unsigned long long int) arr_25 [i_0] [(signed char)9] [i_0]))), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned short) arr_15 [i_1] [i_1] [i_0] [i_1]))))))))));
                var_23 = ((((((/* implicit */_Bool) (unsigned short)64843)) ? (min((((/* implicit */long long int) (_Bool)1)), (4891653753026208510LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) >> ((((-(((/* implicit */int) (unsigned short)26336)))) + (26347))));
            }
        } 
    } 
    var_24 ^= ((/* implicit */int) max((((/* implicit */long long int) ((unsigned int) (+(var_12))))), (((long long int) (_Bool)1))));
}
