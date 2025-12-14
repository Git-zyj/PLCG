/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32926
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max(((+(((/* implicit */int) var_9)))), (((/* implicit */int) arr_0 [i_1 + 2]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1] [i_0]))) : (3396000977U)))) ? (max((arr_2 [i_0]), (((/* implicit */unsigned int) (short)16383)))) : ((+(3297577859U)))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 18; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_13 [i_1 + 3] [i_2 + 2] [11U])) ? (((long long int) arr_0 [i_3])) : (((/* implicit */long long int) var_13)))) < (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                                var_16 = ((/* implicit */short) (+(((/* implicit */int) var_12))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 *= ((/* implicit */signed char) max((((min((14795015542458258388ULL), (((/* implicit */unsigned long long int) 1167468636U)))) >> (((898966319U) - (898966288U))))), (((/* implicit */unsigned long long int) (_Bool)1))));
}
