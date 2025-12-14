/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224550
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
    var_10 = ((_Bool) ((_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_3)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */int) ((((var_5) & (((/* implicit */unsigned long long int) var_9)))) != (((/* implicit */unsigned long long int) var_8))));
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_0) : (3ULL)))))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((long long int) (signed char)16));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)228))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */short) var_9);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)187)) - (((/* implicit */int) (signed char)3))));
                                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (signed char)3)) : (-1438955823))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (short i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        var_15 -= ((/* implicit */unsigned char) (_Bool)1);
        var_16 -= ((/* implicit */signed char) ((unsigned short) max((((/* implicit */unsigned long long int) (_Bool)1)), (((var_6) * (var_6))))));
    }
}
