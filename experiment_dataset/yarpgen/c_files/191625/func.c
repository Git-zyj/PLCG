/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191625
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
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))));
        var_14 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_0 - 1]))))), (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 2]))) : (arr_0 [i_0 + 1])))));
    }
    for (unsigned int i_1 = 3; i_1 < 18; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (+(arr_0 [i_1]))))));
            var_16 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_6 [i_1 - 2] [i_1 - 1] [i_1 - 2])) ? (((/* implicit */int) arr_6 [i_1 - 3] [i_1 - 3] [i_1 + 1])) : (((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 2] [i_1 - 2])))), ((-(((/* implicit */int) (_Bool)0))))));
        }
        var_17 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((arr_8 [i_1 + 1] [16U] [i_1]) & (var_9)))) ? ((((_Bool)1) ? (((/* implicit */int) arr_6 [i_1] [10] [i_1])) : (((/* implicit */int) arr_3 [14])))) : (((((/* implicit */int) arr_5 [i_1])) / (((/* implicit */int) var_6))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
    {
        arr_11 [i_3] = ((/* implicit */signed char) ((0ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_9 [i_3])) / (((/* implicit */int) arr_10 [(short)6] [(short)6])))) * (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)15))))))) ? (min(((+(2097088))), (((/* implicit */int) arr_10 [i_3] [i_3])))) : ((+((+(((/* implicit */int) (_Bool)1)))))))))));
        var_19 ^= ((/* implicit */signed char) max((((/* implicit */unsigned int) min((((/* implicit */signed char) var_6)), (arr_9 [i_3])))), (max((0U), (((/* implicit */unsigned int) arr_9 [i_3]))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_2)) / (((/* implicit */int) var_2)))) + (((/* implicit */int) arr_14 [i_4]))));
        var_21 = ((/* implicit */signed char) (((-(((/* implicit */int) var_11)))) - (((/* implicit */int) (short)32767))));
    }
    /* LoopNest 2 */
    for (unsigned int i_5 = 1; i_5 < 19; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            {
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_5 + 1] [i_5 + 1])) ? (max((((/* implicit */int) arr_18 [i_5 - 1] [i_5 - 1] [i_5 + 1])), (((((/* implicit */int) var_10)) - (((/* implicit */int) var_5)))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6)))) >= (((long long int) arr_9 [i_6])))))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    for (long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_6])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)124))));
                            arr_25 [i_6] [i_6] [i_6] [i_6] [i_6] = ((((/* implicit */_Bool) max((arr_24 [i_5 + 1]), (arr_24 [i_5 - 1])))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_9)) ? (arr_17 [i_7] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) : (max((((/* implicit */long long int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_6))))), ((-(3579830126171441342LL))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */_Bool) ((long long int) ((((((/* implicit */_Bool) var_4)) ? (arr_19 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [i_6]))))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_5])))))))));
                var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_13 [18ULL] [i_5])))) ^ ((~(((/* implicit */int) arr_23 [i_5] [i_5] [i_5 + 1] [i_5] [i_5 + 1] [(_Bool)1]))))))) & (((unsigned long long int) arr_12 [i_5 - 1] [i_5]))));
            }
        } 
    } 
}
