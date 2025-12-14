/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19443
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
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_17 = ((((/* implicit */_Bool) ((var_5) >> (((arr_1 [i_0 + 2]) - (1501492987U)))))) ? (min((((/* implicit */unsigned int) (unsigned short)4088)), (arr_1 [i_0 + 1]))) : (min((arr_1 [i_0 + 1]), (((/* implicit */unsigned int) var_12)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_18 = (_Bool)1;
                            var_19 = ((/* implicit */unsigned short) min((var_19), ((unsigned short)35260)));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) (((_Bool)0) ? (3129073572U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16376)))));
                                var_20 = ((/* implicit */int) (-(((long long int) var_11))));
                                arr_15 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3484084793U)) ? (((/* implicit */int) (signed char)-72)) : (arr_8 [21LL] [i_3 + 1])));
                            }
                            arr_16 [i_1] [i_1] = var_10;
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) arr_9 [i_0] [10] [i_1] [(_Bool)1]);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) min((var_22), (((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) 36028795945222144ULL)))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
}
