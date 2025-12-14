/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38603
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
    for (signed char i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0] [i_1]);
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-112)) != (((((/* implicit */int) (unsigned char)250)) ^ (((/* implicit */int) ((unsigned short) 503316480LL))))))))));
                                var_15 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)25516)))));
                                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) 2LL)) || (((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = var_4;
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_6))));
    var_19 = ((/* implicit */unsigned char) var_3);
}
