/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224378
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((-7760260252392305189LL) + (((arr_0 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1 - 3] [i_0]))) : (min((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)140))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_4 = 3; i_4 < 15; i_4 += 2) 
                            {
                                var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [(_Bool)1]))) | (-7760260252392305173LL))))));
                                arr_13 [i_0] [i_0] [i_2] [i_0] = (~(-1790562104));
                                arr_14 [i_0] [i_1 - 2] [i_2] [i_0] [i_4 + 2] [i_4 + 3] = ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_3] [i_3 + 2]);
                            }
                            var_11 += ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((arr_9 [(_Bool)1]), (((/* implicit */unsigned short) arr_10 [14ULL] [(unsigned char)2]))))), ((-(arr_11 [16LL])))))) || (((((/* implicit */int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)5)))) == (((/* implicit */int) arr_12 [(short)2] [i_3 + 2] [i_3] [i_3] [i_3] [i_3 + 2] [i_3]))))));
                            var_12 ^= ((/* implicit */unsigned long long int) min((min((arr_11 [4]), (((/* implicit */long long int) (unsigned short)27)))), (((/* implicit */long long int) (unsigned short)27))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = (((((~(16383LL))) + (9223372036854775807LL))) >> (((var_7) - (5063359960118816409ULL))));
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) max((((/* implicit */long long int) (+(67108862U)))), (max((((/* implicit */long long int) 4177920)), (-7760260252392305146LL))))))));
}
