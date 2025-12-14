/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237186
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
    var_12 = ((((/* implicit */_Bool) ((var_9) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_7))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_11));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 17; i_2 += 2) 
            {
                {
                    var_13 -= ((/* implicit */signed char) ((((/* implicit */int) ((max((((/* implicit */int) var_5)), (var_4))) < (((/* implicit */int) var_3))))) / (((/* implicit */int) (unsigned short)35204))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((int) var_10)) : (((/* implicit */int) ((signed char) var_4)))));
                        arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_6)))))));
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [i_1])))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65530))) : (0U))));
                        var_17 = ((/* implicit */unsigned long long int) min((min((arr_7 [i_4 - 1] [i_2 - 3] [i_1 + 3] [i_0 + 1] [i_0 + 1]), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) ((((/* implicit */long long int) arr_4 [i_2 - 1] [i_2 - 1] [i_0 + 1])) < (var_0))))));
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) (short)23376)), (var_7)))) > (((/* implicit */int) var_7))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_6))));
                        var_20 += ((signed char) var_10);
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
                    {
                        arr_17 [i_0 + 2] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_2] [i_6] = ((/* implicit */long long int) (+(((int) var_9))));
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 2; i_7 < 17; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_7 + 1] [i_1 + 3] [i_2] [i_7 + 1] [i_7] [i_2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) var_7))));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_6))));
                            var_23 = ((((/* implicit */_Bool) -1627360525947808864LL)) ? ((((_Bool)1) ? (-2509607937588525414LL) : (-2085180571646057918LL))) : (((/* implicit */long long int) ((/* implicit */int) var_6))));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (unsigned short)12447))) ? (((/* implicit */int) (unsigned short)28557)) : (((/* implicit */int) ((-7276590467597267651LL) == (((/* implicit */long long int) ((/* implicit */int) (short)29538))))))));
                        }
                        var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-13183))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0 + 1] [i_1 + 2] [i_2 - 3]))));
                    }
                    var_26 = ((/* implicit */short) min((var_26), (var_1)));
                }
            } 
        } 
    } 
}
