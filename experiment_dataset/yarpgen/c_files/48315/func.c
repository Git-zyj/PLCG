/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48315
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
    var_19 = ((/* implicit */unsigned int) var_0);
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) ^ (2881714230U)))))))));
    var_21 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) ((var_1) & (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_5 [i_0] [(unsigned char)3] [i_0])), (min((var_15), (((/* implicit */long long int) arr_5 [i_2] [i_1] [i_2])))))))));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (signed char)-123)))), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_3] [i_2])) > (((/* implicit */int) arr_0 [i_1] [i_3])))))))) ? ((~(min((438110371U), (((/* implicit */unsigned int) 1463968069)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)65268)) : (((/* implicit */int) ((unsigned char) var_2))))))));
                            var_24 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((arr_3 [i_1]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) var_16)))));
                        }
                    } 
                } 
                var_25 -= ((/* implicit */unsigned char) (_Bool)1);
            }
        } 
    } 
}
