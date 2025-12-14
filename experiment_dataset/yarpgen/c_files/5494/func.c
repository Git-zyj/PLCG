/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5494
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
    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(((/* implicit */int) (short)17505))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */int) var_12))))) : ((+(13276237887160820255ULL))))) << ((((((((~(((/* implicit */int) (unsigned short)47815)))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)144))))))) - (2147435803)))));
    var_16 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) (unsigned short)47815)) + (-758581810))) : (((((/* implicit */int) (unsigned short)62396)) >> (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) ((((var_8) != (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) && (((5763808473370063693ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9807))))))))));
    var_17 = ((/* implicit */int) ((min((((/* implicit */unsigned int) max((((/* implicit */short) var_12)), (var_3)))), (((((/* implicit */_Bool) 2744461682U)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    var_18 |= ((/* implicit */unsigned char) var_8);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_2] [i_1] [i_2] [(unsigned short)1] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_2])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_3] [i_4])) : ((-(((/* implicit */int) arr_7 [i_0] [i_2]))))))) ? (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_3]))) : (arr_2 [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [i_4] [i_3] [i_2] [i_2] [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) 4290180116U)) : (8862294035804570296ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2])) ? (1918239513U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49880))))))))))));
                                var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) 0))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) >= (((799977971379727283ULL) << (((/* implicit */int) (signed char)5)))))))) : (var_9)));
                                var_20 = ((/* implicit */unsigned short) (short)4672);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        arr_19 [i_5] [i_5] [i_2] [i_5 - 1] [i_2] [i_1] = ((/* implicit */long long int) (unsigned char)173);
                        arr_20 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 10630570U)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
                    }
                    var_21 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) (unsigned short)1578)))), (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))));
                }
            } 
        } 
    } 
}
