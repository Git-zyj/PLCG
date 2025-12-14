/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22301
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
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) (-(var_6)))) != (var_7))))) : (var_9))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    var_12 = ((/* implicit */short) ((long long int) ((((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (245760LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))) + (min((((/* implicit */long long int) 1983781260)), (9223372036854775807LL))))));
                    arr_7 [i_1] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((_Bool) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_2] [i_1] [i_0 - 1] [i_0])))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2] [i_1] [i_0] [i_4] = ((/* implicit */int) -6437377455285834237LL);
                                var_13 = ((/* implicit */_Bool) var_5);
                                var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -4LL)) ? (min((arr_9 [i_4 + 2]), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((3996189900640829153ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (-536870912)))) & (((((/* implicit */_Bool) arr_8 [i_0] [i_1])) ? (3LL) : (6486163621092250918LL))))) >= (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1])) ? (3116596913733577338LL) : (arr_2 [i_0 - 2] [i_0 - 4]))))))));
                }
                for (unsigned short i_5 = 4; i_5 < 18; i_5 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        var_16 = ((/* implicit */long long int) min((var_16), (((((((((/* implicit */_Bool) 4LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15453))) : (arr_3 [i_0] [i_1] [i_6]))) + ((-(20LL))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                        arr_20 [i_0 - 4] [i_1] [i_5] = ((/* implicit */short) min((max((arr_6 [i_0 + 1] [i_0 - 3] [i_0 - 3] [i_5 - 3]), (arr_6 [i_0 - 2] [i_0 - 3] [i_0 - 3] [i_5 - 2]))), (min((arr_6 [i_0 - 4] [i_0 - 1] [i_0 - 4] [i_5 - 4]), (arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 4] [i_5 - 3])))));
                        var_17 *= ((/* implicit */short) arr_1 [i_5 - 1]);
                    }
                    arr_21 [i_0] [i_1] [i_5] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_10 [i_5] [i_5] [i_1] [i_0 - 2] [i_0] [i_0]) < (((/* implicit */unsigned long long int) arr_16 [i_5])))))) : (((((/* implicit */_Bool) 9160900680163098448LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (3036272708562299975ULL)))))) ? (arr_10 [i_0] [i_0] [i_1] [i_1] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (536854528))))));
                    var_18 += ((/* implicit */short) (-9223372036854775807LL - 1LL));
                    var_19 ^= ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_5 [i_0 - 1] [i_0 + 1] [i_0 - 2] [i_5 - 3])))));
                }
                /* vectorizable */
                for (unsigned short i_7 = 4; i_7 < 18; i_7 += 1) /* same iter space */
                {
                    var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8707850959377215392LL)) && (((/* implicit */_Bool) (signed char)11))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((8388607LL) + (arr_11 [i_0 + 1] [i_1] [i_1] [i_0 - 3] [i_7] [i_1] [i_0 - 2])))) ? (((/* implicit */int) (short)22705)) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)10106))))));
                    var_22 = ((((((/* implicit */_Bool) arr_18 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)24668))) : (arr_0 [i_0 - 2] [i_0 - 2]))) / ((-(arr_22 [i_0] [i_1] [i_1]))));
                }
                /* LoopNest 3 */
                for (unsigned short i_8 = 1; i_8 < 16; i_8 += 4) 
                {
                    for (short i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 4) 
                        {
                            {
                                arr_30 [i_0] [i_0] [i_0] [i_0 - 3] [i_0] [i_8] = ((/* implicit */short) ((((var_1) || (((/* implicit */_Bool) arr_0 [i_8 + 2] [i_0 - 3])))) ? (((((/* implicit */_Bool) 16477507232306469266ULL)) ? (-4583173017055455140LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15450))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2])))));
                                arr_31 [i_0] [i_1] [i_8] = ((/* implicit */_Bool) (signed char)-50);
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) arr_25 [i_0] [i_1] [i_1]);
                var_24 += ((/* implicit */short) ((((/* implicit */_Bool) max((arr_22 [i_0 - 1] [i_0] [i_0 + 1]), (arr_22 [i_0 - 2] [i_0] [i_0 - 2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0 + 1] [i_0] [i_0 + 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 6891879331848255907LL)))))));
            }
        } 
    } 
    var_25 = var_7;
}
