/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46486
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) ((int) (-((~(((/* implicit */int) var_13)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 3; i_2 < 11; i_2 += 1) 
                {
                    var_15 |= ((/* implicit */unsigned long long int) ((((-1862084124463335232LL) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) arr_0 [i_0])) ? (1862084124463335231LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) - (1862084124463335231LL)))));
                    arr_8 [i_2] [4ULL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) * ((-(((/* implicit */int) (unsigned short)23433))))));
                }
                var_16 = (+(((unsigned int) 2927446409U)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            {
                var_17 &= ((/* implicit */signed char) ((unsigned short) (unsigned short)23437));
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_3])) * (((/* implicit */int) ((((/* implicit */int) arr_11 [i_3 - 1])) <= (((/* implicit */int) (_Bool)1))))))))));
                arr_14 [i_3 + 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (-5330626254231546331LL) : (-1862084124463335228LL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) arr_11 [i_4])) ? (var_9) : (((/* implicit */unsigned long long int) arr_9 [i_4])))))) - (((/* implicit */unsigned long long int) ((arr_12 [i_3 + 1]) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [(unsigned char)19])) || (((/* implicit */_Bool) (unsigned short)23433)))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 3; i_5 < 22; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)25328)) ? (((/* implicit */int) arr_15 [i_5] [i_4] [i_5 - 2] [i_6])) : (((/* implicit */int) arr_11 [i_3 + 1])))) > (((/* implicit */int) (unsigned short)40197))))), (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3 + 2] [i_4] [i_5] [i_6]))) : (var_9))), (((/* implicit */unsigned long long int) ((1862084124463335232LL) / (((/* implicit */long long int) var_8)))))))));
                            var_20 *= ((/* implicit */unsigned int) arr_15 [i_3 + 2] [i_3 + 1] [4ULL] [i_3]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 4; i_7 < 12; i_7 += 4) 
    {
        for (unsigned long long int i_8 = 1; i_8 < 12; i_8 += 2) 
        {
            {
                arr_25 [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_4 [i_7 - 2]) : (arr_4 [i_7 - 2])))) ? (max((((/* implicit */long long int) arr_11 [i_8 + 1])), (arr_4 [i_7 + 1]))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_8 - 1])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                {
                    for (unsigned short i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) ((((var_4) <= (var_8))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_8 - 1])) ? (arr_22 [i_7 + 1] [i_8 + 1] [i_8]) : (arr_24 [i_8 - 1]))))));
                            var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_7 - 1] [i_8 - 1] [i_9] [i_8 - 1] [20U] [i_9]))))) && (((/* implicit */_Bool) ((1862084124463335231LL) / (((/* implicit */long long int) 2927446413U)))))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_8))));
                            var_24 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)92))) / (18145401505617175386ULL)))) ? (((/* implicit */int) arr_23 [i_9] [10ULL])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_7] [i_7])) || (((/* implicit */_Bool) arr_15 [i_10] [i_9] [i_8] [i_7 - 3])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)24)), (1265146082U)))) > (min((arr_5 [i_7] [i_8] [i_9] [i_10]), (((/* implicit */unsigned long long int) (signed char)11)))))))) : (((arr_22 [i_8 - 1] [i_10] [i_10]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)17)))))));
                            var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) ((0LL) / (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
