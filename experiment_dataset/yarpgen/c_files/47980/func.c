/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47980
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
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) 11U)) : (7399403392735917831LL))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_6 [i_0 - 2]))) / (((/* implicit */int) var_13))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) 7399403392735917831LL))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_18 [i_4] [11U] [i_2] [i_1] [6LL] = ((/* implicit */signed char) arr_2 [i_0 + 1]);
                                var_21 += ((/* implicit */signed char) ((((/* implicit */int) ((var_12) <= (((/* implicit */int) arr_2 [i_0 + 2]))))) / (var_5)));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-70))) >= (1U)));
                    arr_19 [i_0] [i_0] [14ULL] [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_16 [i_0] [i_1] [i_0 + 1] [(signed char)2] [i_1] [i_1] [i_2]), (arr_16 [i_0 - 2] [i_1] [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_1] [(unsigned short)0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) arr_16 [i_0 - 1] [i_1] [i_0 - 1] [i_0] [i_2] [i_1] [i_1]))))) : ((+(7U)))));
                    var_23 = ((/* implicit */signed char) ((5U) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 798621894U))))))));
                    var_24 = ((/* implicit */short) (+(((/* implicit */int) (signed char)-23))));
                }
                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) arr_5 [5ULL] [i_0 - 1]))));
                var_26 = (((!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))) ? ((-(var_6))) : (-7399403392735917832LL));
            }
        } 
    } 
}
