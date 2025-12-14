/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199559
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_11 [6LL] [(_Bool)1] [i_0] = ((/* implicit */long long int) ((((unsigned long long int) (-9223372036854775807LL - 1LL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((long long int) ((unsigned long long int) (_Bool)1))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))))));
                    arr_12 [i_0] [14ULL] = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                    var_14 *= var_6;
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (min((var_7), (var_3))))));
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    arr_21 [i_3] [i_5] [i_3] = ((/* implicit */long long int) (~((-(((/* implicit */int) (_Bool)1))))));
                    arr_22 [i_5] [i_5] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                }
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_27 [i_3] [i_4] [i_6] [i_7] &= ((/* implicit */_Bool) arr_8 [i_7] [i_6] [i_4] [i_3]);
                            var_16 ^= ((/* implicit */long long int) var_4);
                            arr_28 [i_3] [i_6] [i_4] [i_7] = min((-502931135474856987LL), ((+(7078008268853374849LL))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */long long int) (-(var_3)));
                var_18 = ((/* implicit */_Bool) var_12);
            }
        } 
    } 
}
