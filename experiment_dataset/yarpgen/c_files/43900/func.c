/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43900
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
    var_15 = var_2;
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) (signed char)62);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_17 -= ((/* implicit */signed char) max(((-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0 - 1])))), (((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_0 + 1] [i_0 + 1])))));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0])) ^ (((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 -= ((((((/* implicit */int) var_13)) != (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 0ULL))))))) && (((/* implicit */_Bool) (signed char)62)));
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((unsigned char) var_13)))));
}
