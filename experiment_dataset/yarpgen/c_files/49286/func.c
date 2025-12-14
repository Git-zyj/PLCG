/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49286
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        {
                            var_16 -= ((/* implicit */_Bool) var_4);
                            var_17 = ((/* implicit */unsigned char) 2257686966U);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 3) 
                            {
                                arr_13 [i_0] [i_1] [i_0] [4] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2185466396U)) ? (1975377456U) : (1301726173U)));
                                arr_14 [i_0] [i_0] [i_4] = ((/* implicit */int) var_14);
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */int) arr_6 [10LL] [10LL] [i_0]);
                            }
                        }
                    } 
                } 
                var_18 |= ((/* implicit */unsigned short) ((((unsigned int) (_Bool)1)) >> (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_1 [(signed char)7]))))))));
            }
        } 
    } 
    var_19 = ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */unsigned int) var_1)) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25145))) + (var_0)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)));
}
