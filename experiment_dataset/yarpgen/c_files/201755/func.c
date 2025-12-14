/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201755
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
    var_15 = (~(((/* implicit */int) var_10)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_0] = min((((long long int) (+(2176116323564512538LL)))), (((/* implicit */long long int) arr_1 [i_0])));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    var_16 -= ((/* implicit */unsigned long long int) (-(2443209119484281841LL)));
                    arr_9 [i_0] [1ULL] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) max((((/* implicit */unsigned long long int) ((unsigned int) 3643367195242650463ULL))), (arr_0 [i_1 - 2] [i_1 - 2]))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 2) 
                {
                    arr_14 [i_0] [i_1] [i_3] &= ((/* implicit */signed char) ((unsigned short) (~(arr_1 [i_1]))));
                    var_17 = ((/* implicit */long long int) min((var_17), ((~(((long long int) (unsigned char)249))))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((signed char) (short)-31470)))));
    var_19 &= ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 1 */
    for (short i_4 = 2; i_4 < 13; i_4 += 4) 
    {
        arr_17 [(unsigned short)9] [i_4 - 2] &= ((/* implicit */_Bool) 9223372036854775807LL);
        arr_18 [i_4] = ((/* implicit */long long int) (-((+(((/* implicit */int) (short)-32757))))));
        arr_19 [i_4 - 2] [i_4] = ((/* implicit */unsigned short) arr_7 [i_4] [i_4] [i_4]);
        arr_20 [i_4] [i_4] = ((/* implicit */short) (~(72057594037927935LL)));
        /* LoopSeq 1 */
        for (unsigned int i_5 = 4; i_5 < 12; i_5 += 4) 
        {
            var_20 = ((/* implicit */_Bool) 2443209119484281837LL);
            arr_24 [i_4] [i_5] = 1123546488689028558ULL;
            var_21 &= ((/* implicit */_Bool) (+(max((-1LL), (((/* implicit */long long int) (unsigned short)49256))))));
        }
    }
}
