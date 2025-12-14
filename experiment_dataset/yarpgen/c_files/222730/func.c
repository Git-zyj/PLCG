/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222730
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
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_17))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_20 = ((((/* implicit */_Bool) ((arr_2 [i_2]) / (((((/* implicit */int) var_4)) * (((/* implicit */int) arr_8 [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) ((((-8079679875231383938LL) + (9223372036854775807LL))) << (((var_17) - (8265453155823947801LL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 8079679875231383937LL))))) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_0])))) : (((/* implicit */int) arr_0 [i_3] [i_1])));
                                arr_15 [i_4] [i_4] [i_0] [i_1] [i_4] [i_0] = ((((/* implicit */_Bool) max((arr_3 [i_0]), (((/* implicit */long long int) (-(arr_2 [i_3]))))))) ? (-8079679875231383938LL) : (((((/* implicit */_Bool) max(((unsigned char)255), (((/* implicit */unsigned char) (signed char)-72))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) & (8079679875231383937LL))) : (((/* implicit */long long int) arr_11 [i_1])))));
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max(((~(arr_6 [i_3] [i_2] [i_1]))), (((/* implicit */unsigned int) (((-(-1035845214))) % (var_2)))))))));
                                var_22 -= ((/* implicit */_Bool) max((min((0ULL), (((/* implicit */unsigned long long int) arr_5 [i_2])))), (((((324493905352949997ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))))) % (((unsigned long long int) arr_5 [(short)7]))))));
                                var_23 = arr_12 [i_0] [i_1] [i_2] [i_0] [i_4] [i_1] [i_3];
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        var_24 = (unsigned char)252;
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_21 [i_6] [i_5] [i_5] [i_1] [i_0] = ((/* implicit */unsigned char) var_7);
                            var_25 = ((/* implicit */long long int) arr_9 [i_5] [i_5 + 2] [2ULL] [i_5 + 2]);
                            var_26 = ((/* implicit */signed char) var_5);
                        }
                        for (short i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            var_27 = ((/* implicit */int) ((short) arr_8 [i_1] [i_5 + 2]));
                            var_28 |= ((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_0]);
                            var_29 = (~(((((/* implicit */_Bool) 841309867854469847ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_2] [i_7]))) : (var_1))));
                        }
                        for (int i_8 = 0; i_8 < 19; i_8 += 3) 
                        {
                            var_30 = ((int) arr_27 [i_5 - 1] [i_5 - 1] [i_5 + 2] [i_5 - 1] [i_5 + 1]);
                            var_31 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_1 [i_1] [i_0])))) ? (arr_7 [i_2] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [16] [i_2]))))))));
                            var_32 = ((/* implicit */unsigned short) -1035845231);
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_9 = 4; i_9 < 11; i_9 += 4) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 1) 
        {
            for (long long int i_11 = 0; i_11 < 15; i_11 += 4) 
            {
                {
                    var_33 ^= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                    var_34 = ((/* implicit */unsigned char) (!(var_16)));
                }
            } 
        } 
    } 
}
