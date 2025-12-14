/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202887
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
    var_12 = ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_3)) ? (2072872869) : (-1833570385))))) % (((((/* implicit */_Bool) ((((/* implicit */unsigned int) 1833570364)) - (var_6)))) ? (((/* implicit */int) (_Bool)1)) : ((+(31))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) 1833570372);
                                var_14 = ((/* implicit */int) min((var_14), ((+(((((/* implicit */int) ((1833570364) >= (1833570381)))) / (max((-1833570391), (var_8)))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */int) (+(arr_6 [i_0] [i_0])));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) max((var_6), (((/* implicit */unsigned int) 67108863))));
}
