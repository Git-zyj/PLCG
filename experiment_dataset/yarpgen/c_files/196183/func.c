/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196183
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
    var_16 = ((/* implicit */unsigned int) (~(max((((((((/* implicit */int) (signed char)-31)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))), (((((/* implicit */int) (unsigned short)44029)) << (((((-756271331138860688LL) + (756271331138860713LL))) - (12LL)))))))));
    var_17 = ((/* implicit */_Bool) ((6519142977128450640ULL) << (((3510073314462624439ULL) - (3510073314462624431ULL)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (short)11548)) < (((/* implicit */int) arr_3 [i_0] [i_1]))));
            arr_6 [i_1] [i_0] [5U] = ((/* implicit */unsigned long long int) arr_1 [(unsigned short)16] [(unsigned short)16]);
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) arr_12 [i_4] [(signed char)22] [i_2] [i_0]);
                            arr_16 [(unsigned short)19] [i_1] [i_3] [i_2] [i_4] = ((/* implicit */long long int) var_5);
                            var_19 = ((/* implicit */short) arr_3 [23U] [i_0]);
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */int) (((+(((/* implicit */int) var_3)))) > (((((/* implicit */int) arr_3 [i_0] [(short)17])) >> (((/* implicit */int) arr_9 [i_1] [i_1 - 1] [(signed char)13]))))));
        }
        arr_17 [i_0] |= ((/* implicit */unsigned char) max((-5330583349520875671LL), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)9))) ^ (3168840683U))))));
    }
}
