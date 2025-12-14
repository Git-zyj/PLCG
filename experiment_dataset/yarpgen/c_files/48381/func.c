/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48381
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 3; i_2 < 22; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_12 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_0] [i_3 + 1])) & (((/* implicit */int) (unsigned short)57474))))) ? (((/* implicit */int) arr_2 [i_0] [i_4])) : ((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0]))))));
                                var_13 *= ((_Bool) 4294967279U);
                            }
                        } 
                    } 
                    var_14 -= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)40450))));
                }
                var_15 = ((/* implicit */signed char) var_6);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_4);
    var_17 = ((/* implicit */unsigned char) min(((~(1801998662118097186LL))), (((/* implicit */long long int) var_2))));
    var_18 = ((/* implicit */int) max((var_1), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -8401293373510980307LL)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25627))))))))));
}
