/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37624
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
    var_17 = ((/* implicit */short) (unsigned char)233);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) (unsigned char)22);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_11 [i_4] [0LL] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) (unsigned char)227)))));
                                var_18 = ((((/* implicit */long long int) ((/* implicit */int) (!(arr_6 [i_4 - 1] [i_1 + 1] [i_1 + 1]))))) / (max((arr_9 [i_1 - 1]), (((/* implicit */long long int) max(((unsigned char)243), (((/* implicit */unsigned char) (_Bool)1))))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)6))))))))));
                arr_12 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_10 [i_0] [i_1 + 1] [i_0] [i_0] [i_0]) << (((209446279U) - (209446254U)))))) ? (((/* implicit */int) (unsigned short)10613)) : (((/* implicit */int) (unsigned char)20))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) var_5);
}
