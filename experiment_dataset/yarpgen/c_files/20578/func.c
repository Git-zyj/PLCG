/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20578
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
    var_14 = ((/* implicit */signed char) var_5);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_15 = ((((((/* implicit */_Bool) (-(var_12)))) && (((/* implicit */_Bool) ((2366017795U) % (var_0)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))) : (min((arr_1 [i_0 + 1] [i_0 + 1]), (arr_1 [i_0] [i_0]))));
        arr_2 [i_0 + 1] [i_0 + 1] = ((/* implicit */short) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0]))))) : (((((/* implicit */int) var_6)) >> (((578875850U) - (578875829U))))))), (((/* implicit */int) arr_0 [i_0 + 1] [i_0]))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 4; i_4 < 22; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            {
                                var_16 -= ((/* implicit */unsigned char) ((var_6) ? ((~(((/* implicit */int) ((unsigned char) 3716091446U))))) : (((/* implicit */int) var_9))));
                                var_17 = ((/* implicit */short) min((((/* implicit */long long int) var_1)), ((+(arr_13 [i_2] [i_4] [i_4] [i_4 + 1])))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_12)))) ? (((((/* implicit */_Bool) var_0)) ? (arr_16 [(signed char)20] [(unsigned char)11] [i_2] [i_2] [i_3] [23ULL]) : (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) ((arr_6 [i_2]) | (((/* implicit */int) (_Bool)0)))))))) ? (((((/* implicit */_Bool) min((35184372088831ULL), (6178520175685183621ULL)))) ? (arr_7 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26342))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((578875833U), (((/* implicit */unsigned int) arr_0 [i_3] [i_2])))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (arr_17 [i_2])))))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned char)7)) && (((/* implicit */_Bool) ((int) var_1)))))));
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)236)) || (((/* implicit */_Bool) (((_Bool)0) ? (4294967295U) : (578875850U))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_23 [(signed char)14] [(signed char)14] &= (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
        var_21 = (+(((/* implicit */int) var_3)));
        var_22 = ((/* implicit */long long int) arr_9 [i_1] [i_1] [i_1]);
    }
    var_23 *= ((/* implicit */short) (~(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 13160536402959255563ULL)) && (((/* implicit */_Bool) -1)))))) + ((+(469154457U)))))));
}
