/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196358
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_14 ^= ((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)1))))));
                                var_15 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
                var_16 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) max(((short)23162), (((/* implicit */short) min(((unsigned char)62), (((/* implicit */unsigned char) (_Bool)1))))))))) != (0U)));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (signed char)28);
}
