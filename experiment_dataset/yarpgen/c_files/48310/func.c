/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48310
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2835248216U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_3)))) && ((_Bool)1))))));
                                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_2] [i_3] [i_3] [i_3 + 1] [i_3])) : (((/* implicit */int) arr_9 [i_2] [0U] [i_2] [i_3 + 1] [i_3]))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                            {
                                var_16 += ((/* implicit */long long int) ((int) max((((/* implicit */unsigned int) arr_7 [i_3 + 1])), (max((0U), (((/* implicit */unsigned int) (_Bool)1)))))));
                                var_17 = ((unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_3] [i_2] [i_0] [i_0])) ? (((((/* implicit */unsigned long long int) -2147483647)) % (19ULL))) : (((/* implicit */unsigned long long int) ((long long int) var_3)))));
                                var_18 = ((/* implicit */unsigned long long int) ((((long long int) arr_5 [i_0] [(_Bool)1] [i_2])) / (((/* implicit */long long int) ((arr_5 [i_5] [i_1] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))))));
                                var_19 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) var_7)) ^ (min((((/* implicit */long long int) (_Bool)1)), (7137678557673346982LL))))) < (((/* implicit */long long int) ((/* implicit */int) (short)-27761)))));
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_0 [i_2]))));
                            }
                            /* LoopSeq 1 */
                            for (signed char i_6 = 2; i_6 < 15; i_6 += 4) 
                            {
                                var_21 = ((/* implicit */unsigned char) max((((signed char) ((int) 1051944669U))), (((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_3 + 1] [i_6] [i_2] [(_Bool)1])) > (((/* implicit */int) arr_16 [i_3 + 1] [i_1] [i_6 + 1] [i_3] [i_6] [9ULL])))))));
                                arr_20 [8ULL] [i_1] [i_3] [i_3] [(signed char)9] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32768))) * (((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3] [i_6 - 1] [i_6] [i_6 + 1] [i_6] [i_3]))) / (max((((/* implicit */long long int) arr_2 [i_1])), (0LL)))))));
                                arr_21 [i_0] [i_0] [(unsigned short)4] [i_0] [7LL] [i_0] = ((/* implicit */int) ((((long long int) var_2)) < (((/* implicit */long long int) (+(3965970149U))))));
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_5))));
                            }
                            arr_22 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-640264818)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) 1046528LL))))))))));
                        }
                    } 
                } 
                arr_23 [i_1] |= ((/* implicit */unsigned int) (signed char)127);
            }
        } 
    } 
    var_23 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-109))))), (((((/* implicit */_Bool) (unsigned short)35283)) ? (3965970149U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7260))))))) : ((+((~(4294967295U)))))));
    var_24 &= ((/* implicit */short) var_7);
    var_25 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+(1U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (signed char)127)))))) : (var_3))), (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) var_11)), ((-9223372036854775807LL - 1LL)))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))))));
}
