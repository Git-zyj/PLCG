/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227742
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_9 [i_0] = ((((/* implicit */int) arr_2 [i_2])) + (((((/* implicit */_Bool) arr_2 [i_1 - 2])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_3 [i_0])))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_16 = ((((/* implicit */int) (signed char)118)) >> (((4294967295U) - (4294967272U))));
                            var_17 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1]))) : (var_6))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned char) (~((~(arr_11 [i_2 - 1] [i_2] [i_2] [i_2])))));
                            arr_19 [i_0] [i_1] [i_2] [i_3] [(unsigned short)12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_14 [i_0] [i_1] [i_2 - 1]) + (((/* implicit */unsigned long long int) arr_0 [i_2] [i_2]))))) ? (arr_13 [i_0] [i_0] [i_2] [i_3] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_1] [i_2] [i_3] [i_5]))))) : ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35291))) ^ (6336474582956056970ULL)))))));
                        }
                        var_19 = ((/* implicit */unsigned int) (~(((max((((/* implicit */long long int) -1305713179)), (2985602164550136149LL))) ^ (((/* implicit */long long int) max((((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_3] [i_1])), (arr_6 [(unsigned char)18] [i_1 + 2] [(unsigned char)18]))))))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) max((var_2), (var_2))))))) ? ((~(var_6))) : (((/* implicit */unsigned int) (-(var_11))))));
}
